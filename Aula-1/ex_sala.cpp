#include <iostream>

using namespace std;

int main(){
  int a, b;
  cout << "Informe dois números:" << endl;
  cin >> a >> b;
  if(b != 0 && b < a)
    cout << "O resultado da divisão entre eles é " << a / b << endl; 
}
