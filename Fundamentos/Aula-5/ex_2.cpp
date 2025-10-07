#include <iostream>

int main (int argc, char *argv[]) {
  int x = 3, y = 9, *ptrx, *ptry;
  ptrx = &x;
  ptry = nullptr;
  std::cout << "Valor de X=" << x << std::endl;
  std::cout << "Valor de Y=" << y << std::endl;
  std::cout << "Valor de PTRX=" << *ptrx << std::endl;
  std::cout << "Valor de ptry=" << ptry << std::endl;
  std::cout << "Endereço de X=" << &x << std::endl;
  std::cout << "Endereço de Y=" << &y << std::endl;
  std::cout << "Endereço de PTRX=" << &ptrx << std::endl;
  std::cout << "Endereço de ptry=" << &ptry << std::endl;
  ptry = &y;
  *ptry = 5;
  std::cout << "Valor de X=" << x << std::endl;
  std::cout << "Valor de Y=" << y << std::endl;
  std::cout << "Valor de PTRX=" << *ptrx << std::endl;
  std::cout << "Valor de ptry=" << *ptry << std::endl;
  std::cout << "Endereço de X=" << &x << std::endl;
  std::cout << "Endereço de Y=" << &y << std::endl;
  std::cout << "Endereço de PTRX=" << &ptrx << std::endl;
  std::cout << "Endereço de ptry=" << &ptry << std::endl;
  return 0;
}
