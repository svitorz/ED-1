#include <iostream>

int main (int argc, char *argv[]) {
  std::string nome = "Vitor", *ptrNome = &nome; 
  std::cout << nome << std::endl; 
  std::cout << *ptrNome;
  return 0;
}
