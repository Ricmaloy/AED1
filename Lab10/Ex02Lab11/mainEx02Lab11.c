#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lab11.h"

int main(){
    Fila p;
    int num;
    p = cria_fila();
    imprime(p);
    insere_fim(p,5);
    insere_fim(p,4);
    insere_fim(p,6);
    insere_fim(p,3);
    imprime(p);
    remove_ini(p,&num);
    printf("Valor removido : %d\n",num);
    imprime(p);
    remove_ini(p,&num);
    printf("Valor removido : %d\n",num);
    remove_ini(p,&num);
    printf("Valor removido : %d\n",num);
    remove_ini(p,&num);
    printf("Valor removido : %d\n",num);
    imprime(p);


    return 0;
}
