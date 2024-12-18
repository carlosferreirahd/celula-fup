#include <iostream>
#include <cstdio>

using namespace std;

/*

  + break
    - usado para terminar um laço
      * a execução do laço acaba
        - Exemplinho: ler inteiros até que o usuário digite um valor < 0

  + continue
    - usado para terminar uma iteração do laço
      * a execução da iteração é forçada a terminar e a próxima começa
        - Exemplinho: mostrar os números impares de 1 até n usando continue, sem usar a operacao
                      de módulo %

  Exemplinho 1:
    Faça um programa que converta um inteiro decimal para binário

    Momento de revisão:
      + Criar um programa que cálcule a fórmula de bhaskara
*/


int main()  
{  
    long int num, bin = 0, rem = 0, place = 1;  
  
    printf("Enter a decimal number\n");  
    scanf("%ld", &num);  
  
    printf("\nBinary equivalent of %ld is ", num);  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    printf("%ld\n", bin);  
  
    return 0;  
} 
