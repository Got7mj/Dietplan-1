#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"
#include "biblioteca.h"
#include "paciente.h"

void moduloRelatorio(void) {
	char opcao;
	do {
		opcao = menuRelatorio();
		switch(opcao) {
			case '1': 	medidasantroprometricas();
						break;
			case '2': 	evolucaoantroprometrica();
						break;
			case '3': 	evolucaoIMC();
						break;
			case '4':   dietaalimentar();
						break;
		} 		
	} while (opcao != '0');
}



void medidasantroprometricas(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes

	char* medida;

		medida = telamedidasantroprometrica();
	relatmedidasantroprometricas(medida);
	free(medida);
}


void evolucaoantroprometrica(void){
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes

	char* cpfPac;

		cpfPac = telaevolucaoantroprometrica();
	relatevolucaoantroprometrica(cpfPac);
	free(cpfPac);
}


void evolucaoIMC(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes 

	char* IMC;
		IMC = telaevolucaoIMC();
	relatevolucaoIMC(IMC);
	free(IMC);
}


void dietaalimentar(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes 

	char* coddiet;
   		coddiet = teladietaalimentar();
	relatdietaalimentar(coddiet);
	free(coddiet);
}


char menuRelatorio(void) {
	char op;
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///            1. Informar peso do paciente                               ///\n");
    printf("///            2. Informar altura do paciente                             ///\n");
    printf("///            3. Informar IMC do paciente                                ///\n");
    printf("///            4. Informar circunferências Corporais do paciente          ///\n");
    printf("///            5. Informar dobras cutâneas do paciente                    ///\n");
    printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return op;
}



char* telamedidasantroprometricas(void){
    char medida;
	medida = (char*) malloc(4*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = Medidas antroprométricas = = = = =                ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                       ///\n");
	printf("///           Informe a medida (apenas números): ");
	scanf("%[0-9]", medida);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return medida;
}



char* telaevolucaoantroprometrica(void) {
    char *cpf;
	cpf = (char*) malloc(4*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = Evolução antroprométrica = = = = =                ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                       ///\n");
	printf("///           Informe o CPF do paciente (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return cpf;
}



char* telaevolucaoIMC(void){
    char* IMC;
	IMC = (char*) malloc(4*sizeof(char));
	limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = = Evolução IMC = = = = = = = =                ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                       ///\n");
	printf("///           Informe o IMC do paciente (apenas números): ");
	scanf("%[0-9]", IMC);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return IMC;
}



char* teladietaalimentar(void) {
    char* coddiet;
	coddiet = (char*) malloc(4*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = Dieta = = = = = = = = = =               ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                       ///\n");
	printf("///           Informe o código da dieta do paciente (apenas números): ");
	scanf("%[A-Za-z0-9]" coddiet,
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return coddiet;
}



void telamedidasantroprometricas(char* medida){
    limpaTela();
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                                    ///\n");
    printf("///                     = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
	printf("///                     = = = = = Medidas antroprométricas = = = = =                   ///\n");
    printf("///                     = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                                    ///\n");
	printf("///              ====================================================                  ///\n");
	printf("///              ================== Medidas: %7s ====================                  ///\n", medida);
	printf("///              ====================================================                  ///\n");
	printf("///                                                                                    ///\n");
	printf("///           ===========================================================              ///\n");
	printf("///                        Medida Atual     ||    Medida Desejada                      ///\n");
	printf("///           ===========================================================              ///\n");
	printf("///             Peso:			            ||	   Peso:	                           ///\n");
	printf("///             Altura:                     ||     Altura:                             ///\n");
	printf("///             IMC:                        ||     IMC:                                ///\n");
	printf("///      		Circunferência Corporal:    ||     Circunferência Corporal:            ///\n");
	printf("///             Dobras cutâneas:            ||     Dobras cutâneas:                    ///\n");
	printf("///           ============================================================             ///\n");
	printf("///                                                                                    ///\n");
	printf("///                                                                                    ///\n");
	printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("///           Tecle <ENTER> para continuar...                                          ///\n");
    getchar();
}



void telaevolucaoantroprometrica(char* cpf) {
     char *nomePac;
    // posteriormente, esta função irá buscar o nome do Professor no arquivo 
    // por enquanto, o nome será preenchido com um valor predefinido
    nomePac = (char*) malloc(10*sizeof(char));
    strcpy(nomePac,"Beatiz");
    limpaTela();
    printf("\n");
    printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                                    ///\n");
    printf("///           		= = = = = = = = = = = = = = = = = = = = = = =                      ///\n");
	printf("///           		= = = = = Evolução antroprométrica = = = = =                   	   ///\n");
    printf("///           		= = = = = = = = = = = = = = = = = = = = = = =                      ///\n");
    printf("///                                                                                    ///\n");
	printf("///              ====================================================                  ///\n");
	printf("///              ================== Paciente: %12s \n", nomePac);         
	printf("///              ====================================================                  ///\n");
	printf("///                                                                                    ///\n");
	printf("///           ===========================================================              ///\n");
	printf("///                Antes do tratamento      ||    Despois do tratamento                ///\n");
	printf("///           ===========================================================              ///\n");
	printf("///             Peso:			            ||	   Peso:	                           ///\n");
	printf("///             Altura:                     ||     Altura:                             ///\n");
	printf("///             IMC:                        ||     IMC:                                ///\n");
	printf("///      		Circunferência Corporal:    ||     Circunferência Corporal:            ///\n");
	printf("///             Dobras cutâneas:            ||     Dobras cutâneas:                    ///\n");
	printf("///           ============================================================             ///\n");
	printf("///                                                                                    ///\n");
	printf("///                                                                                    ///\n");
	printf("//////////////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("///           Tecle <ENTER> para continuar...                                          ///\n");
    getchar();
}



void telaevolucaoIMC( char* IMC){
   
	limpaTela();
    printf("\n");
    printf("////////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                          ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///              = = = = = = = = Evolução IMC = = = = = = = =                ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                          ///\n");
	printf("///             ================================================             ///\n");
	printf("///             ================= IMC: %7s =====================             ///\n", IMC);                
	printf("///             ================================================             ///\n");
	printf("///                                                                          ///\n");
	printf("///           ======================================================         ///\n");
	printf("///               Antes do tratamento   ||  Despois do tratamento            ///\n");
	printf("///           ======================================================         ///\n");
	printf("///             Peso:			        ||	   Peso:	                     ///\n");
	printf("///             Altura:                 ||     Altura:                       ///\n");           
	printf("///           ======================================================         ///\n");
	printf("///                                                                          ///\n");
	printf("///                                                                          ///\n");
	printf("////////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("///           Tecle <ENTER> para continuar...                                ///\n");
    getchar();
}



vod teladietaalimentar(char* coddiet) {
   
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = = Dieta: %7s = = = = = = = = =                ///\n", coddiet);
    printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                       ///\n");
	printf("///           Informe o código da dieta do paciente (apenas números): ");
	scanf("%[A-Za-z0-9]" coddiet,
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("///           Tecle <ENTER> para continuar...                                ///\n");
    getchar();
}
