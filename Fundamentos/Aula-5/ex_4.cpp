#include <iostream>

int main (int argc, char *argv[]) {
  int n = 0;
  
  std::cout << "\nInsira um valor para n=";
  std::cin >> n;

  int *vetor = new (std::nothrow) int[n];
    
  for (int i = 0; i < n; i++) {
    std::cout << "\nInsira um valor para o vetor[" << i << "]=";
    std::cin >> vetor[i];
  }

  std::cout << "\nExibindo os valores do vetor:\n";
  for (int i = 0; i < n; i++) {
    std::cout << vetor[i] << std::endl;
  }
  std::cout << std::endl;
  int even = 0, odd = 0;
  for (int i = 0; i < n; i++) {
    if(vetor[i] % 2 == 0){
      even++;
    }else {
      odd++;
    }
  }

  std::cout << "\nNo total, há " << even << " valores pares, e " << odd << " valores ímpares.\n";

  delete[] vetor;
  return 0;
}
