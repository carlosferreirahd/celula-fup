#include <iostream>
#include <cstdio>
#include <math.h>
#include <iomanip>

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

// Quando vcs forem passar um vetor como parametro
// serão necessários 2 coisas: o tamanho (inteiro) e o vetor
// 0 .. n-1

// num: 5 3 2 4 7 5 4 3 1
// pos: 0 1 2 3 4 5 6 7 8
int buscarMenorElemento(int n, int v[]) {
  int menor = v[0];
  int pos = 0;

  // padrão para se percorrer um vetor
  for(int i = 0; i < n; i++) {
    // v[i] é o elemento que estou 'olhando' obs: no laço eu estou olhando todos, um por um
    // a posicao 1 é a atual
    if(v[i] < menor) {
      menor = v[i];
      pos = i;
    }
  }

  return pos;
}

int buscarMaiorElemento(int n, int v[]) {
  int maior = v[0];
  int pos = 0;

  // padrão para se percorrer um vetor
  for(int i = 0; i < n; i++) {
    // v[i] é o elemento que estou 'olhando' obs: no laço eu estou olhando todos, um por um
    // a posicao 1 é a atual
    if(v[i] > maior) {
      maior = v[i];
      pos = i;
    }
  }

  return pos;
}

int contagemSimples(int n, int v[], int elemento) {
  int cont = 0;

  for(int i = 0; i < n; i++) {
    if(v[i] == elemento) {
      cont++;
    }
  }

  return cont;
}

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

int buscarEmVetor(int n, int v[], int elemento) {
  for(int i = 0; i < n; i++) {
    if(v[i] == elemento) {
      return i;
    }
  }
  return -1;
}

float distanciaPontos(float xa, float ya, float xb, float yb) {
  float dif_x = xb - xa;
  float dif_y = yb - ya;

  float x_2 = pow(dif_x, 2);
  float y_2 = pow(dif_y, 2);

  float distancia = sqrt(x_2 + y_2);

  return distancia;
}

int main() {
  float xa, xb, ya, yb;

  cin >> xa >> xb >> ya >> yb;

  float dist = distanciaPontos(xa, xb, ya, yb);

  cout << setprecision(2) << fixed;

  cout << dist << endl;

  return 0;
}
