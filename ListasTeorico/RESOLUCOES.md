# Exercícios teóricos de Listas (Encadeada e Duplamente Encadeada)

## 1 - A partir de uma lista inicial com 3 elementos (5,10,20) faça a inserção de forma ordenada e a remoção conforme as instruções:

- I(2)
- R(17)
- I(15)
- R(20)
- R(2)
- I(40)

### a) Lista encadeada

Inicialmente, temos a seguinte lista encadeada:
| -------------- | -------------- | -------------- |
| | 5 | 10 | 20 |

Para inserir o primeiro valor, consideramos que a lista já está ordenada de forma crescente. Portanto, sabemos que 5 é o início da lista, e dois é menor que 5, por isso, pegamos o novo nó, criado com o prox com valor nullptr e o valor 2, e apontamos o prox para o nó com valor 5. Agora, o novo nó com valor 2 se torna o início da lista.

| ------------- | -------------- | -------------- | -------------- |
| 2 | 5 | 10 | 20 |

R(17)
Para remover o valor 17, verificamos se a lista contém valores, através do qtd, ou do valor incial, que no caso é diferente de null, então a lista contém valores. Percorremos a lista a partir do início, verificando cada nó. Como 17 não está presente na lista, nenhuma remoção é feita. A lista permanece inalterada.

I(15)
Para inserir o valor 15, criamos um novo nó com esse valor. Verificamos se a lista está vazia, não está. Percorremos a lista a partir do início. Encontramos que 15 é maior que 2,5 e 10, mas menor que 20. Portanto, definimos o ponteiro de prox do novo nó, com o valor de 20, e atualizamos o prox do nó com valor 10 para apontar para o novo nó com valor 15.
| ------------- | -------------- | -------------- | -------------- | -------------- |
| 2 | 5 | 10 | 15 | 20 |

R(20)
Para remover o valor 20, verificamos se a lista contém valores. Percorremos a lista a partir do início. Encontramos o nó com valor 20 no final da lista. Atualizamos o prox do nó com valor 15 para nullptr, removendo assim o nó com valor 20 da lista.
| ------------- | -------------- | -------------- | -------------- |
| 2 | 5 | 10 | 15 |
R(2)
Para remover o valor 2, verificamos se a lista contém valores. Percorremos a lista a partir do início. Encontramos o nó com valor 2 no início da lista. Atualizamos o início da lista para apontar para o nó com valor 5, removendo assim o nó com valor 2 da lista.
| ------------- | -------------- | -------------- |
| 5 | 10 | 15 |

I(40)
Para inserir o valor 40, criamos um novo nó com esse valor. Verificamos se a lista está vazia, não está. Percorremos a lista a partir do início. Encontramos que 40 é maior que 5, 10 e 15. Portanto, definimos o ponteiro de prox do novo nó como nullptr, e atualizamos o prox do nó com valor 15 para apontar para o novo nó com valor 40.
| ------------- | -------------- | -------------- | -------------- |
| 5 | 10 | 15 | | 40 |

### b) Lista duplamente encadeada

Inicialmente, temos a seguinte lista duplamente encadeada:
| -------------- | -------------- | -------------- |
| | 5 | 10 | 20 |

Para inserir o primeiro valor, consideramos que a lista já está ordenada de forma crescente. Portanto, sabemos que 5 é o início da lista, e dois é menor que 5, por isso, pegamos o novo nó, criado com o prox e prev com valor nullptr e o valor 2, e apontamos o prox para o nó com valor 5. Agora, o novo nó com valor 2 se torna o início da lista. Também atualizamos o prev do nó com valor 5 para apontar para o novo nó com valor 2.

| ------------- | -------------- | -------------- | -------------- |
| 2 | 5 | 10 | 20 |

R(17)
Para remover o valor 17, verificamos se a lista contém valores, através do qtd, ou do valor incial, que no caso é diferente de null, então a lista contém valores. Percorremos a lista a partir do início, verificando cada nó. Como 17 não está presente na lista, nenhuma remoção é feita. A lista permanece inalterada.
I(15)
Para inserir o valor 15, criamos um novo nó com esse valor. Verificamos se a lista está vazia, não está. Percorremos a lista a partir do início.

