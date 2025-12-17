#ifndef LISTA_DUPLAMENTE_ENCADEADA_H_INCLUDED
#define LISTA_DUPLAMENTE_ENCADEADA_H_INCLUDED

struct Node {
  int data;
  Node *next, *prev;
};

struct List {
  Node *start;
  int quantity;
};

List* setup(); //implemented
bool isEmpty(List *list); // implemented
void flush(List *list);
bool push(List *list, int value); // implemented
bool pull(List *list, int value); // implemented
bool find(List *list, int value);
void showAll(List *list); // implemented


#endif LISTA_DUPLAMENTE_ENCADEADA_H_INCLUDED
