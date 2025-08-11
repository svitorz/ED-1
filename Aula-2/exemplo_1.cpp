#include <iostream>

using namespace std;

int main(){
  int x=2, y=10, *ptr1, *ptr2;
  char letra = 'T', *ptrLetra;
  ptr1 = &x;
  ptr2 = nullptr;
  cout << "Valor de ptr: "<< ptr1;
  cout << "\nValor de x de forma indireta: "<< *ptr1;
  cout << "\nEndereço de ptr1 :" << &ptr1;
  cout << "\nValor de x: "<< x ;
  cout << "\nEndereço de x: "<< &x;

  //exibindo o y 
  ptr2=&y;
  cout << "\nY de forma direta: " << y;
  cout << "\nEndereço do ponteiro: " << &ptr2;
  cout << "\nValor que o ponteiro aponta: " << *ptr2;
  *ptr2=5;

  cout << "\nY de forma direta: " << y;
  cout << "\nEndereço do ponteiro: " << &ptr2;
  cout << "\nValor que o ponteiro aponta: " << *ptr2 << endl;

  cout << "Valor da variável letra: " << letra;
  cout << "\nEndereço do ponteiro: " << &ptrLetra;
  cout << "\nValor que o ponteiro aponta: " << static_cast<void*> (ptrLetra);
  //cout << "\nValor que o ponteiro aponta (sem casting): " <<  *ptrLetra;

  return 0;
}
