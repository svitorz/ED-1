#include <iostream>
#define length 4
using namespace std;

struct Pessoa {
  string nome, cpf;
  int idade;
};

void cadastrarPessoa(Pessoa *pessoa){
  std::cout << "Cadastro de pessoas.\n"; 
  for (int i = 0; i < length; i++) {
    std::cout << "Insira o nome da " << (i + 1) << "a pessoa:";
    std::cin >> pessoa->nome;
    std::cout << "Insira o CPF da " << (i + 1) << "a pessoa:";
    std::cin >> pessoa->cpf;
    std::cout << "Insira a idade da " << (i + 1) << "a pessoa:";
    std::cin >> pessoa->idade;
    std::cout << endl;
  }
}

void exibirPessoa(Pessoa *pessoa){
  std::cout << "Exibindo cadastro de pessoas.\n"; 
  for (int i = 0; i < length; i++) {
    std::cout << "\nExibindo cadastro: " << (i + 1) << endl;
    std::cout << pessoa->nome << endl;
    std::cout << pessoa->cpf << endl;
    std::cout << pessoa->idade << endl;
    std::cout << endl;
  }
}

int main () {
  Pessoa pessoa;  
  cadastrarPessoa(&pessoa);
  exibirPessoa(&pessoa);
  return 0;
}
