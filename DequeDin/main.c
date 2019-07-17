#include <stdio.h>
#include <stdlib.h>
#include "DequeDin.h"

int main(){
    Deque d;
    int num;
    d = cria_deque();
    if(deque_vazio(d)==1)printf("ta vazio\n");
    insere_ini(d,5);
    insere_ini(d,11);
    insere_ini(d,12);
    insere_ini(d,15);
    insere_ini(d,16);
    imprime(d);
    remove_ini(d,&num);
    printf("\nnum retirado : %d\n");
    imprime(d);
    remove_fim(d,&num);
    printf("\nnum retirado : %d\n");
    imprime(d);

    return 0;
}
