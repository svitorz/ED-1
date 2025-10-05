#include "header.h"
#include <iostream> 

void createQueue(Queue* queue){
  queue->qtd = 0;
  queue->start = 0;
  queue->end = -1;
}

bool queueIsEmpty(Queue* queue){
  return queue->qtd == 0;
}

bool queueIsFull(Queue* queue){
  return queue->qtd == MAX;
}

void queuePush(Queue* queue){
  if (!queueIsFull(queue)) {
    if (queue->end == MAX) {
       queue->end = -1;
    } 
  
    queue->end++;
    std::cout << "Informe o elemento:";
    std::cin >> queue->value[queue->end];
    std::cout << endl;
    queue->qtd++;
  }
}

void queuePull(Queue* queue){
  if(!queueIsEmpty(queue)){
      queue->start++;
      queue->qtd--;
      if (queue->end == MAX){
        queue->start = 0;
      }

      if (queue->qtd == 0) {
        queue->start = 0;
        queue->end = -1;
      }
  }
}

void showElement(int element){
  std::cout << element;
}

void showQueue(Queue* queue){
  if(!queueIsEmpty(queue)){
     for (int i = 1; i <= queue->qtd; i++) {
        std::cout << queue->value[i];  
     }
  }
}
