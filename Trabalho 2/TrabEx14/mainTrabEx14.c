#include <stdio.h>
#include <stdlib.h>
#include "TrabEx14.h"

int main(){
     Lista r;
     Listaest s;
     int i,a;
     r=cria_lista();  ///Lista Dinamica
     s=cria_listaest();   ///Lista Estatica
     insere_ordest(s,0);
     insere_ordest(s,0);
     insere_ordest(s,0);
     insere_ordest(s,0);
     imprime_lista(&r);
     imprime_listaest(s);

     int turno = 0,rodada = 1,opcao,errofatal = 0;

     while(tamanho(&r) != 4){
        printf("Qual movimento deseja realizar :\n1- Fazendeiro atravessa sozinho\n2- Fazendeiro atravessa com o lobo\n3- Fazendeiro atravessa com a cabra\n4- Fazendeiro atravessa com o repolho\n");
        scanf("%d",&opcao);
        if(turno == 0){
            if(opcao == 1){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(idahomemsozinho(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno--;
                } else
                printf("O fazendeiro esta atravessando sozinho o rio sentido Sul\n");
                imprime_listaest(s);
            }
            if(opcao == 2){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(idahomemlobo(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno--;
                } else
                printf("O fazendeiro esta atravessando junto com o lobo o rio sentido Sul\n");
                imprime_listaest(s);
            }
            if(opcao == 3){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(idahomemovelha(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno--;
                } else
                printf("O fazendeiro esta atravessando junto com a ovelha o rio sentido Sul\n");
                imprime_listaest(s);
            }
            if(opcao == 4){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(idahomemrepolho(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno--;
                } else
                printf("O fazendeiro esta atravessando junto com o repolho o rio sentido Sul\n");
                imprime_listaest(s);
            }
            if(perdi(s) == 1){
                errofatal++;
                break;
            }
            rodada++;
        }
        if(turno == 1){
            if(opcao == 1){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(voltahomemsozinho(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno++;
                } else
                printf("O fazendeiro esta atravessando o rio sozinho sentido Norte\n");
                imprime_listaest(s);
            }
            if(opcao == 2){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(voltahomemlobo(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno++;
                } else
                printf("O fazendeiro esta atravessando o rio junto com o lobo sentido Norte\n");
                imprime_listaest(s);
            }
            if(opcao == 3){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(voltahomemovelha(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno++;
                } else
                printf("O fazendeiro esta atravessando o rio junto com a ovelha sentido Norte\n");
                imprime_listaest(s);
            }
            if(opcao == 4){
                printf("Passo de exploracao numero %d:\n",rodada);
                imprime_listaest(s);
                if(voltahomemrepolho(s,&r) == 0){
                    printf("Ops, movimento invalido\n");
                    turno++;
                } else
                printf("O fazendeiro esta atravessando o rio junto com o repolho sentido Norte");
                imprime_listaest(s);
            }
            if(perdi(s) == 1){
                errofatal++;
                break;
            }
            rodada++;
        }

        if(turno <= 0)turno++;
        else turno--;
     }
     if(errofatal == 0) printf("\n\nPARABENS VOCE CONCLLUIU O DESAFIOOOOOOOO!!!!\n\n");
     else printf("\n\nOpa, voce nao concluiu o desafio\n\n");
     return 0;


}
