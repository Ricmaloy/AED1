#include<stdio.h>
#include "Ex02Lab05.h"
#define max 4

struct lista {
    int no[max];
    int Fim;
};

Lista cria_lista() {
    Lista lst;
    lst = (Lista) malloc(sizeof(struct lista));
    if(lst != NULL)
        lst->Fim = 0; /// Lista vazia
    return lst;
}

int lista_vazia(Lista lst){
    if (lst->Fim == 0)
        return 1; /// Lista vazia
    else
        return 0; /// Lista NÃO vazia
}

int lista_cheia(Lista lst){
    if(lst->Fim == max)
        return 1; /// Lista cheia
    else
        return 0; /// Lista NÃO cheia
}

int insere_ord(Lista lst, int elem) {
    if (lst == NULL || lista_cheia(lst) == 1)
        return 0; // Falha

    if(lista_vazia(lst) == 1 || elem >= lst->no[lst->Fim-1])
        lst->no[lst->Fim] = elem;

    else {
    int i, aux = 0;
    while (elem >= lst->no[aux]) // Percorrimento
        aux++;
    for (i = lst->Fim; i > aux; i--)
        lst->no[i] = lst->no[i-1];
        lst->no[aux] = elem;
    }
    lst->Fim++;
return 1;

}

int remove_ord(Lista lst, int elem){
    if(lst == NULL || lista_vazia(lst) == 1 || elem < lst->no[0] || elem > lst->no[lst->Fim-1])
        return 0; /// Falha
    int i, Aux = 0;

    /// Percorre até achar o elem ou nó maior, ou final de lista
    while (Aux < lst->Fim && lst->no[Aux] < elem)
        Aux++;

    if (Aux == lst->Fim || lst->no[Aux] > elem) /// elem
        return 0; /// Falha

    /// Deslocamento à esq. do sucessor até o final da lista
    for (i = Aux+1; i < lst->Fim; i++)
        lst->no[i-1] = lst->no[i];

        lst->Fim--; /// Decremento do campo Fim
    return 1; /// Sucesso
}

void imprime_lista(Lista lst){
    int i=0;
    printf("\nLista = {");
    for(i=0;i<lst->Fim;i++){
        printf("%d",lst->no[i]);
        if(i<lst->Fim-1)
            printf(" ");
    }
    printf("}\n\n");
 }



