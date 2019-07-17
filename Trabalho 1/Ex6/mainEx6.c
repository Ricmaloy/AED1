#include<stdio.h>
#include<stdlib.h>
#include"Ex6.h"

int main(){
    int i=0,num;
    Lista p,q;

    p=cria_lista();
    q=cria_lista();


    printf("Insira valores para a lista: ");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        insere_ord(&p,num);
    }
    printf("Lista 1 : \n");
    printa_lista(p);

    printf("Insira valores para a lista: ");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        insere_ord(&q,num);
    }
    printf("Lista 2 : \n");
    printa_lista(q);

    printf("\nConferindo se as listas sao iguais...\n");
    if(iguais(&p,&q)==0)printf("Lista iguais !  :D\n\n");
    else printf("Listas diferentes !  ;-; \n\n");

    printf("Removendo o elemento 7 da lista 1...\n");
    remove_ord(&p,7);
    printa_lista(p);

    printf("\nConferindo se as listas sao iguais...\n");
    if(iguais(&p,&q)==0)printf("Lista iguais !  :D\n\n");
    else printf("Listas diferentes !  ;-; \n\n");

    printf("Removendo o elemento 7 da lista 2...\n");
    remove_ord(&q,7);
    printa_lista(q);

    printf("\nConferindo se as listas sao iguais...\n");
    if(iguais(&p,&q)==0)printf("Lista iguais !  :D\n\n");
    else printf("Listas diferentes !  ;-; \n\n");


    printf("Removendo o elemento 2 da lista 1...\n");
    remove_ord(&p,2);
    printa_lista(p);

    printf("Removendo o elemento 2 da lista 2...\n");
    remove_ord(&q,2);
    printa_lista(q);

    printf("\nConferindo se as listas sao iguais...\n");
    if(iguais(&p,&q)==0)printf("Lista iguais !  :D\n\n");
    else printf("Listas diferentes !  ;-; \n\n");

    printf("Removendo o elemento 5 da lista 2...\n");
    remove_ord(&q,5);
    printa_lista(q);

    printf("\nConferindo se as listas sao iguais...\n");
    if(iguais(&p,&q)==0)printf("Lista iguais !  :D\n\n");
    else printf("Listas diferentes !  ;-; \n\n");

    printf("Removendo o elemento 5 da lista 1...\n");
    remove_ord(&p,5);
    printa_lista(p);

    printf("\nConferindo se as listas sao iguais...\n\n");
    if(iguais(&p,&q)==0)printf("Lista iguais !  :D\n\n");
    else printf("Listas diferentes !  ;-; \n\n");




/*printf("Tamanho da lista: %d\n",tamanho(p));
    printa_lista(p);

    printf("Insira um valor a ser removido da lista: ");
    scanf("%d",&num);
    remove_ord(&p,num);

    printf("Tamanho da lista: %d\n",tamanho(p));
    printa_lista(p);
    printf("Maior elemento da lista = %d\n",maior(&p));

    printf("Removendo os elementos impares : \n");
    remove_imp(&p);
    printf("Tamanho da lista: %d\n",tamanho(p));
    printa_lista(p);

    printf("Maior elemento da lista = %d\n",maior(&p));
    printf("Conferindo se as listas sao iguais:\n");
    if(iguais(&p,&p)==0)printf("Lista iguais...\n");
    else printf("listas diferentes..\n");

    printf("Concatenando p e p:\n");

    Lista c=concat(&p,&p);
    printa_lista(c);
*/

return 0;
}
