#include <iostream> 

using namespace std; 

void inserirVetor(int *arr, int *size){
  for (int i = 0; i < *size; i++) {
    cout << "Insira um valor para arr[" << i << "] = ";
    cin >> arr[i];
  }
}

void mostrarVetor(int *arr,int *size){
  for (int i = 0; i < *size; i++) {
    cout << arr[i] << " "; 
    if(i % 2 == 0){
      cout << endl;
    }
  }
}

int main(){
  int size = 10, arr[size];
  inserirVetor(arr, &size);
  mostrarVetor(arr, &size);
  return 0;
}
