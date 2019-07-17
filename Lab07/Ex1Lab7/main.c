#include <stdio.h>
#include <stdlib.h>
#include "Ex1Lab7.h"

int main(){
    Lista *a;
    int num;
    a = cria_lista();
    insere_final(&a,5);
    insere_final(&a,4);
    insere_final(&a,6);
    imprime(&a);
    printf("Tamanho da lista: %d\n",tamanho(&a));
    remove_inicio(&a,&num);
    printf("Valor removido : %d\n",num);
    imprime(&a);
    printf("Tamanho da lista: %d\n",tamanho(&a));
    remove_inicio(&a,&num);
    printf("Valor removido : %d\n",num);
    imprime(&a);
    printf("Tamanho da lista: %d\n",tamanho(&a));
    remove_inicio(&a,&num);
    printf("Valor removido : %d\n",num);
    imprime(&a);
    printf("Tamanho da lista: %d\n",tamanho(&a));
    return 0;
}



