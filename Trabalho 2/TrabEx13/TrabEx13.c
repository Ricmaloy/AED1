#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TrabEx13.h"


struct no {
    int pot;
    int coef;
    struct no *prox;
};

Lista cria_lista() {
    return NULL;
}

int inicializa_lista(Lista *lst){
    insere_ini(lst,0,0);
    return 1;
}

int lista_vazia(Lista lst) {
if (lst == NULL)
    return 1;
else
    return 0;
}

int insere_ini(Lista *lst, int coefi,int potencia) {
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL) {
        return 0;
        }

    N->pot = potencia;
    N->coef = coefi;

    if (lista_vazia(*lst) || potencia <= (*lst)->pot) {
        N->prox = *lst;
        *lst = N;                                           ///POTENCIA MENOR QUE A DO 1º NO
        return 1;
    }
    return 1;
}

int insere_ord (Lista *lst, int coefi,int potencia) {
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL) {
        return 0;
        }

    N->pot = potencia;
    N->coef = coefi;

    if(potencia == 0){
        removee(lst);
    }

    if (lista_vazia(*lst) || potencia <= (*lst)->pot) {
        N->prox = *lst;
        *lst = N;                                           ///POTENCIA MENOR QUE A DO 1º NO
        return 1;
    }
    Lista aux = *lst;
    while (aux->prox != NULL && aux->prox->pot <= potencia)
        aux = aux->prox;
    if(aux->pot == potencia){
        aux->coef += coefi;                           ///MAIS DE UMA MESMA POTENCIA
    }else{
    N->prox = aux->prox;
    aux->prox = N;
    }
    return 1;
}

int removee(Lista *lst){
    Lista aux = *lst;
    if((*lst)->coef == 0 && (*lst)->pot == 0)
        (*lst) = aux->prox;
    return 1;
}

int remove_ord (Lista *lst, int potencia) {

    if (lista_vazia(*lst) == 1 || potencia < (*lst)->pot)
        return 0;

    Lista aux = *lst;
    if (potencia == (*lst)->pot ) {                     ///É O 1º TERMO
        (*lst) = aux->prox;

        free(aux);
    return 1;
    }

    while (aux->prox != NULL && aux->prox->pot != potencia)
        aux = aux->prox;

    if (aux->prox == NULL || aux->prox->pot > potencia )
        return 0;

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}


void imprime_lista(Lista *lst){
     Lista aux = *lst;
     //if(aux==NULL){
     //   printf("0x^0\n");
     //   return 0;
     //}

     while (aux!= NULL){
        if(aux->pot == 0){
            if(aux->coef >= 0)printf("+");
            printf("%dx",aux->coef);
        }else{
            if(aux->coef > 0)printf("+");
            printf("%dx^%d",aux->coef,aux->pot);
        }
        aux = aux->prox;
      }

      printf("\n");
      return 1;
}

void libera_lista(Lista *lst){
    if(lst != NULL){
        Lista *aux;
        while((*lst) != NULL){
            aux = (*lst);
            (*lst) = (*lst)->prox;
            free(aux);
        }
        free(lst);
    }
    insere_ini(lst,0,0);
}

int calcula_p(Lista *lst,int x){
    int res = 0;

    removee(lst);
    imprime_lista(lst);

//    printf("\n\n-->> %d\n\n",(pow(x,aux->pot)*aux->coef));

    Lista aux = (*lst);
    if(aux==NULL) return 0;

    while(aux->prox != NULL){
        res += (pow(x,aux->pot))*aux->coef;
        aux=aux->prox;
    }
        res += (pow(x,aux->pot))*aux->coef;
    printf("Resultado de P(%d) = %d\n",x,res);
}
