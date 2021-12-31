#include <stdio.h>
#include <stdlib.h>



/////
// Assinatura das funções

void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
void telaMenuCardapio(void);
void telaCadastrarCardapio(void);
void telaPesquisarCardapio(void);
void telaAlterarCardapio(void);
void telaExcluirCardapio(void);



/////
// Programa principal

int main(void) {
    telaSobre();
    telaPrincipal();
    telaEquipe();
    telaMenuCardapio();
    telaCadastrarCardapio();
    telaPesquisarCardapio();
    telaAlterarCardapio();
    telaExcluirCardapio();
    return 0;
}



/////
// Funções

void telaSobre(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    Universidade Federal do Rio Grande do Norte                    ///\n");
    printf("///                    Centro de Ensino Superior do Seridó                            ///\n");
    printf("///                    Departamento de Computação e Tecnologia                        ///\n");
    printf("///                    Disciplina DCT1106 - Programação                               ///\n");
    printf("///                    Projeto Sistema de Planejamento de Dieta                       ///\n");
    printf("///                    Desenvolvido por mariana - 2021.2                              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///            = = = = = = = = Sistema de Planejamento de Dieta = = = = = = = =       ///\n");
    printf("///                                                                                   ///\n");
    printf("///          Programa  utilizado na disciplina DCT1106 - Programação, para fins       ///\n");
    printf("///          avaliativo no Semestre 2021.2. O programa contém os principais módulos   ///\n");
    printf("///          e funcionalidades que serão exigidos ao longo da disciplina.             ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPrincipal(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Sistema de Planejamento de Dieta                        ///\n");
    printf("///                   Desenvolvido por mariana - 2021.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///               = = = = = = = Sistema de Planejamento de Dieta = = = = = = =        ///\n");
    printf("///                                                                                   ///\n");
    printf("///               1. Módulo Cardápio                                                  ///\n");
    printf("///               2. Módulo Paciente                                                  ///\n");
    printf("///               3. Módulo Receita                                                   ///\n");
    printf("///               4. Módulo Relatórios                                                ///\n");
    printf("///               5. Módulo Sobre                                                     ///\n");
    printf("///               0. Sair                                                             ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaEquipe(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Sistema de Planejamento de Dieta                        ///\n");
    printf("///                   Desenvolvido por mariana - 2021.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///             = = = = = = Sistema de Planejamento de Dieta = = = = = =              ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Este projeto exemplo foi desenvolvido por:                            ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Mariana Araújo de Medeiros                                            ///\n");
    printf("///             E-mail: mariana.medeiros.017@ufrn.edu.br                              ///\n");
    printf("///             Repositório: https://github.com/ Got7mj/mariana                       ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuCardapio(void) {
    system("clear||cls");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                    ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                 = = = = = = = = = = Menu Cardápio = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                                    ///\n");
    printf("///                  1. Cadastrar um novo Cardápio                                     ///\n");
    printf("///                  2. Pesquisar a numeração de um Cardápio                           ///\n");
    printf("///                  3. Atualizar o cadastro do Cardápio                               ///\n");
    printf("///                  4. Excluir um Cardápio do sistema                                 ///\n");
    printf("///                  0. Voltar ao menu anterior                                        ///\n");
    printf("///                                                                                    ///\n");
    printf("///                  Escolha a opção desejada:                                         ///\n");
    printf("///                                                                                    ///\n");
    printf("///                                                                                    ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaCadastrarCardapio(void) {
    system("clear||cls");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                    ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = Cadastrar Cardápio = = = = = = = =              ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                    ///\n");
    printf("///                    Numeração (apenas números):                                     ///\n");
    printf("///                    Data da Criação (dd/mm/aaaa):                                   ///\n");
    printf("///                                                                                    ///\n");
    printf("///                                                                                    ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaPesquisarCardapio(void) {
    system("clear||cls");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                    ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                 = = = = = = = = Pesquisar Cardápio = = = = = = = =                 ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                                    ///\n");
    printf("///                   Informe a numeração (apenas números):                            ///\n");
    printf("///                                                                                    ///\n");
    printf("///                                                                                    ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaAlterarCardapio(void) {
    system("clear||cls");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                    ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                  = = = = = = = = Alterar Cardápio = = = = = = = = =                ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                    ///\n");
    printf("///                    Informe a numeração(apenas números):                            ///\n");
    printf("///                                                                                    ///\n");
    printf("///                                                                                    ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaExcluirCardapio(void) {
    system("clear||cls");
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                    ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                 = = = = = = = = Excluir Cardápio = = = = = = = = =                 ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                                    ///\n");
    printf("///                   Informe a numeração (apenas números):                            ///\n");
    printf("///                                                                                    ///\n");
    printf("///                                                                                    ///\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
