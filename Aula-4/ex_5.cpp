#include <iostream>
#define size 6

using namespace std;

void preencherVetor(int *arr) {
  for (int i = 0; i < size; i++) {
    cout << "Insira um valor para vetor[" << i << "]=";
    cin >> arr[i];
  }
}

void exibirVetor(int *arr){
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void exibirNegativos(int *arr) {
  cout << "\nExibindo valores negativos:";
  for (int i = 0; i < size; i++) {
    if(arr[i] < 0) {
      cout << arr[i] << " ";
    }
  }
}

int main(){
  int *arr = new (nothrow) int[size];

  preencherVetor(arr);
  exibirVetor(arr);
  exibirNegativos(arr);  

  delete [] arr;
}
