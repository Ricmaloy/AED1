#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no * Pilha;
typedef struct noo * PPilha;
Pilha cria_pilha ();
PPilha ccria_pilha();
int pilha_vazia (Pilha p);
int push (Pilha *p, int elem);
int pop (Pilha *p, int *elem);
int le_topo (Pilha *p, int *elem);
void imprime(Pilha *p);
int tamanho(Pilha *p);
//int palindromo(char *s);
