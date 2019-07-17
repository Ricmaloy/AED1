#include <stdio.h>
#include <stdlib.h>
#include "TrabEx1.h"

int main(){

    Lista *a;
    int num;
    a = cria_lista();
    insere_final(&a,1);
    insere_final(&a,3);
    insere_final(&a,2);
    imprime(&a);
    printf("%d",maior(&a));

  //  imprime(&a);
    return 0;
}
