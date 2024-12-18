#include <iostream>
using namespace std;

void imprimeLinha( int qntEspacos, int qntNumeros,int num ) {
    for (int i=1; i<= qntEspacos; i++) {
        cout << " ";
    }
    for (int i=1; i<=qntNumeros; i++) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    
    int qntEspacos = N-1; // mudando para -1 aqui,
    int qntNumeros = 1; // a linguagem começa a printar do topo, entao a qtd inicial devel ser 1
    for (int i=1; i<=N; i++) {
        imprimeLinha( qntEspacos, qntNumeros, N);
        qntEspacos--;
        qntNumeros++; // aumentando a qtd para a prox linha
    }

}
