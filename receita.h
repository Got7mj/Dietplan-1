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



typedef struct  receita Receita;

struct receita {
    char num[12];
    char criacao[11];
    int status;
};


void moduloReceita(void);
char menuReceita(void);

Receita* telaCadastrarReceita(void);
void telaPesquisarReceita(void);
void telaAlterarReceita(void);
void telaExcluirReceita(void);

void cadastrarReceita(void);
void pesquisarRceita(void);
void alterarReceita(void);
void excluirReceita(void);
void gravarReceita(Receita*);
