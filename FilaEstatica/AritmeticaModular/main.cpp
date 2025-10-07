#include <iostream>

int main () {
  for (int i = 0; i < 5; i++) {
    std::cout << (i + 1) % 5 << std::endl;  
  }
  return 0;
}
