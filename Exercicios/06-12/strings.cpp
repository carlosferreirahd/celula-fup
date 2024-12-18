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
    - leia uma string e conte quantas letras maiusculas e letras minusculas ela possui
    - leia uma string e conte quantos simbolos ela possui
    - leia uma string e retorne 'true' se a string é um palindromo ou 'false', caso contrário

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

int main() {
  string str;
  int vogais = 0;
  int consoantes = 0;

  getline(cin, str);

  for(int i = 0; i < str.size(); i++) {
    if(ehVogal(str[i])) {
      vogais++;
    }
    if(ehConsoante(str[i])) {
      consoantes++;
    }
  }

  cout << "Qtd vogais: " << vogais << endl;
  cout << "Qtd consoantes: " << consoantes << endl;

  return 0;
}
