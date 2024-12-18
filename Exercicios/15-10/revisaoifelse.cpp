#include <iostream>

using namespace std;

int main() {
  float preco_embalagem;

  cin >> preco_embalagem;

  float preco_unidade = preco_embalagem / 24; // 24 eh a quantidade de rolos

  float preco_4_rolos = preco_unidade * 4.0;
  float preco_8_rolos = preco_unidade * 8.0;
  float preco_12_rolos = preco_unidade * 12.0;
  float preco_16_rolos = preco_unidade * 24.0;

  cout << "Preco 4 rolos ate " << preco_4_rolos - 0.01 << endl;
  cout << "Preco 8 rolos ate " << preco_8_rolos - 0.01 << endl;
  cout << "Preco 12 rolos ate " << preco_12_rolos - 0.01 << endl;
  cout << "Preco 16 rolos ate " << preco_16_rolos - 0.01 << endl;

  return 0;
}
