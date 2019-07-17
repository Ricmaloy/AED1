#include <stdio.h>
#include <stdlib.h>
#include "TrabEx1.h"

struct no {
int info;
struct no * prox;
};

Lista cria_lista() {
return NULL;
}

int lista_vazia (Lista lst) {
if (lst == NULL)
return 1;
else
return 0;
}

int insere_final (Lista *lst, int elem) {

    Lista N = (Lista) malloc(sizeof(struct no));

if (N == NULL) return 0;

    N->info = elem;

if (lista_vazia(*lst) == 1) {
    N->prox = N;
    *lst = N;
}else {
    N->prox = (*lst)->prox;
    (*lst)->prox = N;
    *lst = N;
}
return 1;
}

int remove_inicio (Lista *lst, int *elem) {

if(lista_vazia(*lst) == 1)
    return 0;
    Lista aux = (*lst)->prox;
    *elem = aux->info;
if(*lst == (*lst)->prox)
    *lst = NULL;
else
    (*lst)->prox = aux->prox;
free(aux);

return 1;
}

void imprime(Lista *lst){
    if(lista_vazia(*lst) == 1){
        printf("Lista : { }\n");
    }else{
    Lista aux = (*lst)->prox;
    printf("Lista : { ");
    while(aux !=  (*lst)){
        printf("%d ",aux->info);
        aux = aux->prox;
    }
        printf("%d }\n",(*lst)->info);
    }
}

int tamanho(Lista *lst){
    if(lista_vazia(*lst) == 1){
        return 0;
    }else{
    int cont = 1;
    Lista aux = (*lst)->prox;
    while(aux != (*lst)){
        cont++;
        aux = aux->prox;
    }
        return cont;
    }
}

int maior(Lista *lst){
    if(lista_vazia(*lst) == 1){
        return 0;
    }
    else{
        Lista aux = (*lst)->prox;
        int m = (*lst)->prox->info;
            while(aux != (*lst)){
            if(m < aux->info)
                m = aux->info;
            aux = aux->prox;
            }
            return m;
        }

}

