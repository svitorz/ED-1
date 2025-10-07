#include "./headers/header.h"

void preencherCadastro(Jogador *cad, int size){
  std::cout << "\nRealizando cadastro de jogadores.\n";
  for (int i = 0; i < size; i++) {
    std::cout << "Cadastro do " << (i + 1) <<  " jogador:" << endl; 
    std::cout << "\nNome:";
    std::cin >> cad[i].nome;
    std::cout << "\nPosição:";
    std::cin >> cad[i].pos;
    do {
      std::cout << "\nQuantidade de jogos:";
      std::cin >> cad[i].qtdJogos;
    } while(cad[i].qtdGols < 0);
    std::cin.ignore();
    if (cad[i].qtdJogos > 0){
      do {
        std::cout << "\nQuantidade de gols marcados:";
        std::cin >> cad[i].qtdGols;
      } while(cad[i].qtdGols < 0);
      std::cin.ignore();
    }
  }
}

void exibirCadastro(Jogador *cad, int size){
  for (int i = 0; i < size; i++) {
    std::cout << "\nCadastro do " << (i + 1) <<  " jogador:" << endl; 
    std::cout << "\nNome:" << cad[i].nome << endl;
    std::cout << "\nPosição:" << cad[i].pos << endl;
    std::cout << "\nQuantidade de jogos:" << cad[i].qtdJogos << endl;
    std::cout << "\nQuantidade de gols marcados:" << cad[i].qtdGols << endl;
  }
}

void totalGols(Jogador *cad, int size){
  int totalGols = 0;
  for (int i = 0; i < size; i++) {
    totalGols += cad[i].qtdGols; 
  }
  std::cout << "O total de gols do time foi " << totalGols << endl;
}
