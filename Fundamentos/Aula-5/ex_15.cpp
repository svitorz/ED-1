#include <iostream>
#define size 3
using namespace std;

void preencheMatriz(int **arr){
  for (int i = 0; i < size; i++) {
    arr[i] = new int[size];
    for (int j = 0; j < size; j++) {
      std::cout << "\nInsira um valor para matriz[" << i << "]["<<j<<"]=";
      std::cin >> arr[i][j]; 
    }
  }
}

void exibeMatriz(int **arr){
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      std::cout << "\nValor da matriz[" << i << "]["<<j<<"]=";
      std::cout << arr[i][j]; 
    }
  }
}
void exibeDiagonal(int **arr){
  std::cout << "\n exibindo somente a diagonal\n";
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if(i == j){
        std::cout << arr[i][j]; 
      }
      std::cout << "  ";
    }
    std::cout << endl;
  }
}

int main(){
  int **matriz = new int*[size];
  preencheMatriz(matriz);
  exibeMatriz(matriz);
  exibeDiagonal(matriz);
  for (int j = 0; j < size; j++) {
    delete[] matriz[j];
  }
  delete[] matriz;
  return 0;
}
