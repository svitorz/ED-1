#include "header.h"
#include <iostream>

Queue* setQueue() {
    Queue* queue = new (std::nothrow) Queue;

    if(queue == nullptr) {
        std::cout << "Erro ao alocar memória!\n";
        exit(0);
    }

    queue->front = nullptr;
    queue->rear = nullptr;
    return queue;
}

bool isEmpty(Queue* queue) {
    return (queue->front == nullptr);
}

bool insert(Queue* queue, int value) {
    Node* newNode = new (std::nothrow) Node;
    
    if(newNode == nullptr) {
      std::cout << "Erro ao alocar memória!\n";
      return false;
    }

    newNode->value = value;
    newNode->next = nullptr;

    if(isEmpty(queue)) {
        queue->front = newNode;
    } else {
        queue->rear->next = newNode;
    }
    queue->rear = newNode;
  
    return true;
}

void remove(Queue* queue){
  if (!isEmpty(queue)) {
    Node *auxNode;
    auxNode = queue->front;
    queue->front = queue->front->next;
    if (queue->front == nullptr) {
      queue->rear = nullptr;
    }

    delete auxNode;
  }
}

void showElement(int x){
  std::cout << x << " ";
}

void show(Queue* queue){
  if (!isEmpty(queue)) {
    Node *auxNode = queue->front;
    while (auxNode != nullptr) {
      showElement(auxNode->value);
      auxNode = auxNode->next;
    }
  } else {
    std::cout << "Fila vazia!\n";
  }
}

void showFirst(Queue* queue){
  if (!isEmpty(queue)) {
    showElement(queue->front->value);
  } else {
    std::cout << "Fila vazia!\n";
  }
}

void flush(Queue* queue) {
  Node* auxNode;
  while (!isEmpty(queue)) {
    auxNode = queue->front;
    queue->front = queue->front->next;
    delete auxNode;
  }
}
