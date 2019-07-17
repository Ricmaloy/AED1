#include <stdio.h>
#include <stdlib.h>
#include "TrabEx6.h"

int main(){

    Fila p;
    int num;
    p = cria_fila();
    if(fila_vazia(p) == 1)printf("A fila esta vazia\n");
    else printf("A fila nao esta vazia\n");
    imprime(p);
    insere_fim(p,5);
    insere_fim(p,4);
    insere_fim(p,6);
    insere_fim(p,3);
    if(fila_vazia(p) == 1)printf("A fila esta vazia\n");
    else printf("A fila nao esta vazia\n");
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

}
