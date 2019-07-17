#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lab08.h"

int main(){
    int num;
    Pilha *p;
    p = cria_pilha();
    imprime(&p);
    push(&p,5);
    push(&p,4);
    push(&p,6);
    push(&p,3);
    imprime(&p);
    pop(&p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    imprime(&p);
    pop(&p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    pop(&p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    pop(&p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    printf("\n");
    imprime(&p);
    return 0;
}
