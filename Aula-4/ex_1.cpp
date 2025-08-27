#include <iostream>

using namespace std;

void calculaSoma(int a, int b, int *resultado) {
  *resultado = (a * 3) + (b * 3);
}

int main(){
  int a, b, resultado;
  cout << "Insira dois valores para A e B:";
  cin >> a >> b;
  calculaSoma(a,b,&resultado);
  cout << "O resultado da soma do tripo das variávies é: " << resultado << endl;
  return 0;
}
