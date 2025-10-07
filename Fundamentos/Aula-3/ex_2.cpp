#include <iostream>

using namespace std;

/**
 *  Elabore um programa para armazenar números (de 0 a -10) em dois vetores. 
 *  Inicialmente necessário saber o tamanho dos vetores (peça para o usuário). 
 *  Aloque dinamicamente os vetores e peça ao usuário que informe os valores de cada um deles. 
 *  Crie e construa um terceiro vetor que seja o resultado da soma dos anteriores. 
 *  Exiba os números contidos em cada um dos vetores.
 * */
  

void preencherVetor(int *vector, int size, char name);
void somarVetores(int *vectorX, int *vectorY, int *sumVector, int size);
void mostrarVetor(int *vector, int size, char name);

int main(){
  int size = 0;

  cout << "Insira o tamanho dos vetores:" <<endl;
  cin >> size;
  int *vectorX = new (nothrow) int[size];
  preencherVetor(vectorX, size, 'X'); 
  
  int *vectorY = new (nothrow) int[size];
  preencherVetor(vectorY, size, 'Y'); 

  int *sumVector = new (nothrow) int[size];
  somarVetores(vectorX, vectorY, sumVector, size); 

  mostrarVetor(vectorX, size, 'X');
  mostrarVetor(vectorY, size, 'Y');
  
  cout << "Mostrando a soma dos vetores:" << endl;
  
  mostrarVetor(sumVector, size, 'S');

  cout << endl << "Fim da execução.";

  delete[] vectorX;
  delete[] vectorY;
  delete[] sumVector; 
}

void preencherVetor(int *vector, int size,char name) {
  int aux = 0;
  for (int i = 0; i < size; i++) {
      cout << "Insira um valor no intervalo (0-10) para a posição vetor" << name << "[" << i << "].";
      cin >> aux;
      if (aux < 0 && aux > 10) {
        aux = 0;
      }
      vector[i] = aux; 
  }
}

void somarVetores(int *vectorX, int *vectorY, int *sumVector, int size) {
  for (int i = 0; i < size; i++) {
    sumVector[i] = vectorX[i] + vectorY[i];
  }
}

void mostrarVetor(int *vector, int size, char name) {
  for (int i = 0; i < size; i++) {
    cout << "vetor" << name << "[" << i << "]= " << vector[i] << " "; 
  }
  cout << endl;
}

