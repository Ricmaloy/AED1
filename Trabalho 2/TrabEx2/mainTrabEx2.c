#include <stdio.h>
#include <stdlib.h>
#include "TrabEx2.h"

int main(){

    Lista *a;
    a = cria_lista();
    int num;
    insere_elemento(&a,5);
    insere_elemento(&a,4);
    insere_elemento(&a,5);
    insere_elemento(&a,6);
    insere_elemento(&a,3);
    imprime(&a);
    printf("Tamanho da lista : %d\n\n",tamanho(&a));
    remove_maior(&a);
    imprime(&a);
    printf("Tamanho da lista : %d\n\n",tamanho(&a));


    /*remove_elemento(&a,5);
    imprime(&a);
    printf("Tamanho da lista : %d\n\n",tamanho(&a));
    remove_elemento(&a,5);
    imprime(&a);
    printf("Tamanho da lista : %d\n\n",tamanho(&a));
    */

    return 0;
}
