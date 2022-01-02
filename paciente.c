#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "paciente.h"



//////
////// Funções do Módulo Paciente
//////

void moduloPaciente(void);
    char opcao;
    do {
        opcao = telaMenuPaciente();
        switch(opcao) {
            case '1': 	telaCadastrarPaciente();
                        break;
	          case '2':   telaPesquisarPaciente();
	    		              break;
	          case '3':   telaAlterarPaciente();
	    		              break;
	          case '4':   telaExcluirPaciente();
	    		              break;
	      } 		
    } while (opcao != '0');
}



void telaMenuPaciente(void) {
    char op;
    
    system("clear||cls");
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
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
    return op;
}

           
           
void telaCadastrarPaciente(void) {
    char cpf[12];
    char nome[51];
    char idade[12];
    char peso[12];
    char alt[12];
    char email[51];
    char nasc[11];
    char celular[12];
  
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Cadastrar Paciente = = = = = = = =             ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                  CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                  Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///                  Idade: ");
    scanf("%[0-9]", idade);
    getchar();
    printf("///                  Peso: ");
    scanf("%[0-9]", peso);
    getchar();
    printf("///                  Altura: ");
    scanf("%[0-9]", alt);
    getchar();
    printf("///                  E-mail: ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf("///                  Data de Nascimento (dd/mm/aaaa): ");  
    scanf("%[0-9]", nasc);
    getchar();
    printf("///                  Celular (apenas números):  ");
    scanf("%[0-9]", celular);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}
           


void telaPesquisarPaciente(void) {
    char cpf[12];
    
    system("clear||cls");
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
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}


 
void telaAlterarPaciente(void) {
    char cpf[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Paciente = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf;
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                                ///n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaExcluirPaciente(void) {
    char cpf[12];
    
    system("clear||cls");
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
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1); 
}