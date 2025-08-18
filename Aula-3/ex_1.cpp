#include <iostream>

using namespace std;

/**
 *  Elabore um programa para armazenar números (de 0 a -10) em dois vetores. 
 *  Inicialmente necessário saber o tamanho dos vetores (peça para o usuário). 
 *  Aloque dinamicamente os vetores e peça ao usuário que informe os valores de cada um deles. 
 *  Crie e construa um terceiro vetor que seja o resultado da soma dos anteriores. 
 *  Exiba os números contidos em cada um dos vetores.
 * */

int main(){
  int size = 0, aux = 0;

  cout << "Insira o tamanho dos vetores:" <<endl;
  cin >> size;
  int *vectorX = new (nothrow) int[size];
  for (int i = 0; i < size; i++) {
      cout << "Insira um valor no intervalo (0-10) para a posição vetorX[" << i << "].";
      cin >> aux;
      if (aux <= 0 && aux >= 10) {
        aux = 0;
      }
      vectorX[i] = aux; 
  }
  
  int *vectorY = new (nothrow) int[size];
  aux = 0;
  for (int i = 0; i < size; i++) {
      cout << "Insira um valor no intervalo (0-10) para a posição vetorY[" << i << "].";
      cin >> aux;
      if (aux <= 0 && aux >=10) {
        aux = 0; 
      }
      vectorY[i] = aux; 
  }

  int *sumVector = new (nothrow) int[size];
  for (int i = 0; i < size; i++) {
    sumVector[i] = vectorX[i] + vectorY[i];
  }


  for (int i = 0; i < size; i++) {
    cout << "vetorX[" << i << "]= " << vectorX[i] << " "; 
  }

  cout << endl;
  
  for (int i = 0; i < size; i++) { 
    cout << "vetorY[" << i << "]= " << vectorY[i] << " "; 
  }

  cout << endl;

  for (int i = 0; i < size; i++) {
    cout << "e a soma de cada posição dos vetores é " << sumVector[i] << " "; 
  }

  cout << endl << "Fim da execução.";
  
  delete[] vectorX;
  delete[] vectorY;
  delete[] sumVector; 
}
