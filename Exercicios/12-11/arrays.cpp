#include <iostream>
#include <cstdio>

using namespace std;

/*

  Fixação de algoritmos importantes
  
    - inversão de array

    - busca em array
      - receber um valor e retornar a posicao dele no array, retornar -1 caso o elemento nao exista
      - buscar posição do menor elemento de um array
      - buscar posição do maior elemento de um array
        * ordenação -offtopic

    - contagem de ocorrência
      - receber um valor e contar a quantidade de ocorrências desse elemento no array
      - retornar elemento com maior número de ocorrências
      - retornar elemento com o menor número de ocorrências

*/


void lerVetor(int n, int v[]) {
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
}

void mostrarVetor(int n, int v[]) {
  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void swap(int v[], int i, int j) {
  int aux = v[i];
  v[i] = v[j];
  v[j] = aux;
}

void inverterVetor(int n, int v[]) {
  int i = 0;
  int j = n - 1;

  while(i < j) {
    swap(v, i, j);
    i++;
    j--;
  }
}

// busca em vetor
/*
  vetor: 1 2 3 8 3
  elemento: 5
*/
int buscarEmVetor(int n, int v[], int elemento) {
  for(int i = 0; i < n; i++) {
    if(v[i] == elemento) {
      return i;
    }
  }
  return -1;
}

/*

Descrição
Dada uma temperatura em graus Fahrenheit, podemos convertê-la para graus Celsius
usando a fórmula abaixo:

Celsius = (Fahrenheit - 32) * 5 / 9

Faça uma função chamada converte_para_celsius que recebe uma temperatura em Fahrenheit
e retorna esta temperatura em graus Celsius.

Na função main, leia uma temperatura em graus Fahrenheit (ponto flutuante) e imprima
o valor desta temperatura em Celsius. Para isso chame a função converte_para_celsius.
Entrada:

Temperatura em graus Fahrenheit (ponto flutuante).
Saída:

Temperatura em graus Celsius.

*/

float converte_para_celsius(float fahrenheit) {
  float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
  return celsius;
}


int main() {
  float temp_f;

  cin >> temp_f;

  float temp_c = converte_para_celsius(temp_f);

  cout << temp_c << endl;
  
  return 0;
}
