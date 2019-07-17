#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha *pilha;

pilha cria_pilha();
int pilha_vazia(pilha p);
int push(pilha *p, int x);
int pop(pilha *p, int *x);
int ler_topo(pilha p, int *x);
int print(pilha p);
