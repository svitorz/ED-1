#include <iostream>
#define num 4
using namespace std;

int main(){

  int vector[num][num];

  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
      cout << "Insira um número:" << endl;
      cin >> vector[i][j];
    }
  }

  
  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
      if(i == j){
        cout << vector[i][j] << endl;
        cout << " ";
      }
    }
  }

  
  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
      if(j == num - 1){
        cout << vector[i][j] << " ";
      }
    }
  }
}
