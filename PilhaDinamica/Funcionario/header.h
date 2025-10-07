#ifndef PILHA_DINAMICA_INCLUDED
#define PILHA_DINAMICA_INCLUDED

struct Funcionario {
  char nome[50], cargo[50];
  float salario;
};

/**
 * Criacao da estrutura da pilha 
 * */
struct Stack {
  // valor a ser inserido
  Funcionario fun;
  // referencia ao proximo item 
  // (lembrando que a pilha aponta de cima para baixo)
  // e deve ser um ponteiro para apontar o endereco do proximo item
  Stack* next;
};

bool stackPush(Stack** stack, Funcionario fun);
bool showActualValue(Stack** stack, Funcionario *fun);
bool stackPull(Stack** stack);
bool destructStack(Stack** stack);

#endif
