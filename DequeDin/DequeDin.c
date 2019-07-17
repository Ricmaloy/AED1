#include "DequeDin.h"
#include <stdio.h>
#include <stdlib.h>

struct no {
    int info;
    struct no * prox;
    struct no * ant;
};

struct dequee {
    struct no * ini;
    struct no * fim;
};

Deque cria_deque(){
    Deque d;
    d = (Deque) malloc(sizeof(struct dequee));
    if(d != NULL){
    d->fim=NULL;
    d->ini=NULL;
    }
    return d;
}

int deque_vazio(Deque d){
    if(d->ini == NULL && d->fim == NULL) return 1;
    else return 0;
}

int insere_ini(Deque d,int elem){
    No n;
    n = (No) malloc(sizeof(struct no));
    if(n == NULL) return 0;
    n->info = elem;
    if(deque_vazio(d) == 1){
        d->ini = n;
        d->fim = n;
        n->prox =NULL;
        n->ant = NULL;
        return 1;
    }else{
        n->ant = NULL;
        n->prox = d->ini;
        d->ini->ant = n;
        d->ini = n;
        return 1;
    }
}

int insere_fim(Deque d, int elem){
    No n;
    n = (No) malloc(sizeof(struct no));
    if(n == NULL) return 0;
    n->info = elem;
    if(deque_vazio(n) == 1){
        d->ini = n;
        d->fim = n;
        n->prox = NULL;
        n->ant = NULL;
        return 1;
    }else {
        n->ant = d->fim;
        n->prox = NULL;
        d->fim->prox = d;
        d->fim = d;
        return 1;
    }
}

int remove_ini(Deque d,int *num){
    if(deque_vazio(d) == 1)return 0;
    No aux = d->ini;
    num = d->ini->info;
    d->ini = aux->prox;
    d->ini->ant = NULL;
    free(aux);
    return 1;
}

int remove_fim(Deque d, int *num){
    if(deque_vazio(d) == 1)return 0;
    No aux = d->fim;
    num = d->fim->info;
    d->fim = aux->ant;
    d->fim->prox = NULL;
    free(aux);
    return 1;
}

void imprime(Deque d){
    No aux = d->ini;
    while(aux != NULL){
        printf("%d ",aux->info);
        aux = aux->prox;
    }
}

void imprime_rev(Deque d){
    No aux = d->fim;
    while(aux->ant != NULL){
        printf("%d ",aux->info);
        aux = aux->ant;
    }
}
