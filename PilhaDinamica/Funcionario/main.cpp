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
  int opt;
  Funcionario fun;

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
        std::cout << "Insira o nome do funcionário:";
        std::cin >> fun.nome;
        std::cout << "Insira o cargo do funcionário:";
        std::cin >> fun.cargo;
        std::cout << "Insira o salario do funcionário:";
        std::cin >> fun.salario;
        if(stackPush(&stack, fun)){
          std::cout << "Valor inserido com sucesso!\n";
        } else {
          std::cout << "Erro ao inserir valor.\n";
        }
        break;
      case 2:
        if (showActualValue(&stack, &fun)) {
          std::cout << "O valor no topo da pilha é " << fun.nome << std::endl
           << fun.cargo << std::endl
           << fun.salario << std::endl;
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
