#include <iostream>

using namespace std;

/*

  + o que são matrizes?
    - vetor de vetores! 3 -> [[1, 2], [3, 4], [5, 6]]
    - exemplos
      * 3x3
        [ [1, 2, 3], [4, 5, 6], [7, 8, 9] ]

        1 2 3     [0] -> [1, 2, 3],
        4 5 6 ->  [1] -> [4, 5, 6],
        7 8 9     [2] -> [7, 8, 9]

      * 3x4
        [ [1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12] ]

        1  2  3  4
        5  6  7  8
        9 10 11 12
    
    + exercícios básicos. obs.: vamos nos limitar a matrizes 3x3
      - função que lê uma matriz
      - função que mostra uma matriz
      - função que soma duas matrizes
      - função que subtrai duas matrizes
      - função que multiplica uma matriz por um escalar

*/

void lerMatriz(int m[3][3]) {
  // percorremos as linhas
  for(int i = 0; i < 3; i++) {
    // para cada linha temos um vetor
    for(int j = 0; j < 3; j++) {
      // lemos as posicoes
      cin >> m[i][j];
    }
  }
}

void mostrarMatriz(int m[3][3]) {
  cout << endl;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

// receber duas matrizes, somá-las e então mostrar a matriz resultante
void somarMatrizes(int m1[3][3], int m2[3][3]) {
  int r[3][3];

  // padrao pra percorrer a matriz
  for(int i = 0; i < 3 /*linhas*/; i++) {
    for(int j = 0; j < 3 /*colunas*/; j++) {
      // cada valor [i][j] de m1 e m2 representa os valores das matrizes
      int somar = m1[i][j] + m2[i][j];
      r[i][j] = somar;
    }
  }

  mostrarMatriz(r);
}

void subtrairMatrizes(int m1[3][3], int m2[3][3]) {
  int r[3][3];

  // padrao pra percorrer a matriz
  for(int i = 0; i < 3 /*linhas*/; i++) {
    for(int j = 0; j < 3 /*colunas*/; j++) {
      // cada valor [i][j] de m1 e m2 representa os valores das matrizes
      int subtrair = m1[i][j] - m2[i][j];
      r[i][j] = subtrair;
    }
  }

  mostrarMatriz(r);
}

// receber uma matriz e um valor inteiro 'n', e multiplicar a matriz por 'n'
// obs: n multiplica com o valor de CADA posicao da matriz
void multiplicarPorEscalar(int m[3][3], int n) {
  int r[3][3];

  // padrao pra percorrer uma matriz
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      int multiplicar = n * m[i][j];
      r[i][j] = multiplicar;
    }
  }

  mostrarMatriz(r);
}


/*

  [0] -> 0,0  0,1  0,2
  [1] -> 1,0  1,1  1,2
  [2] -> 2,0  2,1  2,2


  1 2 3   1 2 1     2  4  4
  4 5 6 + 1 1 1  =  5  6  7
  7 8 9   2 1 2     9  9 11


  1 2 3   1 2 1     0  0  2
  4 5 6 - 1 1 1  =  3  4  5
  7 8 9   2 1 2     5  7  7


  1 2 3         2   4   6
  4 5 6 * 2  =  8   10  12
  7 8 9         14  16  18

*/

int main() {
  int M1[3][3];
  int n;

  lerMatriz(M1);
  cin >> n;

  multiplicarPorEscalar(M1, n);

  return 0;
}
