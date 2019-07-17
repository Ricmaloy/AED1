#include<stdio.h>
#include<stdlib.h>
#include"Ex6.h"


Lista cria_lista() {

    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));

    if (cab != NULL){
        cab->prox = NULL;
        cab->info = 0;
    }
return cab;
}

int lista_vazia(Lista p) {
    if (p->prox == NULL)
    return 1;
    else
    return 0;
}

int printa_lista(Lista p){
    Lista aux=p->prox;
    printf("Lista = {");
    while(aux != NULL){
        printf("%d",aux->info);
        if(aux->prox != NULL)printf(" ");
        aux=aux->prox;
    }
    printf("}\n");

}

int tamanho (Lista p){
        return (p->info);
}

int insere_ord (Lista *lst, int elem) {
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL) { return 0; }
    N->info = elem;

    Lista aux = *lst;
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox;

    N->prox = aux->prox;
    aux->prox = N;
    (*lst)->info++;
return 1;
}

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1)return 0;

    Lista aux = *lst;
    while (aux->prox != NULL && aux->prox->info < elem) aux = aux->prox;
    if (aux->prox == NULL || aux->prox->info > elem) return 0;

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    (*lst)->info--;
return 1;
}


int remove_imp(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    Lista aux=*p;
    while(aux!=NULL){
        while (aux->prox != NULL && aux->prox->info%2==0)aux = aux->prox;

        if (aux->prox == NULL)return 0;


        Lista aux2 = aux->prox;
        aux->prox = aux2->prox;
        free(aux2);
        (*p)->info--;
    }
}

int maior(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    int maior=(*p)->prox->info;
    Lista aux=(*p)->prox;
    while(aux!=NULL){
        if(aux->info>maior)maior=aux->info;
        aux=aux->prox;
    }

return maior;
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

Lista concat(Lista *a,Lista *b){

    Lista c=cria_lista();
    Lista aux=(*a)->prox;
    Lista aux2=(*b)->prox;

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
