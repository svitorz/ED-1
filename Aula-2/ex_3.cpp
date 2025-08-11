#include<iostream>

using namespace std;

void soma(int *a, int *b, int *x);

int main(){
  int a, b, x;
  cout << "Insira dois numeros para a soma:" << endl;
  cin >> a >> b;
  soma(&a, &b, &x);
  cout << x;
}

void soma(int *a, int *b, int *x){
  *x = *a + *b;
}
