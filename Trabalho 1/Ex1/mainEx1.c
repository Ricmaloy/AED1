#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"

int main(){
    Ponto *p1, *p2, *p3, *p4 ;
    int n12, n13 ,n14, n23, n24 ,n34;
    int nx,ny;
    p1 = criar_ponto();
    p2 = criar_ponto();
    p3 = criar_ponto();
    p4 = criar_ponto();

    printf("Digite as coordenadas do primeiro ponto (x,y) : ");
    scanf("%d %d",&nx,&ny);
    if(set_value(p1,nx,ny) == 0){
        printf("Erro ao criar o ponto.");
        return -1;
    }

    printf("Digite as coordenadas do segundo ponto (x,y) : ");
    scanf("%d %d",&nx,&ny);
    if(set_value(p2,nx,ny) == 0){
        printf("Erro ao criar o ponto.");
        return -1;
    }

    printf("Digite as coordenadas do terceiro ponto (x,y) : ");
    scanf("%d %d",&nx,&ny);
    if(set_value(p3,nx,ny) == 0){
        printf("Erro ao criar o ponto.");
        return -1;
    }

    printf("Digite as coordenadas do quarto ponto (x,y) : ");
    scanf("%d %d",&nx,&ny);
    if(set_value(p4,nx,ny) == 0){
        printf("Erro ao criar o ponto.");
        return -1;
    }

    n12 = dist(p1,p2);
    n13 = dist(p1,p3);
    n14 = dist(p1,p4);
    n23 = dist(p2,p3);
    n24 = dist(p2,p4);
    n34 = dist(p3,p4);


    printf("Distancia entre os pontos 1 e 2 : %d.\n",n12);
    printf("Distancia entre os pontos 1 e 3 : %d.\n",n13);
    printf("Distancia entre os pontos 1 e 4 : %d.\n",n14);
    printf("Distancia entre os pontos 2 e 3 : %d.\n",n23);
    printf("Distancia entre os pontos 2 e 4 : %d.\n",n24);
    printf("Distancia entre os pontos 3 e 4 : %d.\n",n34);


    printf("Maior distancia entre pontos : %d.\n",maior(n12,n13,n14,n23,n24,n34));

    printf("Menor distancia entre pontos : %d.\n",menor(n12,n13,n14,n23,n24,n34));

    libera(p1);
    libera(p2);
    libera(p3);
    libera(p4);

}
