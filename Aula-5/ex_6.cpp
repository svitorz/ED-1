#include <iostream>
 
struct Pessoa {
  std::string nome, cpf;
  int idade;
};

int main () {
  Pessoa pessoa, *ptrPessoa;
  *ptrPessoa = pessoa;
  pessoa.nome = "Vitor";
  ptrPessoa->cpf = "abc123";
  ptrPessoa->idade = 19;
  std::cout << (*ptrPessoa).nome << std::endl;
  std::cout << ptrPessoa->cpf << std::endl;
  std::cout << (*ptrPessoa).idade << std::endl;
  ptrPessoa->idade = 21;
  std::cout << "idade alterada via ponteiro" << ptrPessoa->idade;
  return 0;
}
