#include <iostream>
#include <math.h>

using namespace std;

struct Ponto {
  float x;
  float y;
};

struct Circulo {
  Ponto centro;
  float raio;
};

// primeiro criamos uma funcao que calcula a distancia entre dois pontos
float distanciaPontos(Ponto p1, Ponto p2) {
  // a distancia entre os pontos p1 e p2 eh dada pela formula abaixo
  // d = raiz ( (x2 - x1)^2 + (y2 - y1)^2 )
  float d = sqrt( pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2) ); // formula em codigo
  return d;
}

// agora fazemos uma funcao que calcula a distancia de cada ponto
// para o centro do circulo, vendo quem eh a maior distancia e retornando ela
float calculaDistancias(Circulo circulo, Ponto pontos[], int n) {
  // a ideia eh percorrer todos os pontos, calculando a distancia entre o ponto
  // e o centro do circulo

  // variavel que guarda a maior distancia
  float maior = -1.0;

  // percorrer os pontos
  for(int i = 0; i < n; i++) {
    // pegando um ponto qualquer
    Ponto p = pontos[i];

    // calculando a distancia entre esse ponto e o centro do circulo
    float distancia = distanciaPontos(p, circulo.centro);

    // se a distancia for maior que a variavel 'maior', encontramos
    // uma distancia maior que a anterior
    if(distancia > maior) {
      // atualizamos a variavel maior
      maior = distancia;
    }
  }

  // depois de percorrer todos os pontos fazendo esse processo, retornarmos
  // a maior distancia
  return maior;
}

int main() {
  int n;

  cin >> n;

  Ponto pontos[n];
  Circulo circulo;

  for(int i = 0; i < n; i++) {
    // lendo as coordenadas
    float x, y;
    cin >> x >> y;

    // criando um ponto
    Ponto p;
    p.x = x;
    p.y = y;

    // adicionando o ponto no vetor
    pontos[i] = p;
  }

  float cx, cy, raio;

  cin >> cx >> cy >> raio;

  // criando centro
  Ponto centro;
  centro.x = cx;
  centro.y = cy;

  // criando circulo
  circulo.centro = centro;
  circulo.raio = raio;

  // pegado a maior distancia
  float maior_distancia = calculaDistancias(circulo, pontos, n);

  cout.precision(2);
  cout << fixed;
  cout << maior_distancia << endl;

  return 0;
}
