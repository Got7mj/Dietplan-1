#include <stdio.h>
#include <stdlib.h>
#include <unist.h>
#include "receita.h"



///////
//////Funções do Módulo Receita
//////

void moduloReceita(void);
     char opcao;
     do {
        opcao = telaMenuReceita();
        switch(opcao) {
            case '1':   telaCadastrarReceita();
                        break;
	        case '2':   telaPesquisarReceita();
	    		        break;
	        case '3':   telaAlterarReceita();
	    		        break;
	        case '4':   telaExcluirReceita();
	    		        break;
	    } 		
    } while (opcao != '0');
}



void telaMenuReceitas(void) {
    char op;
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///            = = = = = = = = = = Menu Receita = = = = = = = = = = =             ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///              1. Cadastrar Receita                                             ///\n");
    printf("///              2. Pesquisar Receita                                             ///\n");
    printf("///              3. Alterar Receita                                               ///\n");
    printf("///              3. Excluir Receita                                               ///\n");
    printf("///              0. Voltar ao menu anterior                                       ///\n");
    primtf("///                                                                               ///\n");
    printf("///              Escolha a opção desejada: ");                                     
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
           
           
           
  void telaCadastrarReceita(void) {
    char num[12];
    char criacao[11];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = Cadastrar Receita = = = = = = = =            ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Numeração (apenas números): ");  
    scanf("%[0-9]", num);
    getchar();
    printf("///                  Data da Criação (dd/mm/aaaa): ");
    scanf("%[0-9]", criacao);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaPesquisarReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Pesquisar Receita = = = = = = = = =            ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}
   


void telaAlterarReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Receita = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}
   


void telaExcluirReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Excluir Receita = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                 Informe a numeração (apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}  