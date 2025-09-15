#include <iostream>

using namespace std;

void preencheVetor(int *vetor, int n);
void exibeVetor(int *vetor, int n);
void calculaTotalPar(int *vetor, int n, int *totalPar);

int main()
{
    int n = 0, totalPar = 0;
    cout << "\nInsira o tamanho do vetor:";
    cin >> n;
    cout << endl;
    int vetor[n];
    preencheVetor(vetor, n);
    exibeVetor(vetor, n);
    calculaTotalPar(vetor, n, &totalPar);
    cout << "Quantidade total de números pares digitados: " << totalPar << endl;
    return 0;
}

void preencheVetor(int *vetor, int n) {
    for(int i = 0; i < n; i++){
        cout << "Insira um valor para vetor[" << i << "]=";
        cin >> vetor[i];
        cout << endl;
    }
}

void exibeVetor(int *vetor, int n) {
    cout << "Exibindo vetor:" << endl;
    for(int i = 0; i < n; i++){
        cout << "vetor[" << i << "]=" <<vetor[i];
        cout << endl;
    }
}

void calculaTotalPar(int *vetor, int n, int *totalPar) {
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            *totalPar += 1;
        }
    }
}


