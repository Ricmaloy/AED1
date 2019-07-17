#include <stdio.h>
#include <stdlib.h>
#include "TrabEx13.h"

int main(){
    Lista R;
    int i,coef,potencia,qnt,ret;
    R = cria_lista();
    inicializa_lista(&R);
    imprime_lista(&R);
    printf("Insira a quantidade de termos para o polinomio :");
    scanf("%d",&qnt);
    for(i=0;i<qnt;i++){
        printf("Insira o valor do coeficiente :");
        scanf("%d",&coef);
        printf("Insira o valor da potencia :");
        scanf("%d",&potencia);
        insere_ord(&R,coef,potencia);
    }
    imprime_lista(&R);

    printf("Digite um valor para x de P(x): ");
    scanf("%d",&qnt);

    if(lista_vazia(R) == 1){
        printf("Resultado de P(%d) = 0\n",qnt);
    }else calcula_p(&R,qnt);



    printf("Digite o valor da potencia ao qual deseja retirar o termo correspondente : ");
    scanf("%d",&ret);
    remove_ord(&R,ret);
    imprime_lista(&R);


    printf("Digite um valor para x de P(x): ");
    scanf("%d",&qnt);

    if(lista_vazia(R) == 1){
        printf("Resultado de P(%d) = 0\n",qnt);
    }else calcula_p(&R,qnt);

    printf("\n");
    libera_lista(&R);

    printf("\ninserindo o -2x^3\n\n");
    insere_ord(&R,-2,3);
    imprime_lista(&R);

    printf("Digite um valor para x de P(x): ");
    scanf("%d",&qnt);

    if(lista_vazia(R) == 1){
        printf("Resultado de P(%d) = 0\n",qnt);
    }else calcula_p(&R,qnt);


    return 0;
}
