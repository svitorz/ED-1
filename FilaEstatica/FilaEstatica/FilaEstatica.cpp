#include "header.h"
#include <iostream>

void createQueue(Queue* queue){
    queue->qtd = 0;
    queue->start = 0;
    queue->end = 0;
}

bool queueIsEmpty(Queue* queue){
    return queue->qtd == 0;
}

bool queueIsFull(Queue* queue){
    return queue->qtd == MAX;
}

void queuePush(Queue* queue){
    if (!queueIsFull(queue)) {
        std::cout << "Informe o elemento:";
        std::cin >> queue->value[queue->end];
        queue->end = (queue->end + 1) % MAX;
        queue->qtd++;
    } else {
        std::cout << "Fila cheia!\n";
    }
}

void queuePull(Queue* queue){
    if(!queueIsEmpty(queue)){
        queue->start = (queue->start + 1) % MAX;
        queue->qtd--;
    } else {
        std::cout << "Fila vazia!\n";
    }
}

void showElement(int element){
    std::cout << element << std::endl;
}

void showQueue(Queue* queue){
    if(!queueIsEmpty(queue)){
        int idx = queue->start;
        for (int i = 0; i < queue->qtd; i++) {
            std::cout << queue->value[idx] << " ";
            idx = (idx + 1) % MAX;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Fila vazia!\n";
    }
}

void showQueueHigherThanZero(Queue* queue){
    if(!queueIsEmpty(queue)){
        int idx = queue->start;
        bool found = false;
        for (int i = 0; i < queue->qtd; i++) {
            if(queue->value[idx] > 0){
                showElement(queue->value[idx]);
                found = true;
            }
            idx = (idx + 1) % MAX;
        }
        if(!found){
            std::cout << "Nenhum elemento maior que zero!\n";
        }
    } else {
        std::cout << "Fila vazia!\n";
    }
}
