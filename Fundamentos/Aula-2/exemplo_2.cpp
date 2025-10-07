#include <iostream>
#include <string> 

using namespace std; 

void trocaValor(int *a, int *b){
//void trocaValor(int a, int b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int x = 10, y = 3;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  trocaValor(&x, &y);
  //trocaValor(x, y);
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  return 0;
}
