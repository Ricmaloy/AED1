#include<stdio.h>
#include<stdlib.h>
#include"Ex4.h"

int main(){
    int num;
    Lista p,q;
    p=cria_lista();


    printf("Insira valores para a lista: ");
    for(int i=0;i<4;i++){
        scanf("%d",&num);
        insere_elem(&p,num);
    }
    printa_lista(p);

    printf("Removendo todas as ocorrencias do elemento 2 da lista...\n");
    remove_todos(&p,2);
    printa_lista(p);

    printf("Removendo todas as ocorrencias do elemento 5 da lista...\n");
    remove_todos(&p,5);
    printa_lista(p);

    printf("Removendo todas as ocorrencias do elemento 5 da lista...\n");
    remove_todos(&p,5);
    printa_lista(p);

    printf("Removendo todas as ocorrencias do elemento 7 da lista...\n");
    remove_todos(&p,7);
    printa_lista(p);

    printf("Removendo todas as ocorrencias do elemento 2 da lista...\n");
    remove_todos(&p,2);
    printa_lista(p);



    /*
    Lista r;
    r = concat(&p,&q);
    printa_lista(r);

    remove_elem(&p,7);
    printa_lista(p);
    printa_lista(r);

    r = cria_lista();
    r = concat(&p,&q);
    printa_lista(r);

    remove_todos(&p,4);
    printa_lista(p);

    insere_fim(&p,200);
    printa_lista(p);




    printa_lista(p);

    printf("Digite um valor para ser removido da lista: ");
    scanf("%d",&num);
    remove_elem(&p,num);
    printa_lista(p);

    printf("Digite um valor para ser removido totalmente da lista: ");
    scanf("%d",&num);
    remove_todos(&p,num);




    printa_lista(p);

    int w = tamanho(&p);
    printf("Tamanho da lista = %d\n",w);


    printf("Inserindo o elemento 10 no final da lista...\n");
    insere_fim(&p,10);
    printa_lista(p);

    remove_pares(&p);
    printf("Removendo todos os elementos impares da lista...\n");
    printa_lista(p);

    printf("Menor elemento = %d\n",menor(&p));

    printf("Concatenando :\n");
    Lista c=concat(&p,&p);
    printa_lista(c);

*/
return 0;
}
