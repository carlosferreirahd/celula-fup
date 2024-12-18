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
    #########
    - leia uma string e alterne a case de cada caractere,
      começando por maiusculo
        + exemplo de entrada:
          * oi tudo bem
        + exemplo de saída:
          * Oi TuDo BeM

    - leia duas strings e retorna 'true' se a primeira string "termina" igual a segunda
      + (réplica do endsWith do js)

    - leia uma string e retorna o caractere que mais aparece (string com caracteres minusculos)

    - leia uma string e a mostre sem espaços repetidos
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

// função que recebe um caractere e o retorna maiusculo
// ou ele mesmo caso seja um simbolo ou se já está maiusculo
char paraMaiusculo(char c) {
  if(ehMinusculo(c)) {
    return c - 32;
  }

  return c;
}

// função que recebe um caractere e o retorna minusculo
// ou ele mesmo caso seja um simbolo ou se já está minusculo
char paraMinusculo(char c) {
  if(ehMaiusculo(c)) {
    return c + 32;
  }

  return c;
}

void alternarCases(string s) {
  bool ehParaMaiusculo = true;

  for(int i = 0; i < s.size(); i++) {
    if(ehSimbolo(s[i])) {
      cout << s[i];
      continue;
    }

    if(ehParaMaiusculo) {
      cout << paraMaiusculo(s[i]);
    } else {
      cout << paraMinusculo(s[i]);
    }

    ehParaMaiusculo = !ehParaMaiusculo;
  }
}

/*

  string1 = oi tudo bem <- 'i' começa aqui no final
  string2 = bem <- 'j' começa aqui no final

  endsWith(string1, string2) ----> retorna true

  string2 = e

*/

// simulando o endsWith do js
bool endsWith(string s1, string s2) {
  if(s2.size() > s1.size()) {
    return false;
  }

  for(int i = s1.size() - 1, j = s2.size() - 1; j >= 0; i--, j--) {
    // cout << "s1[i] = " << s1[i] << endl;
    // cout << "s2[j] = " << s2[j] << endl;
    if(s1[i] != s2[j]) {
      return false;
    }
  }

  return true;
}

// precisamos de uma função que nos diga quantas vezes um
// certo caractere aparece em uma dada string
int contaCaractere(string s, char c) {
  // esta função recebe uma string 's' e um caractere 'c'
  // e retorna quantas vezes 'c' aparece em 's'
  int contador = 0;

  for(int i = 0; i < s.size(); i++) {
    // s[i] é cada caractere da string s
    if(s[i] == c) {
      contador++;
    }
  }

  // terminados de percorrer a string s
  return contador;
}

// função que retorna o caractere que mais aparece em um string s
char caractereMaisFrequente(string s) {
  // assumindo que o primeiro caractere é o que aparece mais
  char maisFrequente = s[0];
  int frequencia = 1;

  for(int i = 0; i < s.size(); i++) {
    int frequenciaAtual = contaCaractere(s, s[i]);
    if(frequenciaAtual > frequencia) {
      maisFrequente = s[i];
      frequencia = frequenciaAtual;
    }
  }

  return maisFrequente;
}

// funçao que recebe uma string que pode possuir mais de um espaço
// entre as palavras, e então mostra a string sem esses espaços repetidos
void ignoraEspacosRepetidos(string s) {
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == ' ' && i != s.size() - 1 && s[i + 1] == ' ') {
      continue;
    }
    cout << s[i];
  }
}

int main() {
  string str;

  getline(cin, str);

  ignoraEspacosRepetidos(str);
  cout << endl;

  return 0;
}
