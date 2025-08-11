/*
 * Programa que recebe dois números calcula a soma e exibe o resultado. Utilize
 * ponteiro para manipular pelo menos uma das variáveis e exiba o valor através do
 * ponteiro
*/
#include<iostream>

using namespace std;

int main(){
  int a, b, x, *ptrA, *ptrB;
  cout << "Insira dois numeros para a soma:" << endl;
  cin >> a >> b;
  ptrA = &a;
  ptrB = &b;
  x = *ptrA + *ptrB;
  cout << x;
  return 0;
}

