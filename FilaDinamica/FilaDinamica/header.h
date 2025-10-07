#ifndef PILHA_DINAMICA
#define PILHA_DINAMICA

struct Node {
  int value;
  Node* next; 
};

struct Queue {
  Node* front;
  Node* rear;
};

Queue* setQueue();
bool isEmpty(Queue* queue);
bool insert(Queue* queue, int value);
void remove(Queue* queue);
void showElement(int x);
void show(Queue* queue);
void showFirst(Queue* queue);
void flush(Queue* queue);
int getTotalElement(Queue* queue);
void showInverse(Queue* queue);
void showLastElement(Queue* queue);
#endif // !PILHA_DINAMICA
