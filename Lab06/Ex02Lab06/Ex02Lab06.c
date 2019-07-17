#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lab06.h"

struct no {
    int info;
    struct no *prox;
};

Lista cria_lista() {
    /// Aloca n� cabe�alho
    Lista cab;
    cab = (Lista)malloc(sizeof(struct no));
    /// Coloca lista no estado de vazia
    if (cab != NULL) { /// S� se aloca��o N�O falhar
        cab->prox = NULL;
    return cab;
    }
}
int lista_vazia(Lista lst) {
    if(lst->prox == NULL)
        return 1; /// Lista vazia
    else
        return 0; /// Lista N�O vazia
}

int insere_ord (Lista *lst, int elem) {
    /// Aloca um novo n�
        Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL){
        return 0; /// Falha: n� n�o alocado
    }
    N->info = elem; /// Insere o conte�do (valor do elem)
    /// Percorrimento da lista

    Lista aux = *lst; /// Faz aux apontar para n� cabe�alho

    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox; /// Avan�a

    /// Insere o novo n� na lista
    N->prox = aux->prox;
    aux->prox = N;

    return 1;
}

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(lst) == 1 )
        return 0; /// Falha

    Lista aux = *lst; /// Ponteiro auxiliar para n� cabe�alho

    /// Percorrimento at� final de lista, achar elem ou n� maior
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    if (aux->prox == NULL || aux->prox->info > elem)
        return 0; /// Falha

    /// Remove elemento da lista
    Lista aux2 = aux->prox; /// Aponta n� a ser removido
    aux->prox = aux2->prox; /// Retira n� da lista
    free(aux2); /// Libera mem�ria alocada
    return 1;
}

void imprime_lista(Lista *lst){
     Lista aux = (*lst)->prox;
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
int menor(Lista *lst){
     if(lista_vazia(*lst) == 1)
        return 0;
     Lista aux = *lst;
     int auxmenor;

    auxmenor = aux->info;

     while (aux->prox != NULL){
         if(aux->info > aux->prox->info)
         auxmenor = aux->prox->info;
         aux = aux->prox;
     }
     remove_elem(lst,auxmenor);
     return 1;
 }

int tamanho(Lista *lst){
    if(lista_vazia(lst) == 1)
        return 0;
    int tamanho=0;
    Lista aux=*lst;
    for(tamanho=0;aux!=NULL;tamanho++)
        aux=aux->prox;
return tamanho;
}
