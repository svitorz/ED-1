#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std; 

struct Jogador {
  string nome, pos;
  int qtdJogos = 0, qtdGols = 0;
};

void preencherCadastro(Jogador *cad, int size);
void exibirCadastro(Jogador *cad, int size);
void totalGols(Jogador *cad, int size);

#endif // !HEADER_H
