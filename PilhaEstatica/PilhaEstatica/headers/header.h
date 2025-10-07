#ifndef PILHA_ESTATICA_INCLUDED
#define PILHA_ESTATICA_INCLUDED
#define MAX 5

struct Pilha {
  int dados[MAX], qtd;
};

void criarPilha(Pilha *pilha);
void inserirItem(Pilha *pilha);
void exibirItem(Pilha *pilha);
void removerItem(Pilha *pilha);

#endif // !PILHA_ESTATICA_INCLUDED
