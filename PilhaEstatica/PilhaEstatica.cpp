#include "./headers/header.h"
#include <iostream>

using namespace std; 

/**
 * define o topo da pilha como 0
 * */
void criarPilha(Pilha *pilha){
  pilha->qtd = 0;
}

/**
 * Insere um item na pilha caso ela não esteja cheia
 * */
void inserirItem(Pilha *pilha){ 
  if (pilha->qtd < MAX) {
    std::cout << "Informe o elemento que deseja inserir na pilha\n";
    std::cin >> pilha->dados[pilha->qtd]; 
    pilha->qtd += 1;
  }else {
    std::cout << "A pilha está cheia.";
  }
}

void exibirItem(Pilha *pilha){
  if (pilha->qtd > 0) {
      std::cout << "O último elemento da pilha é " << pilha->dados[pilha->qtd - 1] << ".\n";
  }else {
    std::cout << "A pilha está vazia.\n";
  }
}

void removerItem(Pilha *pilha){
  if(pilha->qtd > 0)
    pilha->qtd--;
  else
    std::cout << "\nNão há elementos na pilha.\n";
}
