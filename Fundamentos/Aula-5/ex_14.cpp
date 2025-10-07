#include <iostream>
#define length 7 
using namespace std;

struct Funcionario {
  string nome, cargo;
  float salario;
};

void preencheCadastro(Funcionario *funcionario, int *idMenorSal){
  float menorSal = 10000;
  for (int i = 0; i < length; i++) {
    std::cout << "Cadastro de funcionário " << (i + 1) << endl;
    std::cout << "Insira o nome do funcionario:";
    std::cin >> funcionario[i].nome;
    std::cout << "Insira o cargo do funcionario:";
    std::cin >> funcionario[i].cargo;
    do {
      std::cout << "Insira o salario do funcionario:";
      std::cin >> funcionario[i].salario;
    } while(funcionario[i].salario < 0  || funcionario[i].salario > 10000);

    if(funcionario[i].salario < menorSal){
      menorSal = funcionario[i].salario;
      *idMenorSal = i;
    }
  }
}

void exibeCadastro(Funcionario *funcionario){
  for (int i = 0; i < length; i++) {
    std::cout << "\nExibindo cadastro do " << (i + 1) << " funcionário." << endl;
    std::cout << "nome do funcionario:";
    std::cout << funcionario[i].nome<< endl;
    std::cout << "cargo do funcionario:";
    std::cout << funcionario[i].cargo<< endl;
    std::cout << "salario do funcionario:";
    std::cout << funcionario[i].salario<< endl;
  }
}

void exibeMenorSalario(Funcionario *funcionario, int *idMenorSal){
    std::cout << "\nExibindo cadastro do funcionário com menor salário." << endl;
    std::cout << "nome do funcionario:";
    std::cout << funcionario[*idMenorSal].nome<< endl;
    std::cout << "cargo do funcionario:";
    std::cout << funcionario[*idMenorSal].cargo<< endl;
    std::cout << "salario do funcionario:";
    std::cout << funcionario[*idMenorSal].salario<< endl;
}
int main(){
  Funcionario *funcionario = new Funcionario[length];
  int idMenorSal;
  preencheCadastro(funcionario, &idMenorSal);
  exibeCadastro(funcionario);
  exibeMenorSalario(funcionario, &idMenorSal);
  delete[] funcionario;
  return 0;
}
