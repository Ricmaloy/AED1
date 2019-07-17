#include <stdio.h>
#include <stdlib.h>
#include "Lab12Ex02.h"


int main(){
    Fila f = cria_fila();
    int elem;

    imprime(f);

    insere_elem_ord(&f,2,4);
    insere_elem_ord(&f,4,1);
    insere_elem_ord(&f,6,3);
    insere_elem_ord(&f,3,5);

    imprime(f);

    remove_ini(f,&elem);

    printf("\nelemento retirado da fila: %d\n\n",elem);

    imprime(f);

    remove_ini(f,&elem);
    remove_ini(f,&elem);
    remove_ini(f,&elem);

    printf("\n");

    imprime(f);
}
