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
bool isListEmpty(const List* list);
bool pull(List* list, int value);
bool push(List* list, int value);
void show(const List* list);
void kill(List* list); 
#endif // !LISTA_SIMPLESMENTE_ENCADEADA_INCLUDED
