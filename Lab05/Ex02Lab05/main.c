#include<stdio.h>
#include<stdlib.h>
#include "Ex02Lab05.h"

int main(){

    int i,a;
    Lista li;
    li = cria_lista();
    imprime_lista(li);
    printf("Digite os numeros a serem inseridos:");
    for(i=0;i<9;i++){
        scanf("%d",&a);
        insere_ord(li,a);
    }
    imprime_lista(li);
    remove_ord(li,8);
    imprime_lista(li);
    li = cria_lista();
    imprime_lista(li);
    return 0;

}
