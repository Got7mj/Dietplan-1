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
    // função ainda em desenvolvimento

    // ler os dados do Cardapio
    car = telapreecherCardapio();

    // gravar o registro no arquivo de Cardapio
    gravarCardapio(car);

    // liberar o espaço de memória da estrutura 
    free(car);
}


void pesquisarCardapio(void) {
    Cardapio* car;
    char* num;
    // função ainda em desenvolvimento
    car = telapesquisarCardapio();

    // pesquisa cardapio no arquivo
    car = buscarCardapio(num);

    // exibe cardapio pesquisado
    exibirCardapio(car);
    free(car);
    free(num);
}

void alterarCardapio(void) {
    Cardapio* car;
    char* num;
    // função ainda em desenvolvimento

	// exibe a tela apenas para testes
    telaAlterarCardapio();
    num = telaAlterarCardapio();

    // pesquisar cardapio no arquivo
    car = buscarCardapio(num);

    if (car == NULL) {
        printf("\n\nCardapio não encontrado!\n\n");
    } else {
        regravarCardapio(car, num);
    }
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
        scanf("%[0-9]", criacao);
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
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(aln, sizeof(Cardapio), 1, fp);
  fclose(fp);
}



Cardapio* buscarCardapio(char* num) {
    FILE* fp;
    Cardapio* car;
    car = (Cardapio*) malloc(sizeof(Cardapio));
  fp = fopen("Cardapio.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(car, sizeof(Cardapio), 1, fp);
    if (strcmp(car->num, num) == 0) {
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
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}


void regravarCardapio(Cardapio* car, char* num) {

} 


