#include<stdio.h>
#include<stdlib.h>
#include"TrabEx9.h"

int main(){
    Deque f=cria_deque();
    int x,n,i;

    printf("Qnts numeros deseja inserir no inicio?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        scanf("%d",&num);
        insere_ini(f,num);
    }
    printf("Qnts numeros deseja inserir no fim ?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        scanf("%d",&num);
        insere_fim(f,num);
    }
    printa_deque(f);

        int num;
        remove_ini(f,&num);
        printf("numero removido do inicio =  %d \n",num);

    printa_deque(f);


        remove_fim(f,&num);
        printf("numero removido do fim = %d \n",num);
        printa_deque(f);
return 0;
}
