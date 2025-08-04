#include <iostream>
#define num 10
using namespace std;

int main(){

  uint vector[num];

  for (int i = 0; i < num; i++) {
    cout << "Insira um número:" << endl;
    cin >> vector[i];
  }

  for (int i = 0; i < num; i++) {
    cout << vector[i] << endl;
  }

  for (int i = num - 1; i >= 0; i--) {
    cout << vector[i] << endl;
  }
}
