#include<stdio.h>
#include<stdlib.h>
#include"Ex5.h"

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista p){
    if(p==NULL)return 1;
    else return 0;
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

int insere_ord (Lista *p, int elem) {    ///agora ordena crescentimente

    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)return 0;
    N->info = elem;
    if (lista_vazia(*p) == 1|| elem <= (*p)->info) {
        N->prox = *p;
        *p = N;
        return 1;
    }

    Lista aux = *p;
    while (aux->prox != NULL && aux->prox->info > elem)aux = aux->prox;

    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}


int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1 || elem < (*lst)->info)return 0;
        Lista aux = *lst;
    if (elem == (*lst)->info) {
        *lst = aux->prox;
        free(aux);
        return 1;
    }
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox;
    if (aux->prox == NULL || aux->prox->info > elem)
    return 0;

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

Lista concat(Lista *a,Lista *b){

    Lista c=cria_lista();
    Lista aux=*a;
    Lista aux2=*b;

    while(aux!=NULL){
        insere_ord(&c,aux->info);
        aux=aux->prox;
    }
    while(aux2!=NULL){
        insere_ord(&c,aux2->info);
        aux2=aux2->prox;
    }
return c;
}


int remove_imp(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    Lista aux=*p;
    while(aux!=NULL){
        while (aux->prox != NULL && aux->prox->info%2!=0)aux = aux->prox;

        if (aux->prox == NULL)return 0;

        Lista aux2 = aux->prox;
        aux->prox = aux2->prox;
        free(aux2);
}
}

int maior(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    int maior=(*p)->info;
    Lista aux=*p;
    while(aux!=NULL){
        if(aux->info>maior)maior=aux->info;
        aux=aux->prox;
    }

return maior;
}


int tamanho(Lista *p){
    Lista aux=*p;
    int tam=0;
    while(aux!=NULL){
        tam++;
        aux=aux->prox;
    }
    return tam;
}

int iguais(Lista *a,Lista *b){

    Lista aux=*a;
    Lista aux2=*b;
    while(aux!=NULL){
        if(aux->info!=aux2->info)return 1;
        aux=aux->prox;
        aux2=aux2->prox;
    }
return 0;
}
