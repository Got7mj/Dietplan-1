#include <stdio.h>
#include <stdlib.h>
#include "cardapio.h"
#include "biblioteca.h"

typedef struct cardapio Cardapio;

void moduloCardapio(void) {
    char opcao;
    do {
        opcao = menuCardapio();
        switch(opcao) {
            case '1':   cadastrarCardapio();
                        break;
            case '2':   pesquisarCardapio();
                        break;
            case '3':   alterarCardapio();
                        break;
            case '4':   excluirCardapio();
                        break;
        }
    } while (opcao != '0');
}


void cadastrarCardapio(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaCadastrarCardapio();
}


void pesquisarCardapio(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaPesquisarCardapio();
}


void alterarCardapio(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaAlterarCardapio();
}


void excluirCardapio(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaExcluirCardapio();
}    



char menuCardapio(void) {
    char op;
    limpaTela();
    printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                               ///\n");
	printf("///                = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
    printf("///               = = = = = = = = = = Menu Cardápio = = = = = = = = = =           ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
    printf("///                                                                               ///\n");
    printf("///                1. Cadastrar um novo Cardápio                                  ///\n");
    printf("///                2. Pesquisar a numeração de um Cardápio                        ///\n");
    printf("///                3. Atualizar o cadastro do Cardápio                            ///\n");
    printf("///                4. Excluir um Cardápio do sistema                              ///\n");
    printf("///                0. Voltar ao menu anterior                                     ///\n");
    printf("///                                                                               ///\n");
    printf("///                Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                               ///\n");
	printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return op;
}



void telaCadastrarCardapio(void) {
    char num[12];
    char criacao[11];
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = = Cadastrar Cardápio = = = = = = = =           ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///               Numeração (apenas números): ");  
    scanf("%[^\n]", num);
    getchar();
    printf("///                  Data da Criação (dd/mm/aaaa): ");
    scanf("%[0-9]", criacao);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}



void telaPesquisarCardapio(void) {
    char num[12];
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Pesquisar Cardápio = = = = = = = =              ///\n");
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



void telaAlterarCardapio(void) {
    char num[12];
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Cardápio = = = = = = = = =             ///\n");
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



void telaExcluirCardapio(void) {
    char num[12];
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Excluir Cardápio = = = = = = = = =              ///\n");
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