#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "Ex1.h"


Ponto* criar_ponto(){
    Ponto *p;
    p = (Ponto *) malloc(sizeof(Ponto));
    return p;
}

int set_value(Ponto *p, int X, int Y) {
    if(p==NULL) return 0;
    p->x=X;
    p->y=Y;
    return(1);
}

void libera(Ponto **p){
    free(*p);
    *p = NULL;
}

int dist(Ponto *p1, Ponto *p2){
    int resp;
    resp = sqrt(pow((p1->x)-(p2->x),2)+pow((p1->y)-(p2->y),2));
    return resp;
}

int maior(int d1,int d2,int d3,int d4,int d5,int d6){
    if( d1 > d2 && d1 > d3 && d1 > d4 && d1 > d5 && d1 > d6) return d1;
    if( d2 > d1 && d2 > d3 && d2 > d4 && d2 > d5 && d2 > d6) return d2;
    if( d3 > d2 && d3 > d1 && d3 > d4 && d3 > d5 && d3 > d6) return d3;
    if( d4 > d2 && d4 > d3 && d4 > d1 && d4 > d5 && d4 > d6) return d4;
    if( d5 > d2 && d5 > d3 && d5 > d4 && d5 > d1 && d5 > d6) return d5;
    if( d6 > d2 && d6 > d3 && d6 > d4 && d6 > d5 && d6 > d1) return d6;
}

int menor(int d1,int d2,int d3,int d4,int d5,int d6){
    if( d1 < d2 && d1 < d3 && d1 < d4 && d1 < d5 && d1 < d6) return d1;
    if( d2 < d1 && d2 < d3 && d2 < d4 && d2 < d5 && d2 < d6) return d2;
    if( d3 < d2 && d3 < d1 && d3 < d4 && d3 < d5 && d3 < d6) return d3;
    if( d4 < d2 && d4 < d3 && d4 < d1 && d4 < d5 && d4 < d6) return d4;
    if( d5 < d2 && d5 < d3 && d5 < d4 && d5 < d1 && d5 < d6) return d5;
    if( d6 < d2 && d6 < d3 && d6 < d4 && d6 < d5 && d6 < d1) return d6;
}
