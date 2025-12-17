#include <iostream>
#include "./header.h"   
#include <cctype>

using namespace std;

int main() 
{
  List *list = setup();
  char opc;
  int value = 0; 
  do {
    cout << "Implementação de Lista Duplamente Encadeada\nDigite:\n"
            "i para inserir elementos\n"
            "r para remover elementos\n"
            "l para listar elementos\n"
            "f para verificar se um elemento está na lista.\n"
            "s para sair\n"
            "------------>";
    cin >> opc;
    opc = tolower(opc);
   
    switch (opc) {
      case 'i':
        cout << "Digite um valor para ser inserido:";
        cin >> value;
        cout << endl;
        if (push(list, value)) {
          cout << "Novo valor inserido com sucesso!\n";  
        } else {
          cout << "Erro ao inserir novo valor.\n";  
        }
        break;
      case 'r':
        cout << "Digite um valor para ser removido:";
        cin >> value;
        cout << endl;
        pull(list, value);
        break;
      case 'l': 
        showAll(list);
        break;
      case 'f':
        cout << "Digite um valor para verificar se está presente na lista:";
        cin >> value;
        cout << endl;
        if (find(list, value)) {
          cout << "Valor encontrado na lista.\n";
        } else {
            cout << "Valor não encontrado na lista.\n";
        }
        break;
      case 's':
        cout << "Saindo.";
        break;
      default:
        cout << "Opção inválida.\n";
        break;
    }

    value = 0;
  } while(opc != 's');

  flush(list);
}
