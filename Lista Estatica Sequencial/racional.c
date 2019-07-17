#include<stdio.h>
#include<stdlib.h>
#include "racional2.h"

struct num{
    int n;
};

struct lista{
    int qnt;
    Num dados[20];
};

Lista* criar_lista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL)
        li->qnt = 0;
    return li;
}

void liberar_lista(Lista* wili){
    free(wili);
}

int lista_vazia(Lista* li){
    if(li->qnt == 0)
        return 1;
    else
        return 0;
}
int lista_cheia(Lista* li){
    if(li->qnt == 20)
        return 1;
    else
        return 0;
}

int insere_elem(Lista* li,int elem){
    if(li == NULL || lista_cheia(li) == 1)
        return 0;
    li->dados[li->qnt].n = elem;
    li->qnt++;
    return 1;
}

int remove_elem(Lista* li,int elem){
    if(li == NULL || lista_vazia(li) == 1)
        return 0;
    int i,aux=0;
    while(aux < li->qnt && li->dados[aux].n != elem){
        aux++;
    }
    if(aux == li->qnt)
        return 0;       //O elemento n esta na lista
    for(i=aux+1;i<li->qnt;i++){ // Deslocamento à esq. do sucessor até o final da lista
        li->dados[i-1] = li->dados[i];
    }
    li->qnt--;  // Decremento do campo qnt
    return 1;   //Sucesso
}

int obtem_valor_de(Lista* li,int numero){
    if(li == NULL)
        return 0;
    int i=0;
    while(i<li->qnt && li->dados[i].n != numero)
        i++;
    if(i == li->qnt)
        return 0;
    else
        return 1;
}

void print_lista(Lista *li){
    int i = 0;
    printf("Lista = {");
    for(i=0;i<li->qnt;i++){
        printf("%d",li->dados[i].n);
        if(i<li->qnt-1)printf(" ");
    }
    printf("}\n\n");
}
