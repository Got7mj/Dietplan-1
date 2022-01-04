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
char menuCardapio(void);
Cardapio* telapreecherCardapio(void);
char* telaPesquisarCardapio(void);
char* telaAlterarCardapio(void);
char* telaExcluirCardapio(void);
void telaErroArquivo(void);
void cadastrarCardapio(void);
void pesquisarCardapio(void);
void alterarCardapio(void);
void excluirCardapio(void);
void gravarCardapio(Cardapio*);
void exibirCardapio(Cardapio*);
Cardapio* buscarCardapio(char);
void exibirCardapio(Cardapio*);
void regravarCardapio(Cardapio*);

