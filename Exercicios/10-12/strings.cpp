#include <iostream>
#include <string>

using namespace std;

/*

  strings
    - vetor de caracteres

    + ler strings
      - getline(cin, nome_da_string);

    + mostrar strings na tela
      - cout << nome_da_strings;

    + comparar strings
      - basta usar o ==

    + concatenação de strings
      - concatenar: 'juntar' duas strings
                    - o final da primeira com o comeca da segunda

      oi_
      tudo bem

      concatenacao: oi tudo bem
  
  exercícios:
    - leia uma string e retorne o tamanho dela
    - leia uma string e conte quantas vogais e consoantes ela possui
    - leia uma string e conte quantos simbolos ela possui
    - leia uma string e conte quantas letras maiusculas e letras minusculas ela possui
    - leia uma string e retorne 'true' se a string é um palindromo ou 'false', caso contrário
    - leia uma string (sem espaços, para facilitar) e alterne a case de cada caractere,
      começando por maiusculo
        + exemplo de entrada:
          * oitudobem
        + exemplo de saída:
          * OiTuDoBeM

    - leia duas strings e retorna 'true' se a primeira string "termina" igual a segunda
      + (réplica do endsWith do js)
*/

// fazer uma funcao que diz se um caractere eh vogal
bool ehVogal(char c) {
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    return true;
  }

  if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    return true;
  }

  return false;
}

bool ehConsoante(char c) {
  if(!ehVogal(c)) {
    if(c >= 'a' && c <= 'z') {
      return true;
    }

    if(c >= 'A' && c <= 'Z') {
      return true;
    }
  }

  return false;
}

bool ehSimbolo(char c) {
  // se NAO FOR VOGAL e NAO FOR CONSOANTE
  if(!ehVogal(c) && !ehConsoante(c)) {
    return true;
  } else {
    return false;
  }
}

bool ehMaiusculo(char c) {
  // se "c" NAO EH UM SIMBOLO
  if(!ehSimbolo(c)) {
    // se for maiusculo
    if(c >= 'A'  && c <= 'Z') {
      return true;
    } else {
      return false;
    }
  }

  return false;
}

bool ehMinusculo(char c) {
  if(!ehMaiusculo(c) && !ehSimbolo(c)) {
    return true;
  } else {
    return false;
  }
}

// - leia uma string e conte quantas vogais e consoantes ela possui

// recebe uma string e retorna a QUANTIDADE de vogais
int contaVogais(string s) {
  int contador = 0;
  // padrao para se percorrer uma string
  for(int i = 0; i < s.size(); i++) {
    if(ehVogal(s[i])) {
      contador++;
    }
  }

  return contador;
}

// recebe uma string e retorna a QUANTIDADE de consoantes
int contaConsoantes(string s) {
  int contador = 0;
  // padrao para se percorrer uma string
  for(int i = 0; i < s.size(); i++) {
    if(ehConsoante(s[i])) {
      contador++;
    }
  }

  return contador;
}

// recebe uma string e retorna a QUANTIDADE de simbolos
int contaSimbolos(string s) {
  int contador = 0;
  // padrao para se percorrer uma string
  for(int i = 0; i < s.size(); i++) {
    if(ehSimbolo(s[i])) {
      contador++;
    }
  }

  return contador;
}

int contaMaiusculos(string s) {
  int contador = 0;
  // padrao para se percorrer uma string
  for(int i = 0; i < s.size(); i++) {
    if(ehMaiusculo(s[i])) {
      contador++;
    }
  }

  return contador;
}

int contaMinusculos(string s) {
  int contador = 0;
  // padrao para se percorrer uma string
  for(int i = 0; i < s.size(); i++) {
    if(ehMinusculo(s[i])) {
      contador++;
    }
  }

  return contador;
}

// para a função de palindromo, precisamos de uma função que inverta nossa string

// o "&" serve para receber a string "de verdade", e não uma cópia dela
// usamos porque precisamos mudar a string

// 1 2 3 4 5 6

// recebe uma string e troca os caracteres nas posicoes i e j
void swap(string &s, int i, int j) {
  char aux = s[i];
  s[i] = s[j];
  s[j] = aux;
}

string inverteString(string &s) {
  int i = 0; // primeira posicao
  int j = s.size() - 1; // ultima posicao

  while(i < j) {
    swap(s, i, j);
    i++;
    j--;
  }

  return s;
}

// recebe uma string e retorna 'true' caso ela seja igual ao seu inverso ou 'false' caso contrario
bool ehPalindromo(string s) {
  string copia = s;
  
  if(s == inverteString(copia)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  string str;

  getline(cin, str);

  if(ehPalindromo(str)) {
    cout << "Eh palindromo!" << endl;
  } else {
    cout << "Nao eh palindromo!" << endl;
  }

  return 0;
}
