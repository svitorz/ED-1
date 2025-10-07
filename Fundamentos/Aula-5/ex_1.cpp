#include <iostream>

int main (int argc, char *argv[]) {
  int i, *ptr;
  
  ptr = &i;
  std::cout << "\nInsira um valor para i:";
  std::cin >> i;
  std::cout << "\nValor de i:" << i;
  std::cout << "\nInsira um novo valor para i(utilizando ponteiro):";
  std::cin >> *ptr;
  std::cout << "\nvalor de i:" << i;
  return 0;
}
