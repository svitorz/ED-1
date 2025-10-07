#include "header.h"
#include <iostream>

int main() {
    Queue queue;
    createQueue(&queue);

    int opc = -1;
    while (opc != 0) {
        std::cout << "Fila Estática.\n"
                  << "Informe a opção desejada.\n"
                  << "1 - Inserir\n"
                  << "2 - Exibir o primeiro\n"
                  << "3 - Exibir o último\n"
                  << "4 - Exibir apenas os valores maiores que 0\n"
                  << "5 - Listar fila\n"
                  << "6 - Remover\n"
                  << "0 - Sair\n"
                  << "---->";
        std::cin >> opc;

        switch (opc) {
            case 0:
                std::cout << "Saindo...\n";
                break;
            case 1:
                queuePush(&queue);
                break;
            case 2:
                if (!queueIsEmpty(&queue))
                    showElement(queue.value[queue.start]);
                else
                    std::cout << "Fila vazia!\n";
                std::cout << std::endl;
                break;
            case 3:
                if (!queueIsEmpty(&queue))
                    showElement(queue.value[(queue.end - 1 + MAX) % MAX]);
                else
                    std::cout << "Fila vazia!\n";
                std::cout << std::endl;
                break;
            case 4:
                showQueueHigherThanZero(&queue);
                break;
            case 5:
                showQueue(&queue);
                break;
            case 6:
                queuePull(&queue);
                break;
            default:
                std::cout << "Opção inválida.\n";
                break;
        }
        std::cout << "<--------------->\n";
    }
    return 0;
}
