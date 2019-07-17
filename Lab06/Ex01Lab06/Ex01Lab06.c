#include <stdio.h>
#include <stdlib.h>
#include "Ex01Lab06.h"


struct no {
    int info;
    struct no *prox;
};

Lista cria_lista() {
    return NULL;
}

int lista_vazia(Lista lst) {
if (lst == NULL)
    return 1; /// Lista vazia
else
    return 0; /// Lista N�O vazia
}

int insere_ord (Lista *lst, int elem) {
    /// Aloca um novo n�
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL) {
        return 0; /// Falha: n� n�o alocado
        }
    N->info = elem; /// Insere o conte�do (valor do elem)

    if (lista_vazia(*lst) || elem <= (*lst)->info) {
        N->prox = *lst; /// Aponta para o 1o n� atual da lista
        *lst = N; /// Faz a lista apontar para o novo n�
        return 1;
    }
    Lista aux = *lst; /// Faz aux apontar para 1� n�
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox; /// Avan�a
    /// Insere o novo elemento na lista
    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1 || elem < (*lst)->info)
    if (lista_vazia(*lst) == 1 || elem < (*lst)->info)
        return 0; /// Falha
    Lista aux = *lst; /// Ponteiro auxiliar para o 1� n�
    if (elem == (*lst)->info) { /// Remove elemento 1� n� da lista
        lst = aux->prox; /// Lista aponta para o 2� n�
        free(aux); /// Libera mem�ria alocada
    return 1;
    }
    /// Percorrimento at� final de lista ou achar elem ou n� maior
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;
    if (aux->prox == NULL || aux->prox->info > elem)
        return 0; /// Falha
    ///Remove elemento (ap�s o 1� n� da lista)
    Lista aux2 = aux->prox; /// Aponta n� a ser removido
    aux->prox = aux2->prox; /// Retira n� da lista
    free(aux2); /// Libera mem�ria alocada
    return 1;
}

void imprime_lista(Lista *lst){
     Lista aux = *lst;
     if(aux==NULL){
        printf("Lista : { }\n");
        return 0;
     }
     printf("Lista : {");
     while (aux!= NULL){
        printf("%d ",aux->info);
        aux = aux->prox;
      }
      printf("}\n\n");
      return 1;
}

