#include "header.h"
#include <iostream>

using namespace std;

int main(){
  int opc, value;

  Queue* queue = setQueue();

  do {
    std::cout << "Filas dinâmicas.\n"
      "1 - Inserir item\n" 
      "2 - Remover item\n"
      "3 - Mostrar fila\n"
      "0 - Sair\n";
    std::cin >> opc;
    switch(opc){
      case 1:
        std::cout << "Digite o valor a ser inserido:";
        std::cin >> value;
        insert(queue, value);
        break;
      case 2:
        remove(queue);
        break;
      case 3:
        show(queue);
        break;
      case 0:
        std::cout << "Saindo...\n";
        break;
      default:
        std::cout << "Opção inválida!\n";
        break;
    }
  } while(opc != 0);


  flush(queue);
  return 0;
}
