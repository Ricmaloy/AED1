#include "FilaPriDin.h"

struct no {
    int info;
    struct no * prox;
};
struct fila {
    struct no * ini;
    struct no * fim;
};

Fila inicializa_fila(){
   Fila f;
   f = (Fila)malloc(sizeof(struct fila));
   if(f != NULL){
   f->fim = NULL;
   f->ini = NULL;
   }
   return f;
}

int fila_vazia(Fila f){
    if(f->ini == NULL)return 1;
    else return 0;
}

int insere_ord(Fila f,int num){
    No n,aux;
    n = (struct no *)malloc(sizeof(struct no));
    aux = (struct no *)malloc(sizeof(struct no));
    n->info = num;
    n->prox = NULL;
    if(fila_vazia(f) == 1){
        f->ini = n;
        f->fim = n;
        return 1;
    }
    if(num < f->ini->info){
        n->prox = f->ini;
        f->ini = n;
        return 1;

    }else
    if(num > f->fim->info){
        f->fim->prox = n;
        f->fim = n;
        return 1;
    }else{
        aux = f->ini;
        while(aux->prox != NULL){
            if(aux->prox->info > n->info)break;
            aux = aux->prox;
        }
        n->prox = aux->prox;
        aux->prox = n;
        return 1;
    }

}

int insere_fim(Fila f, int num){
    struct no * n;
    n = (struct no *)malloc(sizeof(struct no));
    if(n == NULL)return 0;

    n->info = num;
    n->prox = NULL;

    if(fila_vazia(f) == 1){
        f->ini = n;         ///caso seja o 1 no
    }else
        f->fim->prox = n;   ///faz o ultimo no apontar para o novo no

    f->fim = n;

    return 1;
}

int remove_ini(Fila f,int *num){
    if(fila_vazia(f) == 1)return 0;
    struct no * aux;

    aux = f->ini;
    *num = aux->info;

    if(f->ini == f->fim){
        f->fim = NULL;
    }

    f->ini = aux->prox;

    free(aux);

    return 1;
}

int imprime(Fila f){
    if(f->ini == NULL){
        printf("Fila : | |\n");
        return 0;
    }
    No aux;
    aux = f->ini;
    printf("Fila : |");
    while(aux != NULL){
        printf(" %d ",aux->info);
        aux = aux->prox;
    }
    printf("|\n");
}
