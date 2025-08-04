#include <iostream>
#define num 7
using namespace std;

int main(){

  int vector[num], soma, divisiveis;

  for (int i = 0; i < num; i++) {
    cout << "Insira um número:" << endl;
    cin >> vector[i];
  }

  for (int i = 0; i < num; i++) {
    soma += vector[i];
    if (vector[i] % 8 == 0){
      divisiveis++;
    }
  }

  cout << "A soma de todos os valores é igual a: " << soma << endl;
  cout << "E há " << divisiveis << " numeros divisiveis por 8.";
}
