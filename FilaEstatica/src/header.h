#ifndef FILA_ESTATICA
#define FILA_ESTATICA

#define MAX 5
struct Queue {
  int value[MAX], qtd, start, end;
};

void createQueue(Queue* queue);
bool queueIsFull(Queue* queue);
bool queueIsEmpty(Queue* queue);
void queuePush(Queue* queue);
void queuePull(Queue* queue);
void showElement(int element);
void showQueue(Queue* queue);
void showQueueHigherThanZero(Queue* queue);

#endif // FILA_ESTATICA
