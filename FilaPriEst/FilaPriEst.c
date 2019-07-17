#define max 10
#include "FilaPriEst.h"
#include <stdlib.h>
#include <stdio.h>

struct fila {
    int no[max];
    int ini,fim;
};

Fila cria_fila() {
    Fila f;
    f = (Fila) malloc(sizeof(struct fila));
    if (f != NULL) {
        f->ini = 0;
        f->fim = 0;
    }
    return f;
}

int fila_vazia(Fila f) {
    if (f->ini == f->fim)
        return 1;
    else
        return 0;
}

int fila_cheia(Fila f) {
    if (f->ini == (f->fim+1)%max)
        return 1;
    else
        return 0;
}

int insere_ini(Fila f, int elem){
    if(fila_cheia(f) == 1)return 0;
    f->ini = (max+f->ini-1)%max;
    f->no[f->ini] = elem;
    return 1;
}

int insere_fim(Fila f, int elem) {
    if (fila_cheia(f) == 1)
        return 0;

    f->no[f->fim] = elem;
    f->fim = (f->fim+1)%max;

    return 1;
}

int remove_fim(Fila f, int *elem){
     if (fila_cheia(f) == 1)
        return 0;
    f->fim = (max+f->fim-1)%max;
    *elem = f->no[f->fim];
    return 1;
}

int remove_ini(Fila f, int *elem) {
    if (fila_vazia(f) == 1)
        return 0;

    *elem = f->no[f->ini];
    f->ini = (f->ini+1)%max;

    return 1;
}

int insere_ord(Fila f, int elem){
    int pos;
    if(fila_cheia(f) == 1) return 0;
    if(fila_vazia(f) == 1){

        f->no[f->ini] = elem;
        f->fim = (f->fim+1)%max;
        return 1;
    }
    if(elem >= f->no[f->ini]){
        f->ini = (max+f->ini-1)%max;
        f->no[f->ini] = elem;
        return 1;
    }
    if(elem <= f->no[(max+f->fim-1)%max]){
        f->no[f->fim] = elem;
        f->fim = (f->fim+1)%max;

        return 1;
    }


    for(int i = f->ini; i != f->fim ; i = (i+1)%max){
        if(elem >= f->no[i]){
            pos = i;
            break;
        }
    }
    printf("\n");
    for(int j = (f->fim+1)%max; j > pos ; j = (max+j-1)%max){
        f->no[j] = f->no[(max+(j-1))%max];
    }
    f->no[pos] = elem;
    f->fim = (f->fim+1)%max;
    return 1;
}

int removee(Fila f, int *elem){
    if(fila_vazia(f) == 1)return 0;
    *elem = -999999;
    int pos;
    *elem = f->no[f->ini];
    for(int i = f->ini; i != f->fim;i = (i+1)%max){
        if(f->no[i] < *elem){
            *elem = f->no[i];
            pos = i;
        }
    }
    if(*elem == f->no[f->ini]){
        f->ini = (f->ini+1)%max;
        return 1;
    }
    for(int j = pos+1; j != f->fim; j = (j+1)%max){
        f->no[j-1] = f->no[j];
    }
    f->fim = (f->fim-1)%max;
    return 1;
}

int print_fila(Fila f){

int aux = f->ini;
if(fila_vazia(f)==1) {
    printf("{}");
    return 0;
}

printf("{");
for(int i = aux; i != f->fim ; i = (i+1)%max){
    printf(" %d ",f->no[i]);
}
printf("}\n");
return 1;
 }
