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
        std::cout << "Error! No memory space.";
        exit(0);
    }
    //define a lista como vazia
    list->head = nullptr;
    list->quantity = 0;

    return list;
}

bool isListEmpty(List* list)
{
    //verifica se o inicio da lista é nulo (vazio)
    return (list->head==nullptr);
}

bool push(List* list)
{
    int value;
    std::cout << "Digite um valor a ser inserido: ";
    std::cin >> value;

    // Cria um novo nó 
    Node *node = new (std::nothrow) Node;

    if(node == nullptr){
        std::cout << "Não há espaço na memória."; 
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
        Node *noAnt, *noAux = list->head; 

        /**
         * enquanto o noAux for diferente de nulo (final da lista)
         * e o valor a ser inserido for menor que o proximo
         */
        while (noAux != nullptr && node->value > noAux->value) {
            // define o no anterior como o nó auxiliar.
            noAnt = noAux;
            // define o auxiliar como o proximo do auxiliar, para percorrer a lista 
            noAux = noAux->next;
        }
        if (noAux==list->head) {
            node->next = noAux;
            list->head = node;
        } else {
            noAnt->next=node;
            node->next=noAux;
        }
    }


    list->quantity += 1;
}

void pull(List* list, int value)
{
    cout << "teste";
    if(isListEmpty(list)){
        Node *noAnt, *noAux = list->head;

        /**
         * Percorre os dados até encontrar um numero maior que o valor a ser removido
         * ou até chegar ao fim da lista.
         */
        while(noAux != nullptr && value > noAux->value)
        {
            noAnt = noAux;
            noAux = noAux->next;
        }

        if (noAux->value == value){
            if(noAux == list->head) 
                list->head = noAux->next;
            else
                noAnt->next = noAux->next;
            delete noAux;
            list->quantity--;
        } else {
            std::cout << "Elemento não está na lista.";
        }
    }
}


void show(List* list) 
{ 
    if(isListEmpty(list)){
        Node *noAux = list->head;
        while(noAux != nullptr){
            cout << " --> ";
            noAux = noAux->next;
        }
    }
}

void kill(List* list) 
{ 
     Node *noAux = list->head;

     while(noAux != nullptr) {
        list->head = noAux->next;
        delete noAux;
        noAux = list->head;
     }
     delete list;
}
