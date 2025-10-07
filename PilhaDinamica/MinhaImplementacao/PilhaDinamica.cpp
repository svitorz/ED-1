#include "header.h"
#include <iostream>

bool stackPush(Stack** stack, int value)
{
  Stack* node = new (std::nothrow) Stack;

  // o metodo new retorna null quando nao ha espaco para alocacao,
  // vamos usar isso para verificar se um novo item pode ser inserido (novo espaco alocado)
  if (node == nullptr){
    return false;
  }

  // adiciona o valor recebido ao novo nó
  node->value = value;
  node->next = nullptr;

  /**
   * Se a pilha estava vazia, adiciona o nó atual como o proximo item.
   * Isso acontece porque o valor default do next é sempre nullptr, 
   * entao se a pilha estiver vazia, nao é necessario atualizar,
   * caso nao esteja vazia, é preciso definir a pilha recem inserida como a proxima.
   * */
  if (stack != nullptr) {
    node->next = *stack;
  }

  //define a pilha recebida com o novo nó
  *stack = node;

  return true;
}

bool showActualValue(Stack** stack, int *value)
{
  if (*stack == nullptr) {
    *value = 0;
    return false;
  }

  *value = (*stack)->value;
  return true;
}

bool stackPull(Stack** stack)
{
  if(*stack == nullptr){
    return false;
  }

  Stack* auxStack = *stack;
  *stack = auxStack->next;
  delete auxStack;
  return true;
}

bool destructStack(Stack** stack)
{
  if(*stack == nullptr){
    return false;
  }

  Stack* auxStack;

  while (stack != nullptr) {
      auxStack = *stack;
      *stack = auxStack->next;
      delete auxStack;
  }
  
  delete stack;
  return true;
}
