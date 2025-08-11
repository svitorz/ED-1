#include <iostream>
#include <string>

using namespace std;

struct Animal {
  string nome, especie, raca;
  int idade;
};

void cadastrarAnimal(Animal *cadAnimal){
  cout << "Insira o nome do animal: ";
  cin >> cadAnimal->nome;

  cout << "\nInsira a espécie do animal: ";
  cin >> cadAnimal->especie;

  cout << "\nInsira a raça do animal: ";
  cin >> cadAnimal->raca;

  cout << "\nInsira a idade do animal (em anos): ";
  cin >> cadAnimal->idade;
}

void exibirCadastro(Animal *cadAnimal){
  cout << "O animal se chama " << cadAnimal->nome;
  cout << "\né da espécie " << cadAnimal->especie;
  cout << "\ne raça " << cadAnimal->raca;
  cout << "\ncom " << cadAnimal->idade << " anos.";
}

int main(){
  Animal strAnimal;
  cadastrarAnimal(&strAnimal);
  exibirCadastro(&strAnimal);
  return 0;
}
