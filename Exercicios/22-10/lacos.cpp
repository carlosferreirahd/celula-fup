#include <iostream>
#include "cstdlib"

using namespace std;

/*

  enquanto(isso_aqui_for_verdade) {
    // faça isso
  }

  do {
    // faça isso
  } while(isso_aqui_for_verdade)

  for(int i = 0; i < 10; i++) {

  }

  int i = 0;
  while(i < 10) {
    i++;
  }


  LAÇOS: for, while, do while

  + Para que serve um laço de repetição ? 🤔🤔
    - Repetir blocos/trechos de código

  + Diferenças e estruturas dos laços de repetição
    - while
      * while(condicao for satisfeita)
    - do while
      * do { ... } while(condicao for satisfeita)
    - for
      * for(inicializacao; checagem de condicao; modificacao da variavel de inicializacao: incremento/decremento)


  🪜 EXEMPLINHO 1:
    - Mostre na tela os números de 0 a 100, pulando 10 números (0, 10, 20, 30, ..., 100)

  🪜 EXEMPLINHO 2:
    - Mostre na tela a quantidade de números pares de 0 a 200
    - Mostre na tela a quantidade de números impares de 205 a 312

  🪜 EXEMPLINHO 3:
    - Peça para o usuário entrar com uma quantidade de números inteiros, então guarde a soma dos
      números pares em uma variável e a soma dos números ímpares em outra, por fim, subtraia a soma
      dos números pares pela soma dos números ímpares
*/

int main() {
  int quantidade_de_numeros;
  int soma_pares = 0;
  int soma_impares = 0;

  cout << "Entre com a quantidade de numeros:" << endl;
  cin >> quantidade_de_numeros;

  for(int i = 0; i < quantidade_de_numeros; i++) {
    int numero;
    cout << "Entre com o numero #" << i + 1 << endl;
    cin >> numero;

    if(numero % 2 == 0) {
      soma_pares = soma_pares + numero;
    } else {
      soma_impares = soma_impares + numero;
    }
  }

  int resultado = soma_pares - soma_impares;

  cout << "Resultado pares - impares = " << resultado << endl;

  return 0;
}


/*

Tempo
Número máximo de arquivos: 1
Tipo de trabalho: Trabalho individual
Receber um tempo em segundos e transformar no formato:

Hora:Minuto:Segundo

Exemplo de Entrada:

4202

Exemplo de Saída:

1:10:2


* dividendo / divisor = quociente (resto)


int c = a % b;
int d = a / b;

*/
