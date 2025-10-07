#include <iostream>
#include <cmath>
#define qtd 10

using namespace std;

struct Circulo {
  double raio, circunferencia, area;
};

int main(){
  Circulo *strCirc = new Circulo[qtd];
  cout << "Insira o valor do raio do circulo:"; 
  cin >> strCirc->raio;
  double d = strCirc->raio * 2.0;
  strCirc->circunferencia = M_PI * d; 
  strCirc->area = M_PI * pow(2, strCirc->raio);
  cout << "\nA circunferencia tem valor: ";
  cout << strCirc->circunferencia;
  cout << "\nA area tem valor: ";
  cout << strCirc->area;

  delete[] strCirc;
  return 0;
}
