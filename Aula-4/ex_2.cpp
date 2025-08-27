#include <iostream>
#define SIZE 15
using namespace std;

void preencheVetor(int *vetor) {
  for (int i = 0; i < SIZE; i++) {
    cout << "Insira um valor para o vetor[" << i << "]=";
    cin >> vetor[i];
  }
}

void exibeVetor(int *vetor) {
  for (int i = 0; i < SIZE; i++) {
    cout << vetor[i] << " ";
  }
}

void somarVetor(int *arr, int *soma) {
  int aux = 0;
  for (int i = 0; i < SIZE; i++) {
       aux += arr[i];
  }

  *soma = aux;
}

int main(){
  int somaVetor = 0, vetor[SIZE];
  preencheVetor(vetor);
  exibeVetor(vetor);
  somarVetor(vetor, &somaVetor);
  cout << "\nO valor da soma de todo vetor é:" << somaVetor;
  return 0;
}
