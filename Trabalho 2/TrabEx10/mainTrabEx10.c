#include <stdio.h>
#include <stdlib.h>
#include "TrabEx10.h"

int main(){
    int num,escolha;
    while(1){
    printf("Escolha uma conversao de decimal para : \n1-Binario         2-Octal         3-Hexadecimal           4-Sair\n\n");
    scanf("%d",&escolha);

    if(escolha == 1){
    Pilha *p;
    p = cria_pilha();
    printf("Digite um valor a ser convertido em binario: ");
    scanf("%d",&num);
    p = decpbin(num);
    imprimebin(p);
    printf("\n\n");
    }

    if(escolha == 2){
    Pilha *q;
    printf("Digite um valor a ser convertido em octal: ");
    scanf("%d",&num);
    q = decpoct(num);
    imprimeoct(q);
    printf("\n\n");
    }

    if(escolha == 3){
    Pilha *r;
    printf("Digite um valor a ser convertido em hexadecimal: ");
    scanf("%d",&num);
    r = decphexa(num);
    imprimehexa(r);
    printf("\n\n");
    }

    if(escolha == 4)break;

    }
    return 0;
}
