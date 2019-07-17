#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lab04.h"

int main(){
    int i,a,b;
    Lista *li;
    li = criar_lista();
    print_lista(li);
    printf("Digite os numeros a serem inseridos:");
    for(i=0;i<11;i++){
        scanf("%d",&a);
        insere_elem(li,a);
    }
    print_lista(li);
    remove_elem(li,8);
    print_lista(li);
    li = criar_lista();
    print_lista(li);
}

