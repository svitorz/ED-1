#ifndef PESSOA_INCLUDED
#define PESSOA_INCLUDED
#define MAX 5
#include <iostream>

using namespace std; 

struct Pessoa {
  string nome;
  int idade;
};

struct Pilha {
  Pessoa pessoa[MAX];
  int topo;
};

void criarPilha(Pilha *pilha);
void inserirPessoa(Pilha *pilha);
void exibirPessoa(Pilha *pilha);
void removerPessoa(Pilha *pilha);

#endif // !PESSOA_INCLUDED
