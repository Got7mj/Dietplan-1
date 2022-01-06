#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    Cardapio* cad;

    cad = telaCadastrarCardapio();
    gravarCardapio(cad);
    free(cad);
}


void pesquisarCardapio(void) {
    Cardapio* cad;
    char* num;

    num = telaPesquisarCardapio();
    cad = buscarCardapio(cad);
    exibirCardapio(cad);
    free(cad);
    free(num);
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



void telaErroArquivoCardapio(void) {
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
	printf("///                = = = = = = =  Ops! Ocorreu em erro = = = = = =                ///\n");
	printf("///                = = =  Não foi possível acessar o arquivo = = =                ///\n");
	printf("///                = = = com informações sobre os cardápios = = =                 ///\n");
	printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
	printf("///                = =  Pedimos desculpas pelos inconvenientes = =                ///\n");
	printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
}



Cardapio* telaCadastrarCardapio(void) {
    Cardapio* cad;
    cad = (Cardapio*) malloc(sizeof(Cardapio));

    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = = Cadastrar Cardápio = = = = = = = =           ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Numeração (apenas números): ");  
    scanf("%[0-9]", cad->num);
	getchar();
    printf("///                    Data da Criação (dd/mm/aaaa): ");
    scanf("%[0-9/]", cad->criacao);
    getchar();
    cad->status = True;
    printf("///                                                                               ///\n");
	printf("///                                                                               ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return cad;
}



char* telaPesquisarCardapio(void) {
    char* num;
    num = (char*) malloc(12*sizeof(char));
    
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
    return num;
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



void gravarPaciente(Paciente* pac) {
    FILE* fp;

    fp = fopen("cardapio.dat", "ab");
    if (fp == NULL) {
            telaErroArquivoCardapio();
    }
    fwrite(car, sizeof(Cardapio), 1, fp);
    fclose(fp);   
}


Cardapio* buscarCardapio(char* num) {
    FILE* fp;
    Cardapio* car;

    car = (Cardapio*) malloc(sizeof(Cardapio));
    fp = fopen("Cardapio.dat", "rb");
    if (fp == NULL) {
            telaErroArquivoCardapio();
    }
     while(fread(car, sizeof(Cardapio), 1, fp)) {
            if ((strcmp(car->num, num) == 0) && (car->status == True)) {
                    fclose(fp);
                    return car;
            }
    }
    fclose(fp);
    return NULL;
}



void exibirCardapio(Cardapio* car) {

  if (car == NULL) {
    printf("\n= = = Cardapio Inexistente = = =\n");
  } else {
    printf("\n= = = Cardapio Cadastrado = = =\n");
    printf("Numeração: %s\n", car->num);
    printf("Data de criação: %s\n", car->cria);
    printf("Status: %d\n", car->status);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
} 