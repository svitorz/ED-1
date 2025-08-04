#include <iostream>
#include <cctype>
using namespace std;

void somar(){
  int a, b;
  cout << "Insira dois valores para serem somados:" << endl;
  cin >> a >> b;
  cout << endl << "resultado:";
  cout << a + b << endl;
}

void multiplicar(){
  int a,b,c;
  cout << "Insira três valores para serem multiplicados" << endl;
  cin >> a >> b >> c;
  cout << endl << "resultado:";
  cout << a * b * c << endl;
}

void dividir(){
  int a, b;
  cout << "Insira dois valores para a conta de divisão" << endl;

  cin >> a >> b;
  if(b == 0){
    cout << "O divisor não pode ser 0" << endl;
    return;
  }
  cout << endl << "resultado:";
  cout << a / b << endl;
}

int main(){
  char escolha;
  do {
    cout << "A - para receber e somar dois números e exibir o resultado. B – para receber três números, calcular e exibir"
      << "a multiplicação entre eles. C – para receber dois números e calcular e exibir a"
      << "divisão entre eles. S - para sair." << endl; 

    cin >> escolha;

    escolha = toupper(escolha);

    switch (escolha) {
      case 'A':
        somar();
        break;  
      case 'B':
        multiplicar();
        break;  
      case 'C':
        dividir();
        break;  
      default:
        break;  
    }
  } while(escolha != 'S');
} 

