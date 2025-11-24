#include <iostream>
#include "./header.h"

using namespace std;

List* setup()
{
  List *list = new List;

  if(list == nullptr){
    cerr << "Erro ao alocar espaço na memória" << endl;
    exit(0);
  }

  list->start = nullptr;
  list->quantity = 0;

  return list;
}

bool isEmpty(List *list)
{
  if (list == nullptr) return false;

  return (list->start == nullptr);
}

bool push(List *list, int value)
{
  Node *newNode = new Node;

  if (newNode == nullptr) {
    cout << "Erro ao alocar novo espaço na memória" << endl;
    return false;
  }

  newNode->data = value;
  newNode->next = nullptr;
  
  if (isEmpty(list)) {
    newNode->prev = nullptr;
    list->start = newNode;
  } else {
    Node *current = list->start;
    Node *previous = nullptr;
  
    while (current->next != nullptr) {
      previous = current;
      current = current->next;
    }

    newNode->prev = current;
    current->next = newNode;
  }

  return true;
}

bool pull(List *list, int value)
{
  if (isEmpty(list)) {
    cout << "A lista está vazia.\n";
    return false;
  }

  Node *current = list->start;
  Node *previous = nullptr;

  while (current->next != nullptr && current->data != value) {
    previous = current;
    current = current->next;
  }

  if (current == nullptr) {
    std::cout << "Elemento inexistente.\n";
    return false;
  }

  if(current->prev == nullptr && current->next == nullptr) {
    list->quantity = 0;
    list->start = nullptr;
    delete current;

    cout << "Único elemento da lista removido. A lista agora está vazia.\n";
  }

  if (current == list->start) {
    list->start = current->next;
    (current->next)->prev = nullptr;
    delete current;
    cout << "Item removido.\n";
  }

  if (current->next != nullptr) {
    (current->prev)->next = current->next;
    (current->next)->prev = current->prev;
  } else {
    (current->prev)->next = nullptr;
  }
  delete current;
  list->quantity -= 1;
  cout << "Item encontrado e removido com sucesso!\n";
  return true;
}

bool find(List *list, int value)
{
  Node *current = list->start;

  if (isEmpty(list)) {
    return false;
  }

  while(current->next != nullptr && value != current->data){
    current = current->next;
  }

  return true;
}

void showAll(List *list)
{
  if (isEmpty(list)) {
    cout << "Lista vazia.";
    return;
  }

  Node *current = list->start;

  while(current->next != nullptr)
  {
    cout << current->data << " <-- ";
    current = current->next;
  }
}

void flush(List *list)
{
  if (list == nullptr) {
    cout << "Hello, World";
  }
}
