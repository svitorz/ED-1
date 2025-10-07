#include "./headers/header.h" 
#include <iostream>

using namespace std;

/**
 * Função para alocar dinamicamente a pilha 
 * */
Pilha* criarPilha(){
  Pilha *topo = new (std::nothrow) Pilha;

  // verifica se a pilha foi criada 
  if(topo == nullptr){
    std::cout << "Erro ao alocar memória\n";
    exit(0);
  }

  // define o valor default como nulo
  *topo = nullptr;
  std::cout << "Pilha criada com sucesso!\n";
  return topo;
}

/**
 * Verifica se a pilha esta vazia 
 * */
bool pilhaVazia(Pilha *pilha){
  return *pilha == nullptr;
}

void inserirElemento(Pilha *pilha){
  //Aloca um novo nó 
  Node *newNode = new (std::nothrow) Node;

  // verifica se a alocação funcionou
  if(newNode == nullptr) {
    std::cout << "Não foi possível alocar memória para o novo elemento.\n";
  }else {
    std::cout << "Informe o valor a ser inserido:";
    std::cin >> newNode->valor;
    newNode->prox = nullptr;
    
    //verifica se já havia um elemento na pilha 
    if(*pilha == nullptr){
      *pilha = newNode; // caso não, define o atual como o primeiro.
    } else {
      newNode->prox = *pilha; // se sim, define o atual como o proximo da pilha 
      *pilha = newNode; // e define a pilha com o valor da atual. 
    }
    std::cout << "Inserção realizada com sucesso!\n";
  }
}

void exibirElemento(Pilha *pilha){
  if(!pilhaVazia(pilha)){ // verifica se a pilha não está vazia 
    Node *nodeAux = *pilha;
    std::cout << "Topo:" << nodeAux->valor << ".\n";
  } 
}

void removerElemento(Pilha *pilha){
  if(!pilhaVazia(pilha)){ // verifica se há elementos na pilha 
    Node *nodeAux; // define uma pilha auxiliar e temporária
    *pilha = nodeAux->prox; // define o ponteiro da pilha atual com o endereço da próxima
    delete nodeAux; // deleta a pilha auxiliar
  }
}

void liberarPilha(Pilha *pilha){
  if(pilha != nullptr){
    Node *nodeAux;
    while((*pilha) != nullptr){ // enquanto houverem elementos 
      nodeAux = *pilha;
      *pilha = nodeAux->prox;
      delete nodeAux;
    }
    delete pilha;
  }
}
