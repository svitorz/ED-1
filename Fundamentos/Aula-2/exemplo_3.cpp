#include <iostream>

using namespace std; 

void preencheVetor(int *ptrVet, int *tam);

int main(){
  int tam = 10, vet[tam];
  preencheVetor(vet, &tam);
  return 0;
}

void preencheVetor(int *ptrVet, int *tam) {
  int i;
  for (i = 0; i < *tam; i++) {
    cout << "Vetor[" << i << "]=";
    cin >> ptrVet[i];
  }
}

