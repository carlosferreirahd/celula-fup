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

// recebe um vetor, e retorna a
// POSICAO do menor elemento do vetor recebido (inteiros)
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

// recebe um vetor, e retorna a
// POSICAO do maior elemento do vetor recebido (inteiros)
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

// printa vetor na tela
void mostrarVetor(int n, int v[]) {
  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

// recebe um vetor e duas POSICOES desse vetor: i e j
// e entao troca os elementos dessas posicoes
void swap(int v[], int i, int j) {
  int aux = v[i];
  v[i] = v[j];
  v[j] = aux;
}

// recebe um vetor e o inverte
void inverterVetor(int n, int v[]) {
  int i = 0;
  int j = n - 1;

  while(i < j) {
    swap(v, i, j);
    i++;
    j--;
  }
}

// recebe um vetor e um elemento
// e entao retorna a POSICAO desse elemento no vetor
// ou -1 caso o elemento nao esteja presente
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

// ler um vetor
void lerVetor(int n, int v[]) {
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
}

// funcao que vai receber o vetor de 6 elementos
// calcular a media dos elementos
// retornar essa media
float calcularMedia(int n, float v[]) {
  float media = 0.0;

  for(int i = 0; i < n; i++) {
    media += v[i];
  }

  media = media / n;

  return media;
}

// receber o vetor
// receber a media
// contar quantos valores desse vetor sao maiores que a media
// retornar essa quantidade
int qtdMaioresMedia(int n, float v[], float media) {
  int cont = 0;

  for(int i = 0; i < n; i++) {
    // quem e maior que a media?
    if(v[i] > media) {
      cont++;
    }
  }

  return cont;
}

// funcao que recebe um vetor, recebe um elemento e retorna a quantidade de vezes
// que esse elemento aparece
int contagemSimples(int n, int v[], int elem) {
  int cont = 0;

  for(int i = 0; i < n; i++) {
    if(v[i] == elem) {
      cont++;
    }
  }

  return cont;
}

// 1 1 3 2 1 1
// funcao que recebe um vetor, e retorna o elemento que MAIS aparece
int contagemMaior(int n, int v[]) {
  int maior = 0;
  int elem = v[0];

  for(int i = 0; i < n; i++) {
    int qtd = contagemSimples(n, v, v[i]);
    // quero ver se essa quantidade eh maior do que a minha atual 'maior'
    if(qtd > maior) {
      maior = qtd;
      elem = v[i];
    }
  }

  return elem;
}

// 5
// 2 2 2 2 2

// funcao que recebe um vetor, e retorna o elemento que MENOS aparece
int contagemMenor(int n, int v[]) {
  int menor = n + 1;
  int elem = v[0];

  for(int i = 0; i < n; i++) {
    int qtd = contagemSimples(n, v, v[i]);
    // quero ver se essa quantidade eh maior do que a minha atual 'maior'
    if(qtd < menor) {
      menor = qtd;
      elem = v[i];
    }
  }

  return elem;
}

int main() {
  int n;

  cout << "Entre com o tamanho do vetor:" << endl;
  cin >> n;

  int v[n];

  lerVetor(n, v);

  int elem_em_menor_qtd = contagemMenor(n, v);

  cout << "Elemento em menor quantidade: " << elem_em_menor_qtd << endl;

  return 0;
}
