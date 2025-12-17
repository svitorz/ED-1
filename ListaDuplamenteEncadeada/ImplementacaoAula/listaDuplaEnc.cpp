
#include <iostream>
#include "listaDupla.h"

using namespace std;

Lista* criarLista(){
    Lista *lista = new (std::nothrow) Lista;
    if(lista==nullptr){
        cout << "Erro na alocação de memória da lista!\n";
        exit(0);
    }
    lista->inicioLista=nullptr;
    lista->qtd=0;
    return lista;
}

int listaEhVazia(Lista *lista){
    if(lista->inicioLista==nullptr){
        cout <<"Lista está vazia!!\n";
        return 0;
    }
    return 1;
}

void inserirElementoListaDupla(Lista* lista, int inf){
    No *novoNo = new (std::nothrow) No;
    if(novoNo==nullptr) {
        cout << "Erro de alocação! Não há espaço para o novoNo!\n";
        return;
    }

    novoNo->info = inf;
    novoNo->ant = nullptr;
    novoNo->prox = nullptr;

    if(lista->inicioLista == nullptr){
        // empty list -> new node becomes first
        lista->inicioLista = novoNo;
    } else {
        No *aux = lista->inicioLista;
        No *prev = nullptr;
        while(aux != nullptr && inf > aux->info){
            prev = aux;
            aux = aux->prox;
        }

        if(prev == nullptr){
            // insert at head (before aux which is current head)
            novoNo->prox = lista->inicioLista;
            lista->inicioLista->ant = novoNo;
            lista->inicioLista = novoNo;
        } else if(aux == nullptr){
            // insert at tail (after prev)
            prev->prox = novoNo;
            novoNo->ant = prev;
            novoNo->prox = nullptr;
        } else {
            // insert between prev and aux
            novoNo->ant = prev;
            novoNo->prox = aux;
            prev->prox = novoNo;
            aux->ant = novoNo;
        }
    }

    lista->qtd++;
}

void removerElementoListaDupla(Lista *lista, int inf){
    if(listaEhVazia(lista)!=0){
        No *aux = lista->inicioLista;

        while(aux!=nullptr && inf > aux->info){
            aux=aux->prox;
        }
        if(aux==nullptr || inf!=aux->info){
            cout<<"Elemento não está presente na lista!\n";
        }
        else{ // element found in the list
            if(aux == lista->inicioLista){
                // removing head
                lista->inicioLista = aux->prox;
                if(lista->inicioLista != nullptr){
                    lista->inicioLista->ant = nullptr;
                }
            } else {
                // removing middle or tail
                aux->ant->prox = aux->prox;
                if(aux->prox != nullptr){
                    aux->prox->ant = aux->ant;
                }
            }
            cout << "Elemento " << aux->info << " removido com sucesso!\n";
            delete aux;
            lista->qtd--;
        }
    }
}

void consultarElementoListaDupla(Lista *lista, int inf){
    if(listaEhVazia(lista)!=0){
        No *aux = lista->inicioLista;

        while(aux!=nullptr && inf > aux->info)
            aux=aux->prox;

        if(aux==nullptr || inf!=aux->info)
            cout<<"Elemento não está presente na lista!\n";
        else
            cout <<"Elemento " << aux->info << " encontrado com sucesso!\n";
    }
}

void exibirElementosListaDupla(Lista *lista){
    if(listaEhVazia(lista)!=0){
        No *aux = lista->inicioLista;

        while(aux!=nullptr){
            cout << aux->info << " -> ";
            aux=aux->prox;
        }
        cout << "nulo.\n";
    }
}

void excluirListaDupla(Lista *lista)
{
    if(lista == nullptr) return;

    No *aux = lista->inicioLista;
    while(aux != nullptr){
        No *next = aux->prox;
        delete aux;
        aux = next;
    }
    lista->inicioLista = nullptr;
    delete lista;
}

int contarElementosPares(Lista *lista)
{
    if(lista == nullptr) return 0;

    int qtdElem = 0;
    No *aux = lista->inicioLista;
    while(aux!=nullptr)
    {
      if (aux->info % 2 == 0) {
        qtdElem++;
      }
      aux=aux->prox;
    }

    return qtdElem;
}

/**
 * Criar uma função para percorrer uma lista ordenada duplamente encadeada. 
 * Deverá exibir o número, a sua posição e se ele é par ou ímpar. 
 * Faça as validações e verificações necessárias (lista vazia). 
 * Exiba a quantidade de elementos que são pares.
 * */
void exibirTodosECalcularElemPares(Lista *lista)
{
  int quantidadeElementosPares = 0;
  int index = 0;
  if(listaEhVazia(lista) != 0){
    No *aux = lista->inicioLista;

    while(aux != nullptr){
      std::cout << "Valor do elemento: " << aux->info << endl;
      std::cout << "Indice do elemento: " << index << endl;

      if (aux->info % 2 == 0){
        std::cout << "E o elemento eh par." << endl;
        quantidadeElementosPares += 1;
      } else {
          std::cout << "E o elemento eh impar." << endl;
      }

      index += 1;
      aux = aux->prox;
    }

    std::cout << "A lista possui " << quantidadeElementosPares << " elementos pares." << endl;
  } else {
    std::cout << "A lista esta vazia.";
  }
}
