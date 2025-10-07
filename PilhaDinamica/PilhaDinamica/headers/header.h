#ifndef PILHAESTATICA_INCLUDED
#define PILHAESTATICA_INCLUDED

struct PILHA {
  int valor;
  PILHA *prox;
};

typedef struct PILHA *Pilha;
typedef struct PILHA Node;

Pilha* criarPilha();
bool pilhaVazia(Pilha *pilha);
void inserirElemento(Pilha *pilha);
void exibirElemento(Pilha *pilha);
void removerElemento(Pilha *pilha);
void liberarPilha(Pilha *pilha);
#endif // !IF_PILHAESTATICA_INCLUDED
