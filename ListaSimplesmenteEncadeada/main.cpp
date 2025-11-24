#include <iostream>
#include "./header.h"

using namespace std;
  
int main(){
  List* lista = setup();
  
  char opc;

    cout << "Execução de lista dinâmica"
        "\nDigite i para inserir elementos.\n"
        "r para remover elementos.\n"
        "l para listar os elementos.\n"
        "s para sair do sistema.\n."
        " ----> ";
    cin >> opc; 

  int aux;
  do {
      switch(opc){
           case 'i':
              push(lista);
              break;
           case 'r':
               cout << "Digite um valor a ser removido:";
               cin >> aux;
               pull(lista, aux);
               aux = 0;
               break;
           case 'l':
               show(lista);
               break;
           case 's':
               break;
      }
  }
  while(opc != 's');

  return 0;
}
