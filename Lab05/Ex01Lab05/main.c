#include <stdio.h>
#include <stdlib.h>
#include "ex01Lab05.h"

int main(){
     Lista R;
     int i,a;
     R=cria_lista();
     menor(&R);
     printf("Tamanho da lista : %d\n",tamanho(&R));
     imprime_lista(&R);
     printf("Insira os elementos da lista: ");
     for(i=0;i<9;i++){
         scanf("%d",&a);
         insere_elem(&R,a);
     }
     menor(&R);
     printf("Tamanho da lista : %d\n",tamanho(&R));
     imprime_lista(&R);
     remove_elem(&R,8);
     menor(&R);
     printf("Tamanho da lista : %d\n",tamanho(&R));
     imprime_lista(&R);

     return 0;


}
