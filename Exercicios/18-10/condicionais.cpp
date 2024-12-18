#include <iostream>
#include <cstdio>

using namespace std;

/*
          🌴 RESUMINHO 🌴

-- O que é uma variável booleana ?
 - Guardam valores verdadeiros ou falsos (true (1) / false (0))
 - utilizadas nas estruturas de decisão (if / else)

    -- if(true) {

      // faço alguma coisa

    } else {

      // faço outra coisa
      
    }

    🪜 EXEMPLO 1: <- feito :)
      O Preço dos alimentos está um pouco alto esses dias.
      Estou com fome e quero comer alguma coisa 😋 🍽️
      Me ajude a [decidir] o que vou comprar hoje 🤔

        - [SE] o preço da carne for menor que 30 reais, mostre na tela: "Comprei carne"
        - [SENÃO] Mostre na tela: "Aff, ta caro :( vou comprar so pao e presunto"
        -   [SE] o preço do pão com o preço presunto for menor que 15 reais,
                  mostre na tela "Comprei pao com presunto"
        -   [SENÃO] mostre na tela "Aff ta tudo caro demais, o jeito eh comprar miojo mesmo"

      Vamos tentar transcrever isso em codigo fonte 👻

    🪜 EXEMPLO 2:
      Repita o __EXEMPLO 1__ mas desta vez, crie uma variável "meu_dinheiro", que vai guardar
      a quantidade de dinheiro que voce tem disponivel, depois leia do usuario (ENTRADA) os precos
      da carne, pao e presunto e compare:
        - Confira se, com seu dinheiro, voce pode comprar carne, se sim,
          mostre na tela "Comprei carne"

        - senão, confire se voce pode comprar pão com presunto, se sim,
          mostre na tela "Comprei pao com presunto"
        - senão mostre na tela "Comprei miojo de legumes :("
*/

int main() {
  float meu_dinheiro;
  float preco_carne, preco_pao, preco_presunto;

  // cout << "Digite a quantidade de dinheiro que voce tem" << endl;
  // cin >> meu_dinheiro;

  // cout << "Voce tem R$ " << meu_dinheiro << ", voce tem esta quantidade!" << endl;
  // cout << "Preco do pao: " << preco_pao << endl;

  // printf("Digite a quantidade de dinheiro que voce tem\n");
  // scanf("%f", &meu_dinheiro);

  // printf("Voce tem R$ %.2f, vote tem esta quantidade!\n", meu_dinheiro);
  // printf("Valor do pao: %f\n", preco_pao);


  cout << "Digite a quantidade de dinheiro que voce tem" << endl;
  cin >> meu_dinheiro;

  cout << "Digite o preco da carne" << endl;
  cin >> preco_carne;

  cout << "Digite o preco do pao" << endl;
  cin >> preco_pao;

  cout << "Digite o preco do presunto" << endl;
  cin >> preco_presunto;

  printf("Digite a quantidade de dinheiro que voce tem\n");
  scanf("%f", &meu_dinheiro);

  printf("Digite o preco da carne\n");
  scanf("%f", &preco_carne);

  printf("Digite o preco do pao\n");
  scanf("%f", &preco_pao);

  printf("Digite o preco do presunto\n");
  scanf("%f", &preco_presunto);

  if(meu_dinheiro >= preco_carne) {
    // se sim

    // cpp
    cout << "Comprei carne!" << endl;

    // c
    printf("Comprei carne!\n");

  } else {
    // senao

    cout << "Aff, ta caro :( vou comprar so pao e presunto" << endl;

    printf("Aff, ta caro :( vou comprar so pao e presunto\n");

    if(meu_dinheiro >= preco_pao + preco_presunto) {
      cout << "Comprei pao com presunto" << endl;
      printf("Comprei pao com presunto\n");      
    } else {
      cout << "Aff ta tudo caro demais, o jeito eh comprar miojo mesmo" << endl;
      printf("Aff ta tudo caro demais, o jeito eh comprar miojo mesmo\n");
    }
  }

  return 0;
}
