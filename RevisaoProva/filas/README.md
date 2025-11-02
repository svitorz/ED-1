````markdown
# Filas — Descrição das imagens e exemplos

Imagens nesta pasta:

- fila_estatica.png — diagrama de fila com buffer circular (array).
- fila_dinamica.png — diagrama de fila com lista ligada (front/rear).

Conceito rápido

- Fila (Queue): estrutura FIFO — o primeiro elemento inserido é o primeiro a sair.
- Operações principais:
  - enqueue(x) / insert(x): adiciona no fim (rear).
  - dequeue() / remove(): remove da frente (front).
  - front()/peek(): consulta o elemento da frente.
  - isEmpty(), isFull() (para implementação estática).

Fila Estática (o que a imagem deve mostrar)

- Array + índices start e end + contador (qtd) — uso circular.
- Estratégia para detectar cheio/vazio: contador (qtd) ou deixar uma posição livre.
- Operações O(1).
- Exemplos no repositório:
  - Header: FilaEstatica/src/header.h
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/FilaEstatica/src/header.h
  - Implementação: FilaEstatica/src/FilaEstatica.cpp
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/FilaEstatica/src/FilaEstatica.cpp
- Trecho ilustrativo adaptado:

```cpp
// enqueue usando buffer circular
A[tail] = x;
tail = (tail + 1) % N;
++count;

// dequeue
x = A[head];
head = (head + 1) % N;
--count;
```
````

Fila Dinâmica (o que a imagem deve mostrar)

- Nós encadeados com ponteiros front (frente) e rear (fim).
- Enfileira-se no rear, desenfileira-se no front.
- Cresce dinamicamente; O(1) para enqueue/dequeue.
- Exemplos no repositório:
  - Header: FilaDinamica/src/header.h
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/FilaDinamica/src/header.h
  - Implementação: FilaDinamica/src/FilaDinamica.cpp
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/FilaDinamica/src/FilaDinamica.cpp
- Trecho ilustrativo adaptado:

```cpp
Node* newNode = new (std::nothrow) Node;
newNode->value = value;
newNode->next = nullptr;
if (isEmpty(queue)) queue->front = newNode;
else queue->rear->next = newNode;
queue->rear = newNode;
```

Pontos a anotar nas legendas das imagens

- No buffer circular, desenhe claramente o wrap-around e os índices start/end (ou conte qtd).
- Na fila dinâmica, destaque front e rear e mostre o fluxo de inserção / remoção.
- Indicar underflow (fila vazia) e que overflow só ocorre por falta de memória na versão dinâmica.

Referências no repositório (para leitura)

- Fila estática: FilaEstatica/src/FilaEstatica.cpp
  - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/FilaEstatica/src/FilaEstatica.cpp
- Fila dinâmica: FilaDinamica/src/FilaDinamica.cpp
  - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/FilaDinamica/src/FilaDinamica.cpp

```

```
