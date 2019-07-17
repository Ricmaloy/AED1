#ifndef EX5_H_INCLUDED
#define EX5_H_INCLUDED
#include"Ex5.h"

struct no{
    int info;
    struct no *prox;
};

typedef struct no *Lista;


    Lista cria_lista();
    int lista_vazia(Lista p);
    int printa_lista(Lista p);
    int insere_ord (Lista *p, int elem);
    int remove_ord (Lista *lst, int elem);
    int remove_imp(Lista *p);
    Lista concat(Lista *a,Lista *b);
    int maior(Lista *p);




#endif // EX5_H_INCLUDED
