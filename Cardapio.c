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
    Cardapio *car;

    car = telapreecherCardapio();
    gravarCardapio(car);
    free(car);
}


void pesquisarCardapio(void) {
    Cardapio* car;
    char* num;
    
    num = telapesquisarCardapio();
    car = buscarCardapio(num);
    exibirCardapio(car);
    free(car);
    free(num);
}


void alterarCardapio(void) {
    Cardapio* car;
    char* num;

    num = telaAlterarCardapio();
    car = buscarCardapio(num);
    if (car == NULL) {
        printf("\n\nCardapio não encontrado!\n\n");
    } else {
              car = telaPreencherCardapio();
              strcpy(car->num; num);
              // Outra opção:
              // excluirCardapio(num);
              // gravarCardapio(num);
              free(car);
    }
}


void excluirCardapio(void) {
    Cardapio* car;
    char *num;

    num = telaExcluirCardapio();
    car = (Cardapio*) malloc(sizeof(Cardapio));
    car = buscarCardapio(num);
    if (car == NULL) {
        printf("\n\nCardapio não encontrado!\n\n");
    } else {
             car->status = False;
             regravarCardapio(car);
             free(car);
    }
    free(num);
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



void telaErroArquivo(void) {
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
	printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
	printf("///           = = =  com informações sobre os Cardapios = = =             ///\n");
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



}
Cardapio* telapreecherCardapio(void) {
    Cardapio *car;
        limpaTela();
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                               ///\n");
        printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
        printf("///                = = = = = = = = = Cadastrar Cardápio = = = = = = = =           ///\n");
        printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
        printf("///                                                                               ///\n");                                                                             
    car = (Cardapio*) malloc(sizeof(Cardapio));
    do {
        printf("///               Numeração (apenas números): ");  
        scanf("%[^\n]", car->num);
        getchar();
    } while (!validarNum(car->num));
        printf("///                  Data da Criação (dd/mm/aaaa): ");
        scanf("%[0-9]", car->criacao);
        getchar();
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
        return car;
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



char* telaAlterarCardapio(void) {
    char* num;
    num = (char*) malloc(12*sizeof(char));
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
    return num;
}



char telaExcluirCardapio(void) {
    char* num;
    num = (char*) malloc(12*sizeof(char));
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
    return num;
}



void gravarCardapio(Cardapio* car) {
    FILE* fp;

    fp = fopen("cardapio.dat", "ab");
    if (fp == NULL) {
            telaErroArquivo();
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
            telaErroArquivo();
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



void regravarCardapio(Cardapio* car, char* num) {
    int achou;
    FILE* fp;
    Cardapio* carLido;

    carLido = (Cardapio*) malloc(sizeof(Cardapio));
    fp = fopen("cardapios.dat", "r+b");
    if (fp == NULL) {
            telaErroArquivo();
    }
    //while(!feof(fp)) {
    achou = False;
    while(fread(carLido, sizeof(Cardapio), 1, fp) && !achou) {
            //fread(carLido, sizeof(Cardapio), 1, fp);
            if (strcmp(carLido->num, car->num) == 0) {
                    achou = True;
                    fseek(fp, -1*sizeof(Cardapio), SEEK_CUR);
        	fwrite(car, sizeof(Cardapio), 1, fp);
			//break;
            }
    }
    fclose(fp);
    free(carLido);
} 


