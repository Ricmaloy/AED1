#include<stdio.h>
#include<stdlib.h>
#include"Ex3.h"
#define MAX 10

int main(){
int i=0,num;
    Lista *p,*q;

    p=cria_lista();
    q=cria_lista();


    printf("Adicione valores a lista 1 :");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        insere_ord(p,num);
    }
    imprime_lista(p);

    printf("Adicione valores a lista 2 :");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        insere_ord(q,num);
    }
    imprime_lista(q);

    Lista *c;
    c = cria_lista();
    c = intercala(p,q);
    imprime_lista(c);

    printf("Removendo o elemento 7 da lista 1...\n");
    remove_ord(p,7);

    printf("Lista 1 : \n");
    imprime_lista(p);

    printf("Lista 3 : \n");
    imprime_lista(c);

    printf("Reinicializando lista 3...\n");
    c = cria_lista();

    printf("Intercalando lista 1 e lista 2...\n");
    c = novointercala(p,q);
    imprime_lista(c);

    printf("Removendo o elemento 1 da lista 2...\n");
    remove_ord(q,1);
    printf("Lista 2: \n");
    imprime_lista(q);

    printf("Lista 3: \n");
    imprime_lista(c);

    printf("Reinicializando lista 3...\n");
    c = cria_lista();

    printf("Intercalando lista 1 e lista 2...\n");
    c = novointercala(p,q);
    imprime_lista(c);


    /*
    if(compara(p,q) == 0) printf("As listas sao iguais\n");
    else printf("As listas sao diferentes\n");

    remove_ord(p,7);
    imprime_lista(p);

    if(compara(p,q) == 0) printf("As listas sao iguais\n");
    else printf("As listas sao diferentes\n");

    remove_ord(q,7);
    imprime_lista(q);

    if(compara(p,q) == 0) printf("As listas sao iguais\n");
    else printf("As listas sao diferentes\n");


    remove_ord(p,2);
    imprime_lista(p);
    remove_ord(q,2);
    imprime_lista(q);

    if(compara(p,q) == 0) printf("As listas sao iguais\n");
    else printf("As listas sao diferentes\n");

    remove_ord(q,5);
    imprime_lista(q);
    if(compara(p,q) == 0) printf("As listas sao iguais\n");
    else printf("As listas sao diferentes\n");

    remove_ord(p,5);
    imprime_lista(p);
    if(compara(p,q) == 0) printf("As listas sao iguais\n");
    else printf("As listas sao diferentes\n");
    imprime_lista(p);


    Lista *a,*b,*c;
    a=cria_lista();
    b=cria_lista();
    c=cria_lista();

    imprime_lista(a);
    insere_ord(a,7);
    insere_ord(a,4);
    insere_ord(a,6);
    insere_ord(a,1);
    imprime_lista(a);
    imprime_lista(b);
    insere_ord(b,3);
    insere_ord(b,8);
    insere_ord(b,4);
    insere_ord(b,1);
    imprime_lista(b);

    imprime_lista(c);
    c=intercala(a,b);
    printf("\nTamanho da lista = %d\n",tamanho(c));
    printf("Lista intercalada: ");
    imprime_lista(c);
    printf("Maior elemento da lista = %d\n",maior(c));


    remove_par(c);
    printf("\nLista sem elementos pares : ");
    imprime_lista(c);
    printf("\nTamanho da lista = %d\n",tamanho(c));
    printf("Maior elemento da lista = %d\n",maior(c));
    printf("\n\n\n");

    imprime_lista(a);
    imprime_lista(b);
    int iguais=compara(a,b);
    if(iguais == 0)printf("As listas sao iguais...\n");
    else printf("As listas nao sao iguais...");
    printf("\n\n\n");

    */
}
