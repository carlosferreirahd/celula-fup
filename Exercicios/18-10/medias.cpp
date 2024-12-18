#include <iostream>

using namespace std;

int main() {
  int quantidade_de_elementos;

  cin >> quantidade_de_elementos;

  float soma_dos_valores = 0.0;

  for(int i = 0; i < quantidade_de_elementos; i++) {
    float nota;
    cin >> nota;
    soma_dos_valores = soma_dos_valores + nota;
  }

  float media = soma_dos_valores / quantidade_de_elementos;

  cout.precision(2);
  cout << fixed;
  cout << media << endl;

  return 0;
}
