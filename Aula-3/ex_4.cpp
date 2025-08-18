#include <iostream>
#include <string>

using namespace std; 

/**
 *  Elabore um programa em C++ que seja 
 *  capaz de criar uma struct que contenha 
 *  o nome, ano inicial válido(menor que 2000), 
 *  cargo e salário de um funcionário de uma empresa. 
 *  Crie dinamicamente o registro, 
 *  preencha as informações (válidas) 
 *  e depois as exiba.
 * */


struct Funcionario {
  string nome, cargo;
  int ano;
  float sal;
};

void preencherCadastro(Funcionario *fun);
void exibirCadastro(Funcionario *fun);

int main() {
  Funcionario *fun = new Funcionario; 
  preencherCadastro(fun);
  exibirCadastro(fun);
  delete fun;
  return 0;
}

void preencherCadastro(Funcionario *fun) {
  cout << "Cadastro do funcionário:" << endl;
  cout << "Insira o nome do funcionário:";
  cin >> fun->nome;
  cout << endl;

  cout << "Insira o cargo do funcionário:";
  cin >> fun->cargo;
  cout << endl;

  cout << "Insira o salário do funcionário:";
  cin >> fun->sal;
  cout << endl;

  int ano_aux;
  cout << "Insira o ano de entrada do funcionário:";
  cin >> ano_aux;
  
  if (ano_aux >= 2000) {
    fun->ano = ano_aux;
  }
  cout << endl;
}

void exibirCadastro(Funcionario *fun) {
  cout << "Exibindo funcionário:" << endl;
  cout << fun->nome;
  cout << "Nome: " << fun->nome;
  cout << endl;
  cout << "Cargo: " << fun->cargo;
  cout << endl;
  cout << "Salário: " << fun->sal;
  cout << endl;
  cout << "Ano de admissão: " << fun->ano;
  cout << endl;
}
