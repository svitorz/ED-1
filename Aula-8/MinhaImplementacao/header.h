#ifndef PILHA_DINAMICA_INCLUDED
#define PILHA_DINAMICA_INCLUDED

/**
 * Criacao da estrutura da pilha 
 * */
struct Stack {
  // valor a ser inserido
  int value;
  // referencia ao proximo item 
  // (lembrando que a pilha aponta de cima para baixo)
  // e deve ser um ponteiro para apontar o endereco do proximo item
  Stack* next;
};

bool stackPush(Stack** stack, int value);
bool showActualValue(Stack** stack, int *value);
bool stackPull(Stack** stack);
bool destructStack(Stack** stack);

#endif
