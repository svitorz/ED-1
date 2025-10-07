#include <iostream>
#define size 15

using namespace std;

void preencheVetor(float *arr){
  for (int i = 0; i < size; i++) {
    do {
      cout << "Insira um número entre 0.0 e 10.0 para a posição " << i <<  ": ";
      cin >> arr[i];
    } while(arr[i] < 0 || arr[i] > 10.0);
    std::cout << endl;
  }
}

void exibeVetor(float *arr){
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << "  ";
  }
}
int main(){
  float vetor[size];
  preencheVetor(vetor);
  exibeVetor(vetor);
  return 0;
}
