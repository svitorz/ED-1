#include <iostream>
#define num 5
using namespace std;

int main(){

  int vector[num];

  for (int i = 0; i < num; i++) {
    cout << "Insira um número:" << endl;
    cin >> vector[i];
  }

  for (int i = 0; i < num; i++) {
    cout << vector[i] << endl;
  }

}
