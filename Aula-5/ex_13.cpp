#include <iostream>

using namespace std;

struct Funcionario {
  string nome, cargo;
  float salario;
};

void preencheCadastro(Funcionario *funcionario){
  std::cout << "Cadastro de funcionário." << endl;
  std::cout << "Insira o nome do funcionario:";
  std::cin >> funcionario->nome;
  std::cout << "Insira o cargo do funcionario:";
  std::cin >> funcionario->cargo;
  do {
    std::cout << "Insira o salario do funcionario:";
    std::cin >> funcionario->salario;
  } while(funcionario->salario < 0  || funcionario->salario > 10000);
}
void exibeCadastro(Funcionario *funcionario){
  std::cout << "Exibindo cadastro de funcionário." << endl;
  std::cout << "nome do funcionario:";
  std::cout << funcionario->nome<< endl;
  std::cout << "cargo do funcionario:";
  std::cout << funcionario->cargo<< endl;
  std::cout << "salario do funcionario:";
  std::cout << funcionario->salario<< endl;
}

int main(){
  Funcionario *funcionario = new Funcionario;
  preencheCadastro(funcionario);
  exibeCadastro(funcionario);
  return 0;
}
