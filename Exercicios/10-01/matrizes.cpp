#include <iostream>

using namespace std;

char tabuleiro[3][3] = {
  {'-', '-', '-'},
  {'-', '-', '-'},
  {'-', '-', '-'}
};

void mostrarMatriz() {
  cout << endl;
  for(int i = 0; i < 3; i++) {
    cout << i << " ";
    for(int j = 0; j < 3; j++) {
      cout << tabuleiro[i][j] << " ";
    }
    cout << endl;
  }
  cout << "  ";
  for(int i = 0; i < 3; i++) {
    cout << i << " ";
  }
  cout << endl << endl;
}

// retornar se eu consegui marcar de boas
// true se marquei, falso se nao
bool jogar(int i, int j, char c) {
  // verificar se o jogador escolheu um posicao valida
  if((i >= 0 && i <= 2) && (j >= 0 && j <= 2)) {
    // entrei nesse if caso as posicoes estejam todas ok
    // verificar se a posicao esta marcada
    if(tabuleiro[i][j] == '-') {
      tabuleiro[i][j] = c;
      return true;
    }
  }

  return false;
}

bool jogoAcabou() {
  for(int i = 0; i < 3; i++) {
    bool linhasIguais = true;
    for(int j = 0; j < 2; j++) {
      if(tabuleiro[i][j] != tabuleiro[i][j+1] || tabuleiro[i][j] == '-') {
        linhasIguais = false;
      }
    }
    if(linhasIguais) {
      return true;
    }
  }

  for(int i = 0; i < 3; i++) {
    bool colsIguais = true;
    for(int j = 0; j < 2; j++) {
      if(tabuleiro[j][i] != tabuleiro[j+1][i] || tabuleiro[j][i] == '-') {
        colsIguais = false;
      }
    }
    if(colsIguais) {
      return true;
    }
  }

  bool diagPrincipIgual = true;
  bool diagSecondIgual = true;

  for(int i = 0; i < 2; i++) {
    if(tabuleiro[i][i] != tabuleiro[i+1][i+1] || tabuleiro[i][i] == '-') {
      diagPrincipIgual = false;
    }
  }

  for(int i = 0; i < 2; i++) {
    if(tabuleiro[i][2 - i] != tabuleiro[i+1][2 - (i+1)] || tabuleiro[i][2 - i] == '-') {
      diagSecondIgual = false;
    }
  }

  if(diagPrincipIgual || diagSecondIgual) {
    return true;
  }

  return false;
}

int main() {
  int jogada = 1;
  mostrarMatriz();

  do {
    int i, j;

    cout << "Entre com a coordenada i: ";
    cin >> i;

    cout << "Entre com a coordenada j: ";
    cin >> j;

    bool deuCerto;

    if(jogada % 2 != 0) {
      deuCerto = jogar(i, j, 'x');
    } else {
      deuCerto = jogar(i, j, 'o');
    }

    if(deuCerto) {
      jogada++;
      mostrarMatriz();
    } else {
      cout << "Posicao nao pode ser marcada!" << endl;
      cout << "Tente novamente!" << endl;
    }

  } while(!jogoAcabou() && jogada != 9);

  return 0;
}
