#ifndef EX2_H_INCLUDED
#define EX2_H_INCLUDED
#include"Ex2.h"
typedef struct lista Lista;

Lista* cria_lista();
int lista_vazia(Lista *p);
int lista_cheia(Lista *p);
int insere_elem(Lista *p,int x);
int remove_elem(Lista *p,int x);
int remove_todos(Lista *p,int elem);
void print_lista(Lista *p);
int insere1(Lista *p,int x);
int remove_imp(Lista *p);
int menor(Lista *p);
int tamanho(Lista *p);
Lista* concat(Lista *a,Lista *b,Lista *c);

#endif // EX2_H_INCLUDED

