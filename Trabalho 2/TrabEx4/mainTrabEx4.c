#include <stdio.h>
#include <stdlib.h>
#include "TrabEx4.h"

int main(){
    char l[100];
   /* scanf("%[^\n]",l);
    if(palindromo(&l) == 1){
        printf("Eh palindromo\n");
    }else
        printf("Nao eh palindromo\n");
*/
 Pilha p,p1,p2;

    p  = cria_pilha();
	p1 = cria_pilha();
	p2 = cria_pilha();
    pares_e_impares(&p,&p1,&p2);
    imprime(&p1);
    imprime(&p2);












    //Pilha *p;
    //p = cria_pilha();
   // imprime(&p);
   // push(&p,5);
  //  push(&p,4);
   // push(&p,6);
   // push(&p,3);
   // imprime(&p);
   // printf("%d" , tamanho(&p));
    /*pop(&p,&num);
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
    */

    return 0;
}
