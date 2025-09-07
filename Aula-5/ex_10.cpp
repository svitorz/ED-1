#include <iostream>

using namespace std;

void preencheNotas(float *arr, int n){
  for (int i = 0; i < n; i++) {
    do {
      std::cout << "Insira a nota " << i + 1 << ":";
      std::cin >> arr[i];
    } while(arr[i] < 0 || arr[i] > 100.0);
  }
}

void calculaMedia(float *arr, int n, float *media){
  for (int i = 0; i < n; i++) {
    *media += arr[i];
  }
  *media /= n;
}

void exibeMedia(float *media){
  cout << *media;
}

int main(){
  int n = 2;
  float notas[n], media = 0;
  std::cout << "Calculando a média de " << n << " notas." << endl;
  preencheNotas(notas, n);
  calculaMedia(notas, n, &media);
  cout << "\nA média do aluno é:";
  exibeMedia(&media);
  return 0;
}
