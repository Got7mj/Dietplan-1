#include <time.h>
#include <stdlib.h>
#include <string.h>


///////////////////////////////////////////////////////////////////////////////
/// Faz uma pausa por n segundos, com n sendo passado como parâmetro
///
void delay(int segundos) {
  int tempo = 1000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Limpa a tela; funciona em Linux / MacOS / Windows
///
void limpaTela(void) {
  if (system("clear") || system("cls")) {
	  
	// limpa a tela, funciona em Linux, Mac e Windows
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se o caractere recebido for um dígito (entre 0 e 9)
/// retorna 0 caso contrário
///
int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se o caractere recebido for uma alfabético 
/// (letra entre 'A' e 'Z' ou 'a' e 'z') ou retorna 0 caso contrário
///
int ehLetra(char c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se ano for bissexto (divisível por 4, não divisível por ...
/// 100 ou divisível por 400) e retorna 0 caso contrário
///
int ehBissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se dia, mes e ano correspondem a uma data válida, inclusive
/// em anos bissextos, ou retorna 0 caso contrário
///
int ehData(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return 0;
  if (mm == 2) {
    if (ehBissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else
    maiorDia = 31;
  if (dd < 1 || dd > maiorDia)
    return 0;
  return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido for exclusivamente alfabético ou
/// retorna 0 caso contrário
///
int validarNome(char* nome) {
  for (int i=0; nome[i]!='\0'; i++) {
    if (!ehLetra(nome[i])) {
      return 0;
    }
  }
	return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número de CPF válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarcpf(char* cpf) {
  tam = len(cpf)
  soma = 0
  d1 = 0
  d2 = 0
  if tam != 11:
    return 0
  for i in range(11):
    if (cpf[i] < '0') or (cpf[i] > '9'):
      return 0
  for i in range(9):
    soma += (int(cpf[i]) * (10 - i))
  d1 = 11 - (soma % 11)
  if (d1 == 10 or d1 == 11):
    d1 = 0
  if d1 != int(cpf[9]):
    return 0
  soma = 0
  for i in range(10):
    soma += (int(cpf[i]) * (11 - i))
  d2 = 11 - (soma%11)
  if (d2 == 10 or d2 == 11):
    d2 = 0
  if d2 != int(cpf[10]):
    return 0

  return 1;
} 



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido for endereço de email válido ou
/// retorna 0 caso contrário
///
int validarEmail(char* email) {
	return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a uma data válida (apenas dígitos
/// e no formato: ddmmaaaa) ou retorna 0 caso contrário
///
int validarData(char* data) {
  int tam, dia, mes, ano;
  tam = strlen(data);
  if (tam != 8) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(data[i])) {
      return 0;
    }
  }
  dia = (data[0] - '0') * 10 + (data[1] - '0');
  mes = (data[2] - '0') * 10 + (data[3] - '0');
  ano = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + 
        (data[6] - '0') * 10 + (data[7] - '0');
  if (!ehData(dia, mes, ano)) {
    return 0;
  }
  return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número de celular válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarcelular(char* celular) {
  int tam;
  tam = strlen(celular);
  if (tam != 11) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(celular[i])) {
        return 0;
    }
  }
  return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número da numeração válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarNum(char* num) {
  int tam;
  tam = strlen(num);
  if (tam < 1000 || tam > 1001) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(num[i])) {
      return 0;
    }
  }
  return 1;
}