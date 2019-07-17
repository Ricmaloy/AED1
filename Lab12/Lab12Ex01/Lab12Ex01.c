#include <stdlib.h>
#include "Lab12Ex01.h"
#define MAX 10

struct deque {
    int vetor[MAX];
    int ini,cont;
};

Deque cria_deque(){
    Deque f;
    f = (Deque)malloc(sizeof(struct deque));
    if(f != NULL){
        f->ini = 0;
        f->cont = 0;
    }
    return f;
}

int deque_vazio(Deque f){
    if(f->cont == 0)
        return 1;
        else return 0;
}

int deque_cheio(Deque f){
    if(f->cont == MAX)
        return 1;
    else
        return 0;
}

int insere_fim(Deque f, int num){
    if(deque_cheio(f) == 1)
        return 0;
    f->vetor[(f->ini+f->cont)%MAX] = num;
    f->cont++;
    return 1;
}

int insere_ini(Deque f, int num){
    if(deque_cheio(f) == 1)
        return 0;
    for(int i=(f->ini+f->cont)%MAX; i != f->ini-1;i--){
        f->vetor[i+1] = f->vetor[i];
    }
    f->vetor[f->ini] = num;
    f->cont++;
    return 1;
}


int remove_ini(Deque f, int *num){
    if(deque_vazio(f) == 1)
        return 0;
    *num = f->vetor[f->ini];
    f->ini = (f->ini+1)%MAX;
    f->cont--;
    return 1;
}

int remove_fim(Deque f, int *num){
    if(deque_vazio(f) == 1)
        return 0;
    *num = f->vetor[f->ini+f->cont];
    f->cont--;
    return 1;
}

void imprime_deque(Deque f){
    if(deque_vazio(f) == 1)
        printf("Deque = | |\n");
    else{
        printf("Deque = | ");
        for(int i = f->ini; i < f->ini+f->cont; i++){
            printf("%d ",f->vetor[i]);
        }
        printf("|\n");
    }
}

