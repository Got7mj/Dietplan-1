#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cardapio.h"
#include "biblioteca.h"

/////
///// Funções do Módulo Cardápio
/////

void moduloCardapio(void) {
    char opcao;
    do {
        opcao = telaMenuCardapio();
        switch(opcao) {
            case '1':   telaCadastrarCardapio();
                        break;
            case '2':  telaPesquisarCardapio();
                        break;
            case '3':  telaAlterarCardapio();
                        break;
            case '4':  telaExcluirCardapio();
                        break;
        }
    } while (opcao != '0');
}



char menuCardapio(void) {
    char op;

    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
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
    do {
        printf("///               Numeração (apenas números): ");  
        scanf("%[^\n]", num);
        getchar();
    } while (!validarNum(num));
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

