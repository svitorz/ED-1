# Pilhas — Descrição das imagens e exemplos

Imagens nesta pasta:

- pilha_estatica.png — diagrama de pilha implementada com array (tamanho fixo).
- pilha_dinamica.png — diagrama de pilha implementada com lista ligada (nós).

Conceito rápido

- Pilha (Stack): estrutura LIFO — o último elemento inserido é o primeiro a sair.
- Operações principais:
  - push(x): empilha x no topo.
  - pop(): desempilha e retorna o topo.
  - top()/peek(): retorna o topo sem remover.
  - isEmpty(): verifica se está vazia.
  - isFull(): (aplica-se à pilha estática) verifica se o array está cheio.

Pilha Estática (o que a imagem deve mostrar)

- Array contíguo + contador/top.
- Limite fixo (overflow quando cheio).
- Operações O(1).
- Exemplo do repositório (implementação e interface):
  - Header: PilhaEstatica/PilhaEstatica/headers/header.h
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/PilhaEstatica/PilhaEstatica/headers/header.h
  - Implementação: PilhaEstatica/PilhaEstatica/PilhaEstatica.cpp
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/PilhaEstatica/PilhaEstatica/PilhaEstatica.cpp
- Trecho ilustrativo adaptado:

```cpp
// conceito: array + contador (qtd/topo)
void criarPilha(Pilha *pilha){
  pilha->qtd = 0;
}
void inserirItem(Pilha *pilha){
  if (pilha->qtd < MAX) {
    std::cin >> pilha->dados[pilha->qtd];
    pilha->qtd++;
  } else {
    std::cout << "A pilha está cheia.\n";
  }
}
```

````

Pilha Dinâmica (o que a imagem deve mostrar)

- Nós encadeados; ponteiro para o topo.
- Crescimento dinâmico (apenas limitado pela memória).
- Operações O(1) para push/pop.
- Exemplos no repositório:
  - Header: PilhaDinamica/MinhaImplementacao/header.h
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/PilhaDinamica/MinhaImplementacao/header.h
  - Implementação: PilhaDinamica/MinhaImplementacao/PilhaDinamica.cpp
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/PilhaDinamica/MinhaImplementacao/PilhaDinamica.cpp
  - Programa de exemplo: PilhaDinamica/MinhaImplementacao/main.cpp
    - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/PilhaDinamica/MinhaImplementacao/main.cpp
- Trecho ilustrativo adaptado:

```cpp
// nó e push/pop
Stack* node = new (std::nothrow) Stack;
if (node == nullptr) return false;
node->value = value;
node->next = *stack;
*stack = node;
```

Pontos a anotar nas legendas das imagens

- Mostrar claramente o ponteiro/topo na pilha estática (índice qnt) e na dinâmica (ponteiro para primeiro nó).
- Indicar overflow (pilha estática) e underflow (ambas).
- Complexidade das operações (push/pop/top: O(1)).

Referências no repositório (para leitura)

- Pilha estática: PilhaEstatica/PilhaEstatica/headers/header.h
  - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/PilhaEstatica/PilhaEstatica/headers/header.h
- Pilha dinâmica (minha implementacao): PilhaDinamica/MinhaImplementacao/PilhaDinamica.cpp
  - https://github.com/svitorz/ED-1/blob/e96f17b691f5c7e5d49feda07e8130bb6f033c9f/PilhaDinamica/MinhaImplementacao/PilhaDinamica.cpp

```
````
