#include <stdio.h>
#include <stdlib.h>
#include  "ex01Lab05.h"

struct no{
    int info;
    struct no *prox;
};
Lista cria_lista(){
     return NULL;
}
int lista_vazia(Lista lst){
    if (lst == NULL)
        return 1;
    else
        return 0;
 }
 int insere_elem (Lista *lst, int elem){
     Lista N = (Lista) malloc(sizeof (struct no));
     if(N==NULL) return 0;
     N->info=elem;
     N->prox=*lst;
     *lst=N;
     return 1;
 }
 int remove_elem(Lista *lst, int elem){
     if (lista_vazia(lst) == 1)
        return 0;
     Lista aux = *lst;

     if (elem == (*lst)->info) {
     *lst = aux->prox;
     free(aux);
     return 1;
     }

     while (aux->prox != NULL && aux->prox->info != elem)
        aux = aux->prox;

     if (aux->prox == NULL)
        return 0;

     Lista aux2 = aux->prox;
     aux->prox = aux2->prox;
     free(aux2);
     return 1;
 }
 int imprime_lista(Lista *lst){

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
