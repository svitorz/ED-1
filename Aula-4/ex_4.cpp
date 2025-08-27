#include <iostream>
#define size 10

using namespace std;

int main(){
  int *arr = new (nothrow) int[size];
  for (int i = 0; i < size; i++) {
    cout << "Insira um valor para vetor[" << i << "]=";
    cin >> arr[i];
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  
  cout << "\nNúmeros maiores que 13:";
  for (int i = 0; i < size; i++) {
    if (arr[i] > 13) {
      cout << arr[i] << " ";
    }
  }
  delete [] arr;
}
