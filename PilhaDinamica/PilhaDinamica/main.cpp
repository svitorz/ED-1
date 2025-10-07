#include "./headers/header.h" 
#include <iostream>
#include <cctype>

using namespace std;

int main () {
  int opc;
  Pilha *pilha = criarPilha();
  do {
    std::cout <<  "Informe a opção desejada:\n"
                  "1 - Inserir um elemento na pilha.\n"     
                  "2 - Exibir o topo da pilha.\n"     
                  "3 - Remover topo da pilha.\n"     
                  "0 - Inserir um elemento na pilha.\n"     
                  "---> ";
    std::cin >> opc;
  
    switch (opc) {
      case 1:
        std::cout << "Inserir elemento da pilha\n.";
        inserirElemento(pilha);
        break;
      case 2:
        std::cout << "Exibir último elemento da pilha\n.";
        exibirElemento(pilha);
        break;
      case 3:
        std::cout << "Remover elemento.\n"; 
        removerElemento(pilha);
        break;
      case 0:
        std::cout << "Finalizar execução.\n"; 
        break;
      default:
        std::cout << "Opção inválida\n";
        break;
    }
  } while(opc != 0);
  liberarPilha(pilha);
  return 0;
}
