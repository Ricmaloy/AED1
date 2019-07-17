#ifndef EX4_H_INCLUDED
#define EX4_H_INCLUDED
#include "Ex4.h"
#include<stdio.h>

struct no{
    int info;
    struct no *prox;
};


typedef struct no *Lista;

Lista cria_lista();
int lista_vazia(Lista p);
int insere_elem(Lista *p,int elem);
int remove_elem(Lista *p,int elem);
int insere_fim(Lista *p,int elem);
int remove_todos(Lista *p,int elem);
int printa_lista(Lista p);
int menor(Lista *p);
int tamanho(Lista *p);
Lista concat(Lista *a,Lista *b);


#endif // EX4_H_INCLUDED