Encontramos que 15 é maior que 2,5 e 10, mas menor que 20. Portanto, definimos o ponteiro de prox do novo nó, com o valor de 20, e atualizamos o prox do nó com valor 10 para apontar para o novo nó com valor 15. Também atualizamos o prev do nó com valor 20 para apontar para o novo nó com valor 15, e o prev do novo nó para apontar para o nó com valor 10.
| ------------- | -------------- | -------------- | -------------- | -------------- |
| 2 | 5 | 10 | 15 | 20 |  
R(20)
Para remover o valor 20, verificamos se a lista contém valores. Percorremos a lista a partir do início. Encontramos o nó com valor 20 no final da lista. Atualizamos o prox do nó com valor 15 para nullptr, removendo assim o nó com valor 20 da lista. Também atualizamos o prev do nó com valor 20 para nullptr.
| ------------- | -------------- | -------------- | -------------- |
| 2 | 5 | 10 | 15 |
R(2)
Para remover o valor 2, verificamos se a lista contém valores. Percorremos a lista a partir do início. Encontramos o nó com valor 2 no início da lista. Atualizamos o início da lista para apontar para o nó com valor 5, removendo assim o nó com valor 2 da lista. Também atualizamos o prev do nó com valor 5 para nullptr.
| ------------- | -------------- | -------------- |
| 5 | 10 | 15 |

I(40)
Para inserir o valor 40, criamos um novo nó com esse valor. Verificamos se a lista está vazia, não está. Percorremos a lista a partir do início. Encontramos que 40 é maior que 5, 10 e 15. Portanto, definimos o ponteiro de prox do novo nó como nullptr, e atualizamos o prox do nó com valor 15 para apontar para o novo nó com valor 40. Também atualizamos o prev do novo nó para apontar para o nó com valor 15.
| ------------- | -------------- | -------------- | -------------- |
| 5 | 10 | 15 | | 40 |

## 2 - COnsidere uma lista encadeada, faça a inserção e remoção como se pede.

- R(5)
- I(2)
- R(2)
- I(7)
- I(5)
- R(10)
- I(25)
- I(5)

Inicialmente, a lista está vazia. Portanto, a remoção de 5 não tem efeito, e a lista permanece vazia.
I(2)
Inserimos o valor 2 na lista. Como a lista está vazia, o novo nó com valor 2 se torna o início da lista.
| ------------- | -------------- |
| 2 |
R(2)
Removemos o valor 2 da lista. Encontramos o nó com valor 2 no início da lista e atualizamos o início da lista para nullptr, removendo assim o nó com valor 2.
A lista fica vazia novamente.

I(7)
Inserimos o valor 7 na lista. Como a lista está vazia, o novo nó com valor 7 se torna o início da lista.
| ------------- | -------------- |
| 7 |
I(5)
Inserimos o valor 5 na lista. Percorremos a lista e encontramos que 5 é menor que 7. Portanto, o novo nó com valor 5 se torna o início da lista, e seu prox aponta para o nó com valor 7.
| ------------- | -------------- | -------------- |
| 5 | 7 |
R(10)
Tentamos remover o valor 10 da lista. Percorremos a lista, mas não encontramos o nó com valor 10. Portanto, a lista permanece inalterada.
| ------------- | -------------- | -------------- |
| 5 | 7 |  
I(25)
Inserimos o valor 25 na lista. Percorremos a lista e encontramos que 25 é maior que 5 e 7. Portanto, o novo nó com valor 25 é adicionado ao final da lista.
| ------------- | -------------- | -------------- | -------------- |
| 5 | 7 | 25 |
I(5)
Inserimos outro valor 5 na lista. Percorremos a lista e encontramos que 5 é igual ao primeiro nó com valor 5. Portanto, o novo nó com valor 5 é inserido após o primeiro nó com valor 5.
| ------------- | -------------- | -------------- | -------------- | -------------- |
| 5 | 5 | 7 | 25 |
