#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/////
/// Assinaturas das funções

char telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);
void moduloCardapio(void);
char MenuCardapio(void);
void telaCadastrarCardapio(void);
void telaPesquisarCardapio(void);
void telaAlterarCardapio(void);
void telaExcluirCardapio(void);
void moduloPaciente(void);
char telaMenuPaciente(void);
void telaCadastrarPaciente(void);
void telaPesquisarPaciente(void);
void telaAlterarPaciente(void);
void telaExcluirPaciente(void);
void moduloReceita(void);
char telaMenuReceita(void);
void telaCadastrarReceita(void);
void telaAlterarReceita(void);
void telaPesquisarReceita(void);
void telaExcluirReceita(void);

//////
////// Programa principal
//////

int main(void) {
    char opcao;

    do {
        opcao = telaPrincipal();
        switch(opcao) {
            case '1':   moduloCardapio();
	 	                break;
	        case '2':   moduloPaciente();
	 	                break;
	        case '3':   moduloReceita();
	 	                break;
	        case '4':   // Módulo Relatórios
                        break;
	        case '5':   telaSobre();
                        telaEquipe();
                        break;
       } 	
   } while (opcao != '0');

    return 0;
}



//////
////// Funções do Módulo Principal
//////



char telaPrincipal(void) {
    char op;

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
    printf("///               3. Módulo Receitas                                                  ///\n");
    printf("///               4. Módulo Relatórios                                                ///\n");
    printf("///               5. Módulo Sobre                                                     ///\n");
    printf("///               0. Sair                                                             ///\n");
    printf("///                                                                                   ///\n");
    printf("///            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}




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



//////
////// Funções do Módulo Cardápio
//////

void moduloCardapio(void) {
    char opcao;
    do {
        opcao = telaMenuCardapio();
        switch(opcao) {
            case '1': 	telaCadastrarCardapio();
                        break;
	        case'2':    telaPesquisarCardapio();
	    		        break;
	        case'3':    telaAlterarCardapio();
	    		        break;
	        case'4':    telaExcluirCardapio();
	    		        break;
	    } 		
    } while (opcao != '0');
}



void telaMenuCardapio(void) {
    char op;
    
    system("clear||cls")
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = Menu Cardápio = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                                   ///\n");
    printf("///                  1. Cadastrar um novo Cardápio                                    ///\n");
    printf("///                  2. Pesquisar a numeração de um Cardápio                          ///\n");
    printf("///                  3. Atualizar o cadastro do Cardápio                              ///\n");
    printf("///                  4. Excluir um Cardápio do sistema                                ///\n");
    printf("///                  0. Voltar ao menu anterior                                       ///\n");
    printf("///                                                                                   ///\n");
    printf("///                  Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
    return op;
}




void telaCadastrarCardapio(void) {
    char num[12];
    char criacao[11];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = = = Cadastrar Cardápio = = = = = = = =             ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                                   ///\n");
    printf("///                    Numeração (apenas números): ");  
    scanf("%[0-9]", num);
    getchar();
    printf("///                  Data da Criação (dd/mm/aaaa): ");
    scanf("%[0-9]", criacao);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaPesquisarCardapio(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                 = = = = = = = = Pesquisar Cardápio = = = = = = = =                ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                   ///\n");
    printf("///                   Informe a numeração (apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaAlterarCardapio(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = = Alterar Cardápio = = = = = = = = =               ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                                   ///\n");
    printf("///                  Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaExcluirCardapio(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                 = = = = = = = = Excluir Cardápio = = = = = = = = =                ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                   ///\n");
    printf("///                    Informe a numeração (apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



//////
////// Funções do Módulo Paciente
//////

void moduloPaciente(void) {
    char opcao;
    do {
        opcao = telaMenuPaciente();
        switch(opcao) {
            case '1': 	telaCadastrarPaciente();
                        break;
	        case'2':    telaPesquisarPaciente();
	    		        break;
	        case'3':    telaAlterarPaciente();
	    		        break;
	        case'4':    telaExcluirPaciente();
	    		        break;
	    } 		
    } while (opcao != '0');
}



void telaMenuPaciente(void) {
    char op;
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = Menu Paciente = = = = = = = = =                ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                   ///\n");
    printf("///                   1. Cadastrar um novo Paciente                                   ///\n");
    printf("///                   2. Pesquisar por Paciente                                       ///\n");
    printf("///                   3. Atualizar o cadastro de um Paciente                          ///\n");
    printf("///                   4. Excluir um paciente do sistema                               ///\n");
    printf("///                   0. Voltar ao menu anterior                                      ///\n");
    printf("///                                                                                   ///\n");
    printf("///                   Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
    return op;
}



void telaCadastrarPaciente(void) {
    char CPF[12];
    char nome[51];
    char idade[12];
    char peso[12];
    char alt[12];
    char email[51];
    char nasc[11];
    char celular[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = = Cadastrar Paciente = = = = = = = =               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                                   ///\n");
    printf("///                    CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                    Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///                    Idade: ");
    scanf("%[0-9]", idade);
    getchar();
    printf("///                    Peso: ");
    scanf("%[0-9]", peso);
    getchar();
    printf("///                    Altura: ");
    scanf("%[0-9]", alt);
    getchar();
    printf("///                    E-mail: ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf("///                    Data de Nascimento (dd/mm/aaaa): ");  
    scanf("%[0-9]", nasc);
    getchar();
    printf("///                    Celular (apenas números):  ");
    scanf("%[0-9]", celular);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaPesquisarPaciente(void) {
    char CPF[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                     ///\n");
    printf("///             = = = = = = = = Pesquisar Paciente = = = = = = = =                    ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                     ///\n");
    printf("///                                                                                   ///\n");
    printf("///                  Informe o CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaAlterarPaciente(void) {
    char cpf[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = = Alterar Paciente = = = = = = = = =               ///\n");
    printf("///                    = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                                   ///\n");
    printf("///                   Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaExcluirPaciente(void) {
    char cpf[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                = = = = = = = = Excluir Paciente = = = = = = = = =                 ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                                   ///\n");
    printf("///                 Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



//////
////// Funções do Módulo Receita
//////

void moduloReceita(void);
    char opcao;
    do {
        opcao = telaMenuReceita();
        switch(opcao) {
            case '1': 	telaCadastrarReceita();
                        break;
	        case'2':    telaPesquisarReceita();
	    		        break;
	        case'3':    telaAlterarReceita();
	    		        break;
	        case'4':    telaExcluirReceita();
	    		        break;
	    } 		
    } while (opcao != '0');
}



void telaMenuReceita(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///            = = = = = = = = = = Menu Receita = = = = = = = = = = =             ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///              1. Cadastrar Receita                                             ///\n");
    printf("///              2. Pesquisar Receita                                             ///\n");
    printf("///              3. Alterar Receita                                               ///\n");
    printf("///              3. Excluir Receita                                               ///\n");
    printf("///              0. Voltar ao menu anterior                                       ///\n");
    primtf("///                                                                               ///\n");
    printf("///              Escolha a opção desejada: ");                                       
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
    return op;
}


void telaCadastrarReceita(void) {
    char num[12];
    char criacao[11];

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = Cadastrar Receita = = = = = = = =            ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Numeração (apenas números): ");  
    scanf("%[0-9]", num);
    getchar();
    printf("///                  Data da Criação (dd/mm/aaaa): ");
    scanf("%[0-9]", criacao);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}



void telaPesquisarReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Pesquisar Receita = = = = = = = = =            ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}
   


void telaAlterarReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Receita = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}
   


void telaExcluirReceita(void) {
    char num[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Excluir Receita = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                 Informe a numeração (apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<<...Aguarde...>>>\n");
    sleep(1);
}
