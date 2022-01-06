#include <stdio.h>
#include <stdlib.h>
#include "receita.h"
#include "biblioteca.h"


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


void cadastrarReceita(void) {
    Receita* rct;

    rct = telaCadastrarReceita();
    gravarReceita(rct);
    free(rct);
}


void pesquisarReceita(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaPesquisarReceita();
}


void alterarReceita(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaAlterarReceita();
}


void excluirReceita(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaExcluirReceita();
}



void menuReceita(void) {
    char op;
    
    limpaTela();
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
    delay(1);
    return op;       
}
           
           
           
 void telaErroArquivoReceita(void) {
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
	printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
	printf("///           = = =  com informações sobre as Receitas = = =              ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
}
 


  Receita* telaCadastrarReceita(void) {
    Receita rct;
    rct = (Receita*) malloc(sizeof(Receita));

    limpaTela();
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
    scanf("%[0-9/]", criacao);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return rct;
}



void telaPesquisarReceita(void) {
    char num[12];
    
    limpaTela();
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
    delay(1);
}
   


void telaAlterarReceita(void) {
    char num[12];
    
    limpaTela();
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
    delay(1);
}
   


void telaExcluirReceita(void) {
    char num[12];
    
    limpaTela();
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
    delay(1);
}  



void gravarReceita(Receita* rct) {
    FILE* fp;

	fp = fopen("receita.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoReceita();
	}
	fwrite(rct, sizeof(Receita), 1, fp);
	fclose(fp);
}