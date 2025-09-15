#include <iostream>
#include <cctype>
#define SIZE 5
using namespace std;

struct Produto {
    int cod, valor;
    char categoria;
};

void buscarValores(Produto *produto) {
    for(int i = 0; i < SIZE; i++){
        produto[i].cod = i;
        cout << endl;
        cout << "Insira o valor do produto " << i+1 << ":";
        cin >> produto[i].valor;
        cout << endl;
        do {
            cout << "Insira a categoria do produto " << i+1 << "(A ou B):";
            cin >> produto[i].categoria;
            cout << endl;
            produto[i].categoria = toupper(produto[i].categoria);
        }while((produto[i].categoria != 'A') && (produto[i].categoria != 'B'));
    }
}

void exibirValores(Produto *produto, int *lowerPriceId) {
    cout << endl;
    int lowerPrice = 1000000;
    for(int i = 0; i < SIZE; i++){
        cout << "Código do produto " << i+1 << ":";
        cout << produto[i].cod;
        cout << endl;
        cout << "Valor do produto " << i+1 << ":";
        cout << produto[i].valor;
        cout << endl;
        cout << "Categoria do produto " << i+1 << "(A ou B):";
        cout << produto[i].categoria;
        cout << endl;
        if(lowerPrice > produto[i].valor){
            lowerPrice = produto[i].valor;
            *lowerPriceId = produto[i].cod;
        }
    }
    cout << endl;
}

void exibirMenorValor(Produto *produto, int lowerPriceId){
    cout << "Exibindo produto com menor valor:" << endl;
    cout << "Código do produto " << lowerPriceId << ":";
    cout << produto[lowerPriceId].cod;
    cout << endl;
    cout << "Valor do produto " << lowerPriceId << ":";
    cout << produto[lowerPriceId].valor;
    cout << endl;
    cout << "Categoria do produto " << lowerPriceId << "(A ou B):";
    cout << produto[lowerPriceId].categoria;
    cout << endl;
}

int main()
{
    int lowerPriceId;
    Produto *produto = new (nothrow) Produto[SIZE];
    buscarValores(produto);
    exibirValores(produto, &lowerPriceId);
    cout << endl;
    exibirMenorValor(produto, lowerPriceId);
    delete[] produto;
    return 0;
}
