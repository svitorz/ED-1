#include "./headers/header.h"
#define SIZE 7

int main(){
  Jogador *jogador = new Jogador[SIZE];
  
  preencherCadastro(jogador, SIZE);
  exibirCadastro(jogador, SIZE);
  totalGols(jogador, SIZE);  

  delete [] jogador;
  return 0;
}
