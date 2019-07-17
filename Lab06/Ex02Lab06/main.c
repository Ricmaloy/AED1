#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lab06.h"

int main()
{
    int a,i;
    Lista R;
    R = cria_lista();
    imprime_lista(&R);
    printf("Insira os elementos da lista :");
    for(i=0;i<9;i++){
        scanf("%d",&a);
          insere_ord(&R,a);
    }
    imprime_lista(&R);
    remove_ord(&R,8);
    imprime_lista(&R);
    remove_ord(&R,4);
    imprime_lista(&R);
    remove_ord(&R,8);
    imprime_lista(&R);
    return 0;
}
