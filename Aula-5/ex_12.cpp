#include <iostream>

using namespace std;

void preencheVetor(int *arr, int size){
  std::cout << "Preenchendo o vetor 1:" << endl;
  for (int i = 0; i < size; i++) {
    std::cout << "Insira um valor para vetor[" << i << "]=";
    std::cin >> arr[i];
    std::cout << endl;
  }
}

void calcularVetor(int *arrF, int *arrS, int *sumArr, int size){
  for (int i = 0; i < size; i++) {
    sumArr[i] = arrF[i] * arrS[i];
  }
}

void exibeVetor(int *arr, int size){
  std::cout << "Exibindo vetor:" << endl;
  for (int i = 0; i < size; i++) {
    std::cout << "vetor[" << i << "]=";
    std::cout << arr[i];
    std::cout << endl;
  }

}
int main(){
  int n;
  std::cout << "Insira um valor para n:";
  std::cin >> n;
  std::cout << endl;

  int *arrF = new int[n];
  preencheVetor(arrF, n);
  int *arrS = new int[n];
  preencheVetor(arrS, n);
  
  int *sumArr = new int[n];

  calcularVetor(arrF, arrS, sumArr, n);

  std::cout << "Exibindo vetor 1:" << endl;
  exibeVetor(arrF, n);
  std::cout << "Exibindo vetor 2:" << endl;
  exibeVetor(arrS, n);
  std::cout << "Exibindo vetor de multiplicação:" << endl;
  exibeVetor(sumArr, n);
  delete[] arrF;
  delete[] arrS;
  delete[] sumArr;
}
