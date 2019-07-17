#include<stdio.h>
#include<stdlib.h>
#include"Ex4.h"

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista p){
    if(p==NULL)return 1;
    else return 0;
}

int insere_elem(Lista *p, int elem){

    Lista N = (Lista)malloc(sizeof(struct no));
    if (N == NULL)return 0;

    N->info = elem;
    N->prox = *p;
    *p = N;
    return 1;
}

int remove_elem(Lista *p, int elem){
    if (lista_vazia(*p) == 1)return 0;
        Lista aux = *p;

    if (elem == (*p)->info){
        *p = aux->prox;
        free(aux);
        return 1;
    }

    while (aux->prox != NULL && aux->prox->info != elem)aux = aux->prox;
    if (aux->prox == NULL)return 0;
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

int remove_todos(Lista *p,int elem) {

    if(lista_vazia(*p) == 1) return 0;

    Lista aux = *p;

    while((*p) != NULL && elem == (*p)->info){
        *p = aux->prox;
        free(aux);
        aux = *p;
    }

    while(aux != NULL) {
        if(aux->prox != NULL && aux->prox->info == elem){
            Lista aux2 = aux->prox;
            aux->prox = aux2->prox;
            free(aux2);
        }else
            aux = aux->prox;
    }

    return 1;
}

int tamanho(Lista *p){
    int tam;
    Lista aux=*p;
    for(tam=0;aux!=NULL;tam++)aux=aux->prox;
return tam;
}


int printa_lista(Lista p){
    Lista aux=p;
    printf("Lista = {");
    while(aux != NULL){
        printf("%d",aux->info);
        if(aux->prox != NULL)printf(" ");
        aux=aux->prox;

    }
    printf("}\n");

}

int insere_fim(Lista *p,int elem){
    Lista N = (Lista)malloc(sizeof(struct no));
    if (N == NULL)return 0;

    if(lista_vazia(*p)==1){
        N->info = elem;
        *p = N;
        N->prox=NULL;
    }
    Lista aux=*p;
    N->info=elem;
    while(aux->prox!=NULL)aux=aux->prox;
    aux->prox=N;
    N->prox=NULL;
    return 1;
    }



int remove_pares(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    Lista aux=*p;
    if ((*p)->info%2!=0)*p = aux->prox;

    while(aux!=NULL){
        while (aux->prox != NULL && aux->prox->info%2==0)aux = aux->prox;

        if (aux->prox == NULL)return 0;

        Lista aux2 = aux->prox;
        aux->prox = aux2->prox;
        free(aux2);

        aux=aux->prox;

    }


return 1;
}


int menor(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    int menor=(*p)->info;
    Lista aux=*p;
    while(aux!=NULL){
        if(aux->info<menor)menor=aux->info;
        aux=aux->prox;
    }



return menor;
}

Lista concat(Lista *a,Lista *b){

    Lista c=cria_lista();
    Lista aux=*a;
    Lista aux2=*b;

    while(aux!=NULL){
        insere_fim(&c,aux->info);
        aux=aux->prox;

    }
    while(aux2!=NULL){
        insere_fim(&c,aux2->info);
        aux2=aux2->prox;
    }
return c;
}
