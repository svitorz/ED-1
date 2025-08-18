/**
 *Elabore um programa que seja baseado nos exercícios 3 e 4, 
  porém para o cadastro de 5
  funcionários da empresa(com ano de entrada maior que 2000) 
  Crie uma função que exiba o nome e o cargo do funcionário que
  possua maior salário.
 * */
#include <iostream>
#include <string>
#define SIZE 5
using namespace std; 

struct Funcionario {
  string nome, cargo;
  int ano;
  float sal;
};

void preencherCadastro(Funcionario *fun, int *id);
void exibirCadastro(Funcionario *fun);
void exibirMaiorSalario(Funcionario *fun, int *id);

int main() {
  Funcionario *fun = new Funcionario[SIZE]; 
  int idMaiorSal;
  preencherCadastro(fun, &idMaiorSal);
  exibirCadastro(fun);
  exibirMaiorSalario(fun, &idMaiorSal);
  delete[] fun;
  return 0;
}

void preencherCadastro(Funcionario *fun, int *id) {
  for (int i = 0; i < SIZE; i++) {
    cout << "Cadastro do funcionário:" << endl;
    cout << "Insira o nome do funcionário:";
    cin >> fun[i].nome;
    cout << endl;

    cout << "Insira o cargo do funcionário:";
    cin >> fun[i].cargo;
    cout << endl;

    cout << "Insira o salário do funcionário:";
    
    //Utiliza o primeiro salário inserido como parâmetro
    if(i == 0){
      *id = i;
    }
    cin >> fun[i].sal;
    
    // Se o salario atual (no loop) for maior que o com id salvo (considerando i como um id universal, devido ao mesmo tamanho)
    if(fun[i].sal > fun[*id].sal){
      //utilizo id como i
      *id = i;
    }
    cout << endl;

    int ano_aux;
    cout << "Insira o ano de entrada do funcionário:";
    cin >> ano_aux;

    if (ano_aux >= 2000) {
      fun[i].ano = ano_aux;
    }
    cout << endl;
  }
}

void exibirCadastro(Funcionario *fun) {
  for (int i = 0; i < SIZE; i++) {
    cout << "Exibindo funcionário:" << endl;
    cout << fun[i].nome;
    cout << "Nome: " << fun[i].nome;
    cout << endl;
    cout << "Cargo: " << fun[i].cargo;
    cout << endl;
    cout << "Salário: " << fun[i].sal;
    cout << endl;
    cout << "Ano de admissão: " << fun[i].ano;
    cout << endl;
  }
}

void exibirMaiorSalario(Funcionario *fun, int *id){
  cout << "Exibindo funcionário com maior salário:" << endl;
    cout << "Nome: " << fun[*id].nome;
    cout << endl;
    cout << "Cargo: " << fun[*id].cargo;
    cout << endl;
    cout << "Salário: " << fun[*id].sal;
    cout << endl;
    cout << "Ano de admissão: " << fun[*id].ano;
    cout << endl;
}
