#include <iostream>
#include <cmath>
#define qtd 10

using namespace std;

struct Circulo {
  double raio, circunferencia, area, diametro;
};

void calcularDiametro(Circulo *circulo){
  circulo->diametro = circulo->raio * 2.0;
}

void calcularCircunferencia(Circulo *circulo) {
  circulo->circunferencia = M_PI * circulo->diametro; 
}

void calcularArea(Circulo *circulo){
  circulo->area = M_PI * pow(2, circulo->raio);
}

void exibirValores(Circulo *circulo){
  cout << "\nO diametro tem valor: ";
  cout << circulo->diametro;
  cout << "\nA circunferencia tem valor: ";
  cout << circulo->circunferencia;
  cout << "\nA area tem valor: ";
  cout << circulo->area;
}

int main(){
  Circulo *strCirc = new Circulo[qtd];
  cout << "Insira o valor do raio do circulo:"; 
  cin >> strCirc->raio;
  calcularDiametro(strCirc);
  calcularCircunferencia(strCirc);
  calcularArea(strCirc);
  exibirValores(strCirc);
  delete[] strCirc;
  return 0;
}
