#include <iostream>

using namespace std;

int main(){

  string nome_dono_animal_mais_velho;
  struct Animal {
    string nome, raca, nome_dono, telefone;
    int idade;
  } strAnimal[5];

  for (int i = 0; i < 5; i++){
    cout << "Informe o nome do animal:";
    cin >> strAnimal[i].nome;
    cout << "Informe a raça do animal:";
    cin >> strAnimal[i].raca;
    cout << "Informe o nome do dono do animal:";
    cin >> strAnimal[i].nome_dono;
    cout << "Informe o telefone do dono do animal:";
    cin >> strAnimal[i].telefone;
    cout << "Informe a idade do animal:";
    cin >> strAnimal[i].idade;

    if(strAnimal[i].idade > strAnimal[i - 1].idade){
      nome_dono_animal_mais_velho = strAnimal[i].nome_dono;
    }
  }

  cout << "O dono do animal mais velho se chama " << nome_dono_animal_mais_velho << endl;
}
