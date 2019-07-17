#include <stdio.h>
#include  "TrabEx14.h"
#include <stdlib.h>

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
        printf("Lista final : { }\n");
        return 0;
     }
     printf("Lista final : {");
     while (aux!= NULL){
        printf("%d ",aux->info);
        aux = aux->prox;
      }
      printf("}\n");
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

///Lista estatica


#define max 4

struct listaest {
    int no[max];
    int Fim;
};

Listaest cria_listaest() {
    Listaest lst;
    lst = (Listaest) malloc(sizeof(struct listaest));
        lst->Fim = 0;
    return lst;
}

int lista_vaziaest(Listaest lst){
    if (lst->Fim == 0)
        return 1;
    else
        return 0;
}

int lista_cheiaest(Listaest lst){
    if(lst->Fim == max)
        return 1;
    else
        return 0;
}

int insere_ordest(Listaest lst, int elem) {
    if (lst == NULL || lista_cheiaest(lst) == 1)
        return 0;

    if(lista_vaziaest(lst) == 1 || elem >= lst->no[lst->Fim-1])
        lst->no[lst->Fim] = elem;

    else {
    int i, aux = 0;
    while (elem >= lst->no[aux])
        aux++;
    for (i = lst->Fim; i > aux; i--)
        lst->no[i] = lst->no[i-1];
        lst->no[aux] = elem;
    }
    lst->Fim++;
return 1;

}

void imprime_listaest(Listaest lst){
    int i=0;
    printf("\nLista parcial  = {");
    for(i=0;i<lst->Fim;i++){
        printf("%d",lst->no[i]);
        if(i<lst->Fim-1)
            printf(" ");
    }
    printf("}\n\n");
 }

int idahomemsozinho(Listaest lst,Lista *lst2){
    if(lst->no[0] == 1){
        return 0;
    }
    lst->no[0] = 1;
    insere_elem(lst2,1);
    return 1;
}

int voltahomemsozinho(Listaest lst,Lista *lst2){
    lst->no[0] = 0;
    remove_elem(lst2,1);
    return 1;
}

int idahomemlobo(Listaest lst,Lista *lst2){
    if(lst->no[1] == 1){
        return 0;
    }
    lst->no[0] = 1;
    lst->no[1] = 1;
    insere_elem(lst2,1);
    insere_elem(lst2,2);
    return 1;
}

int voltahomemlobo(Listaest lst,Lista *lst2){
    if(lst->no[1] == 0){
        return 0;
    }
    lst->no[0] = 0;
    lst->no[1] = 0;
    remove_elem(lst2,1);
    remove_elem(lst2,2);
    return 1;
}

int idahomemovelha(Listaest lst,Lista *lst2){
    if(lst->no[2] == 1 ){
        return 0;
    }
    lst->no[0] = 1;
    lst->no[2] = 1;
    insere_elem(lst2,1);
    insere_elem(lst2,3);
    return 1;
}

int voltahomemovelha(Listaest lst,Lista *lst2){
    if(lst->no[2] == 0){
        return 0;
    }
    lst->no[0] = 0;
    lst->no[2] = 0;
    remove_elem(lst2,1);
    remove_elem(lst2,3);
    return 1;
}

int idahomemrepolho(Listaest lst,Lista *lst2){
    if(lst->no[3] == 1){
        return 0;
    }
    lst->no[0] = 1;
    lst->no[3] = 1;
    insere_elem(lst2,1);
    insere_elem(lst2,4);
    return 1;
}

int voltahomemrepolho(Listaest lst,Lista *lst2){
    if(lst->no[3] == 0){
        return 0;
    }
    lst->no[0] = 0;
    lst->no[3] = 0;
    remove_elem(lst2,1);
    remove_elem(lst2,4);
    return 1;
}

int perdi(Listaest lst){
    if((lst->no[0] == 1 & lst->no[1] == 0 && lst->no[2] == 0) || (lst->no[0] == 0 & lst->no[1] == 1 && lst->no[2] == 1) || (lst->no[0] == 1 && lst->no[2] == 0 && lst->no[3] == 0) || (lst->no[0] == 0 && lst->no[2] == 1 && lst->no[3] == 1)){
       return 1;
    }else
        return 0;
}
