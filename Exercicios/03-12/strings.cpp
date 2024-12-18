#include <iostream>
#include <string>

using namespace std;

/*

  strings
    - vetor de caracteres

    + ler strings
    + mostrar strings na tela
    + comparar strings
    + concatenação de strings

  
  exercícios:
    - leia uma string e retorne o tamanho dela
    - leia uma string e conte quantas vogais e consoantes ela possui
    - leia uma string e conte quantas letras maiusculas e letras minusculas ela possui
    - leia uma string e conte quantos simbolos ela possuis
    - leia uma string e retorne 'true' se a string é um palindromo ou 'false', caso contrário

*/

// função que retorna a POSIÇÃO do menor elemento em um vetor

// recebe um vetor, e retorna a
// POSICAO do menor elemento do vetor recebido (inteiros)
int buscarMenorElemento(int n, int v[]) {
  int menor = v[0]; // começa assumindo que o menor elemento é o primeiro
  int pos = 0; // posição do primeiro elemento

  // padrão para se percorrer um vetor
  for(int i = 0; i < n; i++) {
    // v[i] é o elemento que estou 'olhando' obs: no laço eu estou olhando todos, um por um
    // a posicao i é a atual

    // aqui eu vejo se existe um elemento v[i] que é MENOR que o meu menor valor atual
    if(v[i] < menor) { // encontrei um valor menor do que eu já tinha
      menor = v[i]; // atualizo o menor valor
      pos = i; // 'i' é a posição do menor valor
    }
  }

  // tenho a garantia de ter o menor valor quando saio desse laço
  return pos;
}

void lerVetorInteiros(int n, int v[]) {
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
}

void lerVetorStrings(int n, string v[]) {
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
}

int main() {
  int n;

  cin >> n;

  int notas[n];
  string nomes[n];

  lerVetorInteiros(n, notas);
  lerVetorStrings(n, nomes);

  int indice = buscarMenorElemento(n, notas);

  // mostrar indice, mostrar nome nesse indice, mostrar nota nesse indice
  int nota = notas[indice];
  string nome = nomes[indice];

  cout << indice << " " << nome << " " << nota << endl;

  return 0;
}
