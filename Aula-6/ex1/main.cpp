#include <iostream>
#include "headers/ExemploTAD.h"

using namespace std;

int main(){
  int opcao;
  float raio, volume, area;
  do {
    std::cout << "\nCálculo ESFERA.\n";
    cout << "Insira: 1 para calcular a área - 2 para exibir o volume - 0 para encerrar a execução";
    std::cin >> opcao;

    switch (opcao) {
      case 1:
        recebeRaio(&raio);
        calculaArea(&raio, &area);
        std::cout << "Resultado da área:\n";
        exibeResultado(&area);
        break;
      case 2:
        recebeRaio(&raio);
        calculaVolume(&raio, &volume);
        std::cout << "Resultado do volume:\n";
        exibeResultado(&volume);
        break;
      default:
        std::cout << "Opção inválida."; 
        break;
    }
  } while(opcao != 0);
  return 0;
}
