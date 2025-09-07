#include <iostream>

void trocaValor(int *ptrX, int *ptrY) {
  int aux;
  aux = *ptrY;
  *ptrY = *ptrX;
  *ptrX = aux;
}

int main (int argc, char *argv[]) {
  int a = 5, b = 10;
  std::cout << "\nValor de A:" << a;
  std::cout << "\nValor de B:" << b;
  trocaValor(&a, &b);
  std::cout << "\nValor de A (apos troca):" << a;
  std::cout << "\nValor de B (apos troca):" <<b;

  return 0;
}
