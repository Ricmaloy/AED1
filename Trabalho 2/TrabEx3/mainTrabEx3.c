#include <stdio.h>
#include <stdlib.h>
#include "TrabEx3.h"

int main(){
    int num;
    char c[100];
    //scanf("%s",c);
    Pilha *p;
    p = cria_pilha();
    imprime(p);
    push(p,'a');
    push(p,'r');
    push(p,'a');
    push(p,'r');
    push(p,'a');

    //imprime(p);
    //imprime_reverso(p);

    if(palindromo(p) == 1)printf("Eh palindromo\n");
    else printf("Nao eh palindromo\n");

    /*pop(p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    imprime(p);
    pop(p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    pop(p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    pop(p,&num);
    printf("Desempilhando o topo da pilha...\n");
    printf("Valor desempilhado : %d\n",num);
    printf("\n");
    imprime(p);
    */
}
