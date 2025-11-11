# Exercícios teóricos de Listas (Encadeada e Duplamente Encadeada)

## 1 - A partir de uma lista inicial com 3 elementos (5, 10, 20) faça a inserção de forma ordenada e a remoção conforme as instruções:

- I(2)
- R(17)
- I(15)
- R(20)
- R(2)
- I(40)

### a) Lista encadeada

Inicialmente, temos a seguinte lista encadeada:

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |    10 |
|      2 |    20 |

Após I(2):

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    20 |

R(17)

17 não está presente na lista; portanto não há alteração:

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    20 |

I(15)

Inserimos 15 na posição correta (entre 10 e 20):

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    15 |
|      4 |    20 |

R(20)

Removendo 20 (último elemento):

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    15 |

R(2)

Removendo 2 (primeiro elemento):

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |    10 |
|      2 |    15 |

I(40)

Inserindo 40 ao final:

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |    10 |
|      2 |    15 |
|      3 |    40 |

### b) Lista duplamente encadeada

Inicialmente, temos a seguinte lista duplamente encadeada:

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |    10 |
|      2 |    20 |

Após I(2):

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    20 |

R(17)

17 não está presente na lista; portanto não há alteração:

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    20 |

I(15)

Inserimos 15 entre 10 e 20:

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    15 |
|      4 |    20 |

R(20)

Removendo 20 (último elemento):

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |
|      1 |     5 |
|      2 |    10 |
|      3 |    15 |

R(2)

Removendo 2 (primeiro elemento):

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |    10 |
|      2 |    15 |

I(40)

Inserindo 40 ao final:

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |    10 |
|      2 |    15 |
|      3 |    40 |

## 2 - Considere uma lista encadeada, faça a inserção e remoção como se pede.

- R(5)
- I(2)
- R(2)
- I(7)
- I(5)
- R(10)
- I(25)
- I(5)

Inicialmente, a lista está vazia. Portanto, a remoção de 5 não tem efeito, e a lista permanece vazia.

Lista vazia.

I(2)

Inserimos o valor 2 na lista. Como a lista está vazia, o novo nó com valor 2 se torna o início da lista.

| Índice | Valor |
| -----: | ----: |
|      0 |     2 |

R(2)

Removemos o valor 2 da lista. Encontramos o nó com valor 2 no início da lista e atualizamos o início da lista para nullptr, removendo assim o nó com valor 2.

Lista vazia.

I(7)

Inserimos o valor 7 na lista. Como a lista está vazia, o novo nó com valor 7 se torna o início da lista.

| Índice | Valor |
| -----: | ----: |
|      0 |     7 |

I(5)

Inserimos o valor 5 na lista. Percorremos a lista e encontramos que 5 é menor que 7. Portanto, o novo nó com valor 5 se torna o início da lista, e seu prox aponta para o nó com valor 7.

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |     7 |

R(10)

Tentamos remover o valor 10 da lista. Percorremos a lista, mas não encontramos o nó com valor 10. Portanto, a lista permanece inalterada.

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |     7 |

I(25)

Inserimos o valor 25 na lista. Percorremos a lista e encontramos que 25 é maior que 5 e 7. Portanto, o novo nó com valor 25 é adicionado ao final da lista.

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |     7 |
|      2 |    25 |

I(5)

Inserimos outro valor 5 na lista. Percorremos a lista e encontramos que 5 é igual ao primeiro nó com valor 5. Portanto, o novo nó com valor 5 é inserido após o primeiro nó com valor 5 (mantendo ordem estável entre iguais).

| Índice | Valor |
| -----: | ----: |
|      0 |     5 |
|      1 |     5 |
|      2 |     7 |
|      3 |    25 |
