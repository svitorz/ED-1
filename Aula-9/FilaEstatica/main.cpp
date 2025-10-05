#include "header.h" 
#include <iostream>

int main(){
  int opc;

  Queue* queue;
  do {
      std::cout << "Fila Estática.\n" 
                   "Informe a opção desejada.\n"
                   "1 - para inserir\n"
                   "2 - para exibir o primeiro\n"
                   "3 - para exibir o último\n"
                   "4 - para elementos da fila\n"
                   "5 - para remover\n"
                   "0 - para sair\n"
                   "---->";
      std::cin >> opc;
      switch (opc) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        default:
          std::cout << "Opção inválida.\n"; 
          break;
      }
      std::cout << "\n<--------------->\n";
  } while(opc != 0);

  return 0;
}
