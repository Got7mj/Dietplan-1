#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"
#include "biblioteca.h"

typedef struct paciente;

void moduloPaciente(void);
    char opcao;
    do {
        opcao = menuPaciente();
        switch(opcao) {
            case '1': 	cadastrarPaciente();
                        break;
	        case '2':   pesquisarPaciente();
	    		        break;
	        case '3':   alterarPaciente();
	    		        break;
	        case '4':   excluirPaciente();
	    		        break;
	    } 		
    } while (opcao != '0');
}



void cadastrarPaciente(void){
    Paciente *pac;
    // função ainda em desenvolvimento
    
    // ler os dados do paciente com a função telaCadastrarPaciente()
    pac = telaPreencherPaciente();

    // gravar o registro no arquivo de pacientes
    gravarPaciente(pac);

    // liberar o espaço de memória da estrutura 
    free(pac);
}



void atualizarPaciente(void) {
  Paciente* pac;
  char* cpf;
	// função ainda em desenvolvimento

	// exibe a tela apenas para testes
	telaAtualizarPaciente();
	cpf = telaAtualizarPaciente();

  // pesquisa o paciente no arquivo
  pac = buscarPaciente(cpf);

  if (pac == NULL) {
    printf("\n\nPaciente não encontrado!\n\n");
  } else {
    regravarPaciente(pac, cpf);
  }


}


void excluirPaciente(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaExcluirPaciente();
}



void telaMenuPaciente(void) {
    char op;
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = Menu Paciente = = = = = = = = =            ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                   1. Cadastrar um novo Paciente                               ///\n");
    printf("///                   2. Pesquisar por Paciente                                   ///\n");
    printf("///                   3. Atualizar o cadastro de um Paciente                      ///\n");
    printf("///                   4. Excluir um paciente do sistema                           ///\n");
    printf("///                   0. Voltar ao menu anterior                                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return op;
}

           
           
Paciente* telaPreencherPaciente(void) {
    Pacente *pac;
  
        limpaTela();
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                               ///\n");
        printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
        printf("///                = = = = = = = = Cadastrar Paciente = = = = = = = =             ///\n");
        printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
        printf("///                                                                               ///\n");
pac = (Paciente*) malloc(sizeof(Paciente)); 
do {
        printf("///                  CPF (apenas números): ");
        scanf("%[0-9]", pac->cpf);
        getchar();
} while (!validarCPF(pac->cpf));
        printf("///                  Nome completo: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", pac->nome);
        getchar();
        printf("///                  Idade: ");
        scanf("%[0-9]", pac->idade);
        getchar();
        printf("///                  Peso: ");
        scanf("%[0-9]", pac->peso);
        getchar();
        printf("///                  Altura: ");
        scanf("%[0-9]", pac->alt);
        getchar();
        printf("///                  E-mail: ");
        scanf("%[A-Za-z0-9@._]", pac->email);
        getchar();
        printf("///                  Data de Nascimento (dd/mm/aaaa): ");  
        scanf("%[0-9]", pac->nasc);
        getchar();
do {
        printf("///                  Celular (apenas números com DDD):  ");
        scanf("%[0-9]", pac->celular);
        getchar();
} while (!validarCelular(pac->celular));
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
        return pac;
}
           


char telaPesquisarPaciente(void) {
    char* cpf;
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///             = = = = = = = = Pesquisar Paciente = = = = = = = =                ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}


 
char telaAlterarPaciente(void) {
    char* cpf;
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Paciente = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                                ///n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}



char telaExcluirPaciente(void) {
    char* cpf;
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///              = = = = = = = = Excluir Paciente = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///               Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1); 
    return cpf;
}



void gravarPaciente(Paciente* pac) {
    FILE* fp;

  fp = fopen("pacientes.dat", "ab");
   if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(pac, sizeof(Paciente), 1, fp);
  fclose(fp);
}



Paciente* buscarPaciente(char* cpf) {
    FILE* fp;
    Paciente* pac;

    pac(Paciente*) malloc(sizeof(Paciente));
    fp = fopen("pacientes.dat", "rb");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      (1);
    }
    while(!feof(fp)) {
      fread(pac, sizaof(Paciente), 1, fp);
      if (strcm(pac->cpf, cpf) == 0) {
      fclose(fp);
      return pac;    
      }
    }
    fclose(fp);
    return NULL;
}



void exibirPaciente(Paciente* pac) {
    if (pac == NULL) {
        printf("\n= = = Paciente Inexistente = = =\n");
    } else {
        printf("\n= = = Paciente Cadastrado = = =\n");
        printf("CPF do Paciente: %s\n", pac->cpf);
        printf("Nome do Paciente: %s\n", pac->nome);
        printf("Idade do Paciente: %s\n", pac->idade);
        printf("Peso do Paciente: %s\n", pac->peso);
        printf("Altura do Paciente: %s\n", pac->altura);
        printf("E-mail do Paciente: %s\n", pac->email);
        printf("Data de Nasc: %s\n", pac->nasc);
        printf("Celular: %s\n", pac->celular);
    }
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
}  



void regravarPaciente(Paciente* pac, char* cpf) {
    
}