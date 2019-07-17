#include<stdio.h>
#include<stdlib.h>
#include"Ex5.h"

int main(){
    int i,num;
    Lista p;
    p=cria_lista();
    printa_lista(p);

    printf("Insira numeros para a sua lista: ");
    for(i=0;i<6;i++){
        scanf("%d",&num);
        insere_ord(&p,num);
    }
    printa_lista(p);

    printf("Insira um numero para retirar da lista: ");
    scanf("%d",&num);
    remove_ord(&p,num);
    printa_lista(p);


    Lista c=concat(&p,&p);
    printf("Lista c:\n");
    printa_lista(c);
    printf("Maior elem da lista  = %d\n",maior(&c));
    printf("Tamanho da lista = %d\n",tamanho(&c));

    if(iguais(&p,&c)==0)printf("As listas são iguais\n");
    else printf("As listas sao diferentes\n");


    printf("Removendo todos os elementos pares da lista...\n");
    remove_imp(&c);
    printa_lista(c);





return 0;
}
