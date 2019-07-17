#include <stdio.h>
#include <stdlib.h>
#include "FilaPriEst.h"

int main(){
    Fila f;
    int num;
    f = cria_fila();
    insere_ord(f,6);
    insere_ord(f,90);
    insere_ord(f,7);
    insere_ord(f,5);
    insere_ord(f,4);
    insere_ord(f,3);
    print_fila(f);
    remove_ini(f,&num);
    printf("numero removido : %d\n",num);
    print_fila(f);
    removee(f,&num);
    printf("numero removido : %d\n",num);
    print_fila(f);
    remove_fim(f,&num);
    printf("numero removido : %d\n",num);
    print_fila(f);
    return 0;
}
