#include<stdio.h>
#include "racional2.h"

int main(){
    int i,a,b;
    Lista *li;
    li = criar_lista();
    print_lista(li);
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
