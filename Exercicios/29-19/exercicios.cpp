#include <iostream>

using namespace std;

/*

Faça um algoritmo que simule a compra de produtos em uma loja. Considere que a loja
oferece os seguintes tipos de produto:
(1) caderno - R$ 11,50
(2) caneta - R$ 3,70
(3) lapiseira - R$ 6,00
(4) estojo - R$ 8,50


O algoritmo deve ler os códigos dos produtos até que seja informado um código inexistente.
Códigos iguais podem ser informados, o que corresponde a comprar um outro item do produto repetido.
Calcule a conta e imprima quanto o cliente deve pagar.
Mostre também quantas lapiseiras foram compradas.

Exemplo de Entrada:
2
3
3
4
-1

Exemplo de Saída:
24.20
2

*/

int main()
{
  int prod;
  int cont = 0;
  double result = 0;

  cin >> prod;

  while (prod == 1 || prod == 2 || prod == 3 || prod == 4)
  {

    if (prod == 1)
    {
      result += 11.50;
    }
    else if (prod == 2)
    {
      result += 3.70;
    }
    else if (prod == 3)
    {
      result += 6.0;
      cont++;
    }
    else if (prod == 4)
    {
      result += 8.50;
    }

    cin >> prod;
  }

  cout.precision(2);
  cout << fixed;
  cout << result << endl
       << cont << endl;

  return 0;
}
