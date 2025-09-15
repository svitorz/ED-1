#include "./headers/header.h"
#include <cstring>

void criarPilha(Pilha *pilha){
  pilha->topo = 0;
}

void inserirPessoa(Pilha *pilha){ 
  if (pilha->topo < MAX) {
    std::cout << "Informe o nome:";
    std::cin >> pilha->pessoa[pilha->topo].nome; 
    std::cout << "\nInforme a idade:";
    std::cin >> pilha->pessoa[pilha->topo].idade; 
    pilha->topo += 1;
  }else {
    std::cout << "A pilha está cheia.";
  }
}

void exibirPessoa(Pilha *pilha){
  if (pilha->topo > 0) {
      std::cout << "O último elemento da pilha é " 
      << "Nome: " << pilha->pessoa[pilha->topo - 1].nome 
      << ".\nIdade: " << pilha->pessoa[pilha->topo - 1].idade << ".\n";
  }else
    std::cout << "A pilha está vazia.\n";
}

void removerPessoa(Pilha *pilha){
  if(pilha->topo > 0)
    pilha->topo--;
  else
    std::cout << "\nNão há elementos na pilha.\n";
}
