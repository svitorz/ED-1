#include <iostream>

using namespace std;

int main(){
  int n;
  std::cout << "Insira um valor para n:";
  std::cin >> n;
  std::cout << endl;

  int *arrF = new int[n];
  int *arrS = new int[n];
  std::cout << "Preenchendo o vetor 1:" << endl;
  for (int i = 0; i < n; i++) {
    std::cout << "Insira um valor para vetorF[" << i << "]=";
    std::cin >> arrF[i];
    std::cout << endl;
  }
  for (int i = 0; i < n; i++) {
    std::cout << "Insira um valor para vetorS[" << i << "]=";
    std::cin >> arrS[i];
    std::cout << endl;
  }

  int *sumArr = new int[n];
  for (int i = 0; i < n; i++) {
    sumArr[i] = arrF[i] * arrS[i];
  }

  std::cout << "Exibindo vetor 1:" << endl;
  for (int i = 0; i < n; i++) {
    std::cout << "vetorF[" << i << "]=";
    std::cout << arrF[i];
    std::cout << endl;
  }
  std::cout << "Exibindo vetor 2:"<< endl;
  for (int i = 0; i < n; i++) {
    std::cout << "vetorS[" << i << "]=";
    std::cout << arrS[i];
    std::cout << endl;
  }

  std::cout << "Exibindo vetor 3:"<< endl;
  for (int i = 0; i < n; i++) {
    std::cout << "vetor[" << i << "]=";
    std::cout << sumArr[i];
    std::cout << endl;
  }

  delete[] arrF;
  delete[] arrS;
  delete[] sumArr;
}
