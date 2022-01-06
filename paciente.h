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

typedef struct paciente Paciente;

struct paciente {
    char CPF[12];
    char nome[51];
    char idade[12];
    char peso[12];
    char alt[12];
    char email[51];
    char nasc[11];
    char celular[12];
    int status;
};

void moduloPaciente(void);
char menuPaciente(void);

Paciente* telaPreencherPaciente(void);
char* telaPesquisarPaciente(void);
char* telaAlterarPaciente(void);
char* telaExcluirPaciente(void);
void telaErroArquivo(void);

void cadastrarPaciente(void);
void pesquisarPaciente(void);
void alterarPaciente(void);
void excluirPaciente(void);
void gravarPaciente(Paciente*);
void exibirPaciente(Paciente*);

Paciente* buscarPaciente(char*);
void exibirPaciente(Paciente*);
void regravarPaciente(Paciente*);