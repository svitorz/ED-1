#include <iostream>
#include "./headers/header.h"

using namespace std;

int main() {
  int escolha;
  std::cout << "\nPilha Estática\n";

  Pilha *pilha;

  criarPilha(pilha);

  do {
    std::cout << "\nInforme a opção desejada:\n1-Para inserir um elemento na pilha\n2-Para exibir o topo\n3-Para remover um elemento da pilha\n0-Para sair do menu\n";
    std::cin >> escolha;
    
    switch (escolha) {
      case 1:
        inserirItem(pilha);
        break;
      case 2: 
        exibirItem(pilha);
        break;
      case 3: 
        removerItem(pilha);
        break;
      default:
        std::cout << "Opção inválida\n";
        break;
    }
  } while(escolha != 0);
  return 0;
}
