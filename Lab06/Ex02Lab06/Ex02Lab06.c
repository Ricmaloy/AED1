#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lab06.h"

struct no {
    int info;
    struct no *prox;
};

Lista cria_lista() {
    /// Aloca nó cabeçalho
    Lista cab;
    cab = (Lista)malloc(sizeof(struct no));
    /// Coloca lista no estado de vazia
    if (cab != NULL) { /// Só se alocação NÃO falhar
        cab->prox = NULL;
    return cab;
    }
}
int lista_vazia(Lista lst) {
    if(lst->prox == NULL)
        return 1; /// Lista vazia
    else
        return 0; /// Lista NÃO vazia
}

int insere_ord (Lista *lst, int elem) {
    /// Aloca um novo nó
        Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL){
        return 0; /// Falha: nó não alocado
    }
    N->info = elem; /// Insere o conteúdo (valor do elem)
    /// Percorrimento da lista

    Lista aux = *lst; /// Faz aux apontar para nó cabeçalho

    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox; /// Avança

    /// Insere o novo nó na lista
    N->prox = aux->prox;
    aux->prox = N;

    return 1;
}

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(lst) == 1 )
        return 0; /// Falha

    Lista aux = *lst; /// Ponteiro auxiliar para nó cabeçalho

    /// Percorrimento até final de lista, achar elem ou nó maior
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    if (aux->prox == NULL || aux->prox->info > elem)
        return 0; /// Falha

    /// Remove elemento da lista
    Lista aux2 = aux->prox; /// Aponta nó a ser removido
    aux->prox = aux2->prox; /// Retira nó da lista
    free(aux2); /// Libera memória alocada
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
