#include <iostream>
#include "./header.h"

using namespace std;

int main(){
  List* lista = setup();

  char opc = '\0';
  int aux = 0;

  do {
    cout << "Execução de lista dinâmica\n"
              << "Digite\ni para inserir elementos.\n"
              << "r para remover elementos.\n"
              << "l para listar os elementos.\n"
              << "s para sair do sistema.\n"
              << "----> ";
    cin >> opc;

    switch(opc){
         case 'i':
            cout << "Digite um valor a ser inserido: ";
            if (cin >> aux) {
                if (!push(lista, aux)) {
                    cerr << "Falha ao inserir o elemento.\n";
                }
            } else {
                cerr << "Entrada inválida.\n";
                cin.clear();
            }
            break;
         case 'r':
             std::cout << "Digite um valor a ser removido: ";
             if (std::cin >> aux) {
                 if (!pull(lista, aux)) {
                     cerr << "Falha ao remover (valor não encontrado ou erro).\n";
                 }
             } else {
                 cerr << "Entrada inválida.\n";
                 cin.clear();
             }
             break;
         case 'l':
             show(lista);
             break;
         case 's':
             break;
         default:
             cout << "Opção inválida.\n";
    }
  } while(opc != 's');

  kill(lista);
  return 0;
}
