#include <stdio.h>
#include <stdlib.h>
typedef struct pilha *Pilha;

Pilha cria_pilha ();
int pilha_vazia (Pilha p);
int pilha_cheia (Pilha p);
int push (Pilha p, int elem);
int pop(Pilha p, int *elem);
int le_topo(Pilha p, int *elem);
void imprimebin(Pilha p);
void imprimeoct(Pilha p);
void imprimehexa(Pilha p);
Pilha decpbin(int elem);
Pilha decpoct(int elem);
Pilha decphexa(int elem);
