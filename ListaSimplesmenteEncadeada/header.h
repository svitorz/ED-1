#ifndef LISTA_SIMPLESMENTE_ENCADEADA_INCLUDED
#define LISTA_SIMPLESMENTE_ENCADEADA_INCLUDED

struct Node {
    int value;
    Node* next;
};

struct List {
  Node* head;
  int quantity;
};

List* setup();
bool isListEmpty(List* list);
void pull(List* list, int value);
bool push(List* list);
void show(List* list);
void kill(List* list); 
#endif // !LISTA_SIMPLESMENTE_ENCADEADA_INCLUDED
