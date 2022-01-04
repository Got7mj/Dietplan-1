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
    
    pac = telaPreencherPaciente();
    gravarPaciente(pac);
    free(pac);
}



void pesquisarPaciente(void) {
  Paciente* pac;
  char* cpf;
	
  cpf = telaPesquisararPaciente();
  pac = buscarPaciente(cpf);
	exibirPaciente(pac);
  free(pac);
  free(cpf);
}


void alterarPaciente(void) {
  Paciente* pac;
  char* cpf;

  cpf = telaAlterarPaciente();
  pac = buscarPaciente(cpf);
  if (pac == NULL) {
  printf("\n\nPaciente não encontrado!\n\n");
  } else {
            pac = telaPreencherPaciente();
            strcpy(pac->cpf, cpf);
            regravarPaciente(pac);
            // Outra opção:
            // excluirPaciente(cpf);
            // gravarPaciente(pac);
  }
  free(cpf);
}


void excluirPaciente(void) {
  Paciente* pac;
  char *cpf;

	cpf = telaExcluirPaciente();
  pac = (Paciente*) malloc(sizeof(Paciente));
  pac = buscarPaciente(cpf);
  if (pac == NULL) {
  printf("\n\nPaciente não encontrado!\n\n");
  } else {
            pac->status = False;
            regravarPaciente(pac);
            free(pac);
  }
  free(cpf);
}



char menuPaciente(void) {
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

           
           
void telaErroArquivo(void) {
  limpaTela();
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
	printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
	printf("///           = = =com informações sobre os Pacientes = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
	printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
}



Paciente* telaPreencherPaciente(void) {
    Paciente *pac;
  
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

    cpf = (char*) malloc(12*sizeof(char));
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
    
    cpf = (char*) malloc(12*sizeof(char));
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
    
    cpf = (char*) malloc(12*sizeof(char));
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
          telaErroArquivo();
  }
  fwrite(pac, sizeof(Paciente), 1, fp);
  fclose(fp);
}



Paciente* buscarPaciente(char* cpf) {
    FILE* fp;
    Paciente* pac;

    pac = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("pacientes.dat", "rb");
    if (fp == NULL) {
            telaErroArquivo();
    }
    while(fread(pac, sizeof(Paciente), 1, fp)) {
            if (strcm(pac->cpf, cpf) == 0) && (pac->status == True)) {
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
        printf("Status: %d\n", pac->status);
    }
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
}  



void regravarPaciente(Paciente* pac, char* cpf) {
        int achou;
        FILE* fp;
        Paciente* pacLido;

        pacLido = (Paciente*) malloc(sizeof(Paciente));
        fp = fopen("pacientes.dat", "r+b");
        if (fp == NULL) {
                telaErroArquivo();
        }
        //while(!feof(fp)) {
        achou = False;
        while(fread(pacLido, sizeof(Paciente), 1, fp) && !achou) {
                //fread(pacLido, sizeof(Paciente), 1, fp);
                if (strcmp(pacLido->cpf,, pac->cpf) == 0) {
                      achou = True;
                      fseek(fp, -1*sizeof(Paciente), SEEK_CUR);
                fwrite(pac, sizeof(Paciente), 1, fp);
                        //break;
                }
        }
        fclose(fp);
        free(pacLido)
}
