#include "./header.h"
#include <iostream>


using namespace std;


/*
 * Cria uma nova lista e define os valores iniciais.
 **/
List* setup()
{
    List *list = new (std::nothrow) List;

    if(list == nullptr){
        std::cerr << "Error! No memory space.";
        std::exit(EXIT_FAILURE);
    }
    //define a lista como vazia
    list->head = nullptr;
    list->quantity = 0;

    return list;
}

bool isListEmpty(const List* list)
{
  if (list == nullptr) return true;

  //verifica se o inicio da lista é nulo (vazio)
  return (list->head==nullptr);
}

bool push(List* list, int value)
{
    if (list == nullptr) return false;
    
    // Cria um novo nó 
    Node *node = new (std::nothrow) Node;

    if(node == nullptr){
        std::cerr << "Não há espaço na memória."; 
        return false;
    }

    node->value = value;
    node->next = nullptr;

    if(isListEmpty(list))
    {
        // se a lista estiver vazia, define o nó como o inicio da lista
        list->head = node; 
    } else {
        //senao, procura o lugar correto para inserir
        // cria dois nós auxiliares
        Node *prev = nullptr;
        Node *current = list->head; 

        /**
         * enquanto o noAux for diferente de nulo (final da lista)
         * e o valor a ser inserido for menor que o proximo
         */
        while (current != nullptr && current->value < value) {
            // define o no anterior como o nó auxiliar.
            prev = current;
            // define o auxiliar como o proximo do auxiliar, para percorrer a lista 
            current = current->next;
        }

        if (prev == nullptr) {
            node->next = list->head;
            list->head = node;
        } else {
            prev->next = node;
            node->next = current;
        }
    }


    list->quantity += 1;
    return true;
}

bool pull(List* list, int value)
{
    if (list == nullptr) return false;

    if(isListEmpty(list)) {
        std::cout << "A lista está vazia.";
        return false;
    }

    Node *prev = nullptr;
    Node *current = list->head;

    /**
      * Percorre os dados até encontrar um numero maior que o valor a ser removido
      * ou até chegar ao fim da lista.
      */
    while(current != nullptr && current->value < value)
    {
        prev = current;
        current = current->next;
    }
    
    if(prev == nullptr) {
        //remover o primeiro nó
        list->head = current->next;
    } else {
        //remover nó do meio ou final
        prev->next = current->next;
    }

    list->quantity -= 1;
    delete current;
    return true;
}

void show(const List* list)
{
    if (list == nullptr) {
        std::cout << "Lista inválida.\n";
        return;
    }

    if (isListEmpty(list)) {
        std::cout << "Lista vazia.\n";
        return;
    }

    Node *noAux = list->head;
    while(noAux != nullptr){
        std::cout << noAux->value;
        if (noAux->next != nullptr) std::cout << " -> ";
        noAux = noAux->next;
    }
    std::cout << '\n';
}

void kill(List* list)
{
     if (list == nullptr) return;

     Node *noAux = list->head;

     while(noAux != nullptr) {
        list->head = noAux->next;
        delete noAux;
        noAux = list->head;
     }
     delete list;
}
