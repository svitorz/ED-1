#include <iostream>
#include <cctype>
#include <string>

using namespace std;

struct Usuario {
  string nome, cpf;
  char sexo;
  int idade;
};

void preencherValores(Usuario *usuario) {
  cout << "Insira o nome:";
  cin >> usuario->nome;

  cout << "Insira o CPF:";
  cin >> usuario->cpf;

  cout << "Insira a idade:";
  cin >> usuario->idade;

  char aux;
  do {
    cout << "Insira o sexo:";
    cin >> aux;
    aux = tolower(aux);
  } while((aux != 'm') && (aux != 'f'));
  usuario->sexo = aux;
}

void exibirValores(Usuario *usuario){
  cout << "\nO nome é:";
  cout << usuario->nome;

  cout << "\nCPF:";
  cout << usuario->cpf;

  cout << "\nidade:";
  cout << usuario->idade;
  
  cout << "\nsexo:";
  cout << usuario->sexo;
}

int main(){
  Usuario usuario; 
  preencherValores(&usuario);
  exibirValores(&usuario);
  return 0;
}
