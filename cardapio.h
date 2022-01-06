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

void telaCadastrarCardapio(void);
void telaPesquisarCardapio(void);
void telaAlterarCardapio(void);
void telaExcluirCardapio(void);

void cadastrarCardapio(void);
void pesquisarCardapio(void);
void alterarCardapio(void);
void excluirCardapio(void);