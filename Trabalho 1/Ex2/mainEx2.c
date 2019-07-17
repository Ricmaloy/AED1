#include <stdio.h>
#include <stdlib.h>
#include "Ex2.h"

int main(){
    int i=0,num;
    Lista *p,*q;

    p = cria_lista();
    q = cria_lista();

    printf("Insira os numeros da lista: ");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        insere_elem(p,num);
    }
    print_lista(p);

    printf("Insira os numeros da lista: ");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        insere_elem(q,num);
    }
    print_lista(q);

    Lista *c;
    c = cria_lista();
    c = concat(p,q,c);
    print_lista(c);

    remove_elem(p,7);
    printf("lista L1 :\n");
    print_lista(p);

    printf("lista L3 :\n");
    print_lista(c);

    printf("Reinicializando L3...\n");
    c = cria_lista();
    c = concat(q,p,c);
    printf("lista L3 :\n");
    print_lista(c);

    printf("Removendo elemento 1 da segunda lista...\n");
    remove_elem(q,1);

    printf("lista L2 :\n");
    print_lista(q);
    printf("lista L3 :\n");
    print_lista(c);

    printf("Reinicializando L3...\n");
    c = cria_lista();
    c = concat(p,q,c);
    printf("lista L3 :\n");
    print_lista(c);

  /*  print_lista(p);

    printf("Insira um numero para ser retirado totalmente da lista: ");
    scanf("%d",&num);
    remove_todos(p,num);
    print_lista(p);

    printf("Insira um valor para o inicio da lista: ");
    scanf("%d",&num);
    insere1(p,num);

    print_lista(p);


    printf("Digite um valor a ser removido da lista: ");
    scanf("%d",&num);
    remove_elem(p,num);

    print_lista(p);

    printf("Removendo todos os valores impares...\n");
    remove_imp(p);
    print_lista(p);

    if(menor(p) == 1000)printf("Nao foi possivel calcular o menor valor.\n");
    else
    printf("O menor valor da lista eh: %d\n",menor(p));

    Lista *c,*a,*b;
    c=cria_lista();
    b=cria_lista();
    a=cria_lista();

    insere1(a,4);
    insere1(a,3);
    insere1(a,2);
    insere1(a,1);
    insere1(b,8);
    insere1(b,7);
    insere1(b,6);
    insere1(b,5);
    printf("A : ");
    print_lista(a);
    printf("B :");
    print_lista(b);

    c = concat(a,b,c);
    printf("Lista concatenada de A e B :");
    print_lista(c);
*/

   /* remove_todos(p,2);
    print_lista(p);
    remove_todos(p,5);
    print_lista(p);
    remove_todos(p,5);
    print_lista(p);
    remove_todos(p,7);
    print_lista(p);
    remove_todos(p,2);
    print_lista(p);
    return 0;
    */
}
