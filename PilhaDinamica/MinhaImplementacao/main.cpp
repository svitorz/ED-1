#include <iostream>
#include "header.h"

/**
 * Minha implementacao de pilha dinamica
 * */
int main(){
  /**
   * A pilha pode ser definida com o valor de nullptr, 
   * pois é o que representa o inicio da pilha
   * */
  Stack *stack = nullptr;
  int opt, value;

  do {
    std::cout << "MINHA IMPLEMENTACAO DE PILHA.\n"
                "Digite 1 para inserir um elemento:\n" 
                "Digite 2 para exibir o topo:\n" 
                "Digite 3 para remover um elemento:\n"
                "Digite 0 para sair.\n"
                "---> ";
    std::cin >> opt;


    switch (opt) {
      case 1:
        std::cout << "Digite um valor a ser inserido:";
        std::cin >> value;
        if(stackPush(&stack, value)){
          std::cout << "Valor inserido com sucesso!\n";
        } else {
          std::cout << "Erro ao inserir valor.\n";
        }
        break;
      case 2:
        if (showActualValue(&stack, &value)) {
          std::cout << "O valor no topo da pilha é " << value << std::endl;
        } else {
          std::cout << "A pilha está vazia.\n";
        }
        break;
      case 3:
        if(stackPull(&stack)){
          std::cout << "Valor removido com sucesso!\n";
        } else {
          std::cout << "Erro ao remover elemento.\n";
        }
        break;
      case 0:
        break;
      default:
        std::cout << "Opção inválida."; 
        break;
    }
  } while(opt != 0);

  std::cout << "Fim da execução.\n";
  destructStack(&stack);
  return 0;
}
