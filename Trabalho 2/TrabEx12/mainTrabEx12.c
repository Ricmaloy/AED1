#include <stdio.h>
#include <stdlib.h>
#include "TrabEx12.h"

int main(){
    Lista *a;
    char nome[25],soldelimi[25];
    int num,opcao,tam;
    a = cria_lista();
    srand(time(0));
    printf("Digite a quantidade de soldados incurralados : ");
    scanf("%d",&num);
    for(int i = 0; i < num ; i++){
        scanf("%s",nome);
        insere_final(&a,nome);
    }

    int f=1;
    printf("Selecione o modo de inicio de contagem :\n      1- A partir do primeiro soldado\n      2- A partir de um soldado sorteado aleatoriamente\n      3- A partir de um soldado especifico\n");

    srand(time(0));
    int rnum = rand()%tamanho(&a);
    rnum = 4;    //1º CASO
    //rnum = 3;       //2º CASO
    //rnum = 5;      //3º CASO
    num = rnum-1;
    while(tamanho(&a) > 1){
        if(f==1){
            srand(time(0));
            scanf("%d",&opcao);
            printf("Numero sorteado : %d\n",rnum);
            if(opcao == 1){
                if(num == tamanho(&a) || num == 0){
                remove_inicio(&a,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);
                }else if(num == tamanho(&a)-1){
                remove_fim(&a,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);               ///RETIRA UM SOLDADO
                }else {
                remove_soldado(&a,num,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);
                }
            }else if(opcao == 2){
                int alesold;
                srand(time(0));
                alesold = rand()%tamanho(&a);
                //alesold = 3;   //2º CASO
                sorteiasoldado(&a,alesold,&soldelimi);
                ///printf("num sorteado para escolher o soldado: %d\n",alesold);
                printf("soldado sorteado para comecar a contagem : %s\n",soldelimi);   ///SORTEIA O SOLDADO PARA COMEÇAR


                if(num == tamanho(&a) || num == 0){
                remove_inicio(&a,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);
                }else if(num == tamanho(&a)-1){
                remove_fim(&a,&soldelimi);                 ///RETIRA UM SOLDADO
                printf("Soldado eliminado : %s\n",soldelimi);
                } else{
                remove_soldado(&a,num,&soldelimi);
                printf("soldado eliminado : %s\n",soldelimi);
                }

            }else if(opcao == 3){
                int alesold;
                printf("Digite o nome do soldado que procura : ");

                scanf("%s",soldelimi);
                alesold = procura_soldado(&a,soldelimi);          ///COLOCA O SOLDADO COM O NOME DADO DA CABEÇA DA LISTA
               // printf("numero do soldado : %d\n",alesold);
                sorteiasoldado(&a,alesold,&soldelimi);

                if(num == tamanho(&a) || num == 0){
                remove_inicio(&a,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);
                }else if(num == tamanho(&a)-1){
                remove_fim(&a,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);               ///RETIRA UM SOLDADO
                }else {
                remove_soldado(&a,num,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);
                printf("\n");
                }


            }

         f=0;
        } else{
                srand(time(0));
                if(num == tamanho(&a) || num == 0){
                remove_inicio(&a,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);
                }else if(num == tamanho(&a)-1){
                remove_fim(&a,&soldelimi);
                printf("Soldado eliminado : %s\n",soldelimi);               ///RETIRA UM SOLDADO
                } else{
                remove_soldado(&a,num,&soldelimi);
                printf("soldado eliminado : %s\n",soldelimi);
                }

            }
    }
        printf("\n\n");
        printf("O sobrevivente foi : ");
        imprimesobrevivente(&a);

    return 0;
}



