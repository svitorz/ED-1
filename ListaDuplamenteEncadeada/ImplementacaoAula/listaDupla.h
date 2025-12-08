#ifndef LISTADUPLA_H_INCLUDED
#define LISTADUPLA_H_INCLUDED

struct No{
    int info;
    No *prox, *ant;
};

struct Lista{
    No *inicioLista;
    int qtd;
};

Lista* criarLista();
int listaEhVazia(Lista *lista);
void inserirElementoListaDupla(Lista* lista, int inf);
void removerElementoListaDupla(Lista *lista, int inf);
void consultarElementoListaDupla(Lista *lista, int inf);
void exibirElementosListaDupla(Lista *lista);
void excluirListaDupla(Lista *lista);
void excluirListaDupla(Lista *lista);
int contarElementosPares(Lista *lista);

#endif // LISTADUPLA_H_INCLUDED
