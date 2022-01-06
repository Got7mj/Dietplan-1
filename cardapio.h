/////////////////////////////////////////////////////////////////////////////////////////
///                                                                                   ///
///                   Universidade Federal do Rio Grande do Norte                     ///
///                   Centro de Ensino Superior do Seridó                             ///
///                   Departamento de Computação e Tecnologia                         ///
///                   Disciplina DCT1106 - Programação                                ///
///                   Projeto Sistema de Planejamento de Dieta                        ///
///                   Desenvolvido por mariana                                        ///
///                                                                                   ///
/////////////////////////////////////////////////////////////////////////////////////////



typedef struct cardapio Cardapio;

struct cardapio {
    char num[12];
    char criacao[11];
    int status;
};

void moduloCardapio(void);
void menuCardapio(void);

Cardapio* telaCadastrarCardapio(void);
char* telaPesquisarCardapio(void);
void telaAlterarCardapio(void);
void telaExcluirCardapio(void);
void gravarCardapio(Cardapio*);

void cadastrarCardapio(void);
void pesquisarCardapio(void);
void alterarCardapio(void);
void excluirCardapio(void);

Cardapio* buscarCardapio(char*);
void exibirCardapio(Cardapio*);