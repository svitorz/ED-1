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
  if (list == nullptr) return true;

  return (list->start == nullptr);
}

bool push(List *list, int value)
{
  if (list == nullptr) return false;

  Node *newNode = new Node;

  if (newNode == nullptr) {
    cout << "Erro ao alocar novo espaço na memória" << endl;
    return false;
  }

  newNode->data = value;
  newNode->next = nullptr;
  newNode->prev = nullptr;
  
  if (isEmpty(list)) {
    list->start = newNode;
  } else {
    Node *current = list->start;
  
    while (current->next != nullptr) {
      current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
  }
  list->quantity += 1;
  return true;
}

bool pull(List *list, int value)
{
  if (isEmpty(list) || list == nullptr) {
    cout << "A lista está vazia.\n";
    return false;
  }

  Node *current = list->start;

  while (current->next != nullptr && current->data != value) {
    current = current->next;
  }

  if (current == nullptr) {
    std::cout << "Elemento inexistente.\n";
    return false;
  }

  if(current->prev != nullptr) {
    current->prev->next = current->next;
    delete current;
  } else {
     list->start = current->next;
  }

  if (current->next != nullptr) {
    current->next->prev = current->prev; 
  }

  delete current;
  list->quantity -= 1;
  cout << "Item encontrado e removido com sucesso!\n";
  return true;
}

bool find(List *list, int value)
{
  if (isEmpty(list) || list == nullptr) {
    return false;
  }

  Node *current = list->start;
  while(current->next != nullptr){
    if (current->data == value) {
      cout << current->data;
      return true;
    }
    current = current->next;
  }

  return false;
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
