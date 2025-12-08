#include <iostream>
#include "listaDupla.h"

using namespace std;
char menuInicial();
char menuSaida();

int main(){
    char menu;
    int inf;
    Lista* lista = criarLista();
    do{
        menu=menuInicial();
        switch(menu){
        case '1':
            cout << "Informe o elemento a ser inserido na lista: ";
            cin >> inf;
            inserirElementoListaDupla(lista, inf);
            break;
        case '2':
            cout << "Informe o elemento a ser removido da lista: ";
            cin >> inf;
            removerElementoListaDupla(lista, inf);
            break;
       case '3':
            exibirElementosListaDupla(lista);
            break;
        case '4':
           // verificar se um determinado elemento está na lista
            consultarElementoListaDupla(lista,inf);
            break;
        case '5':
           // verificar a quantidade de elementos pares na lista. 
            cout << "Há " << contarElementosPares(lista) << " elementos pares na lista.\n";
            break;
        case '6':
          exibirElementosEQuantidadeDeNPares(lista);
          break;
        case 'S': cout <<"Saindo do programa!\n"; break;
        default: cout<< "Opção inválida!";
        }
        cout<<"\n-------------------\n\n";
    }while(menu!='S');
    excluirListaDupla(lista);
    return 0;
}
char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir um elemento na lista ordenada dupla\n"
            "2 - para remover um elemento da lista ordenada dupla\n"
            "3 - exibir elementos cadastrados\n"
            "4 - verificar se uma informação está na lista dupla.\n"
            "5 - verificar a quantidade de numeros pares na lista dupla.\n"
            "6 - exbibir elementos e verificar a quantidade de numeros pares na lista dupla.\n"
            "S - sair do menu.\n"
            "--> ";
    fflush(stdin);
    cin>>menu;
    menu = toupper(menu);
    return menu;
}
