#ifndef PILHA_DINAMICA
#define PILHA_DINAMICA

struct Node {
  int value;
  Node* next; 
};

struct Queue {
  Node* front;
  Node* rear;
  int size;
};

Queue* setQueue();
bool isEmpty(Queue* queue);
bool insert(Queue* queue, int value);
void remove(Queue* queue);
void showElement(int x);
void show(Queue* queue);
void showFirst(Queue* queue);
void flush(Queue* queue);
#endif // !PILHA_DINAMICA
