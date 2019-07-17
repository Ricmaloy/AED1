#include <stdio.h>
#include <stdlib.h>
#include "FilaPriDin.h"

int main(){
    Fila f;
    int n;
    f = inicializa_fila();
    if(fila_vazia(f) == 1 ){
    }
    insere_ord(f,3);
    insere_ord(f,1);
    insere_ord(f,2);
    insere_ord(f,5);
    insere_ord(f,7);

    imprime(f);
    remove_ini(f,&n);
    printf("numero removido : %d\n",n);
    imprime(f);
    remove_ini(f,&n);
    printf("numero removido : %d\n",n);
    imprime(f);
    remove_ini(f,&n);
    printf("numero removido : %d\n",n);
    imprime(f);
    return 0;
}
