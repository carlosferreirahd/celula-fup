#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

/*
  + Arrays ou vetores: estrutura de dados que guarda valores de mesmo tipo
    - array vs. variável
      * acessamos o valor dentro de uma array através das posições (seus índices) [0..n]
  
  + Declarar um array
    - tipo nome_array[tamanho];

  + Inicializando um array
    - ex: float notas[] = { 7.5, 8.0, 9.0, 10.0 };

  * Exercícios básicos
    - 1) Leia um tamanho n, crie um array de inteiros de tamanho n e mostre os elementos lidos
    - 2) Repita (1), mas mostre o array invertido
    - 3) Leia um tamanho n, crie um array de caracteres de tamanho c e mostre os elementos lidos

  * Exercícios mais interessantes
    - 1) Inverta um vetor - conceito de swap
    - 2) Encontre o segundo maior valor de um array de inteiros
    - 3) Mostrar na tela o valor binário de um inteiro lido
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

void lerVetorCaractere(int n, char v[]) {
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
}

void mostrarVetorCaractere(int n, char v[]) {
  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void mostrarBinario(int n) {
  int binario[32];

  // 1000 - 8
  // 00000000000001000 - 8
  // inicializando com zeros
  for(int i = 0; i < 32; i++) {
    binario[i] = 0;
  }

  for(int i = 0; n > 0; i++) {
    int bit = n % 2;
    n = n / 2;
    binario[i] = bit;
  }

  for(int i = 31; i >= 0; i--) {
    cout << binario[i];
  }
  cout << endl;
}

float distancia(float xa, float ya, float xb, float yb) {
  float d = sqrt( pow(xb-xa, 2) + pow(yb-ya, 2) );
  return d;
}

int main() {
  // float xa, xb, ya, yb;

  // cin >> xa >> xb >> ya >> yb;

  // float resultado = distancia(xa, xb, ya, yb);

  // cout.precision(2);
  // cout << fixed;
  // cout << resultado << endl;

  // int n;

  // cout << "Entre com o tamanho do array: " << endl;
  // cin >> n;

  // char v[n];

  // lerVetorCaractere(n, v);
  // mostrarVetorCaractere(n, v);

  int n;
  cout << "Entre com um inteiro: " << endl;
  cin >> n;

  mostrarBinario(n);

  return 0;
}
