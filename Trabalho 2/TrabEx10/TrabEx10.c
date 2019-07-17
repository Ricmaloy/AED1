#include <stdio.h>
#include "TrabEx10.h"
#include <stdlib.h>
#define max 20
struct pilha {
int vetor[max];
int topo;
};

Pilha cria_pilha(){
Pilha p;
p = (Pilha) malloc (sizeof (struct pilha));
if (p != NULL)
p->topo = -1;
return p;
}

int pilha_vazia(Pilha p){
if (p->topo == -1)
return 1;
else
return 0;
}

int pilha_cheia(Pilha p){
if (p->topo == max-1)
return 1;
else
return 0;
}

int push(Pilha p, int elem){
if (p == NULL || pilha_cheia(p) == 1)
return 0;

    p->topo++;
    p->vetor[p->topo] = elem;
return 1;
}

int pop(Pilha p, int *elem){
if (p == NULL || pilha_vazia(p) == 1)
return 0;

*elem = p->vetor[p->topo];
p->topo--;

return 1;
}

int le_topo(Pilha p, int *elem){
if (p == NULL || pilha_vazia(p) == 1)
return 0;
*elem = p->vetor[p->topo];
return 1;
}


void imprimebin(Pilha p){
    int i=0;
    if(pilha_vazia(p) == 1){
        printf("Bin = \n");
    }else{
    printf("\nBin = ");
    for(i=p->topo;i>=0;i--){
        if(i == p -> topo){
            printf("%d",p->vetor[i]);
        }else
        printf("%d",p->vetor[i]);
    }
    }
    printf("\n");
 }

void imprimeoct(Pilha p){
    int i=0;
    if(pilha_vazia(p) == 1){
        printf("Oct = \n");
    }else{
    printf("\nOct = ");
    for(i=p->topo;i>=0;i--){
        if(i == p -> topo){
            printf("%d",p->vetor[i]);
        }else
        printf("%d",p->vetor[i]);
    }
    }
    printf("\n");
}

void imprimehexa(Pilha p){
    int i=0;
    if(pilha_vazia(p) == 1){
        printf("Hexa = \n");
    }else{
    printf("\nHexa = ");
    for(i=p->topo;i>=0;i--){
        if(i == p -> topo){
            if(p->vetor[i] == 10)printf("A");
            else if(p->vetor[i] == 11)printf("B");
            else if(p->vetor[i] == 12)printf("C");
            else if(p->vetor[i] == 13)printf("D");
            else if(p->vetor[i] == 14)printf("E");
            else if(p->vetor[i] == 14)printf("F");
            else printf("%d",p->vetor[i]);
        }else{
        if(p->vetor[i] == 10)printf("A");
            else if(p->vetor[i] == 11)printf("B");
            else if(p->vetor[i] == 12)printf("C");
            else if(p->vetor[i] == 13)printf("D");
            else if(p->vetor[i] == 14)printf("E");
            else if(p->vetor[i] == 14)printf("F");
            else printf("%d",p->vetor[i]);
        }
    }
    }
    printf("\n");
}


Pilha decpbin(int elem){
    int resto;
    Pilha *p;
    p = cria_pilha();
    while(1){
        if(elem == 0 || pilha_cheia(p) == 1){
            break;
        }
        resto = elem%2;
        elem = elem/2;
        push(p,resto);
    }
    return p;
 }


Pilha decpoct(int elem){
    int resto;
    Pilha *p;
    p = cria_pilha();
    while(1){
        if(elem <= 7 ){
            push(p,elem);
            break;
        }
        resto = elem%8;
        elem = elem/8;
        push(p,resto);
    }
    return p;
}

Pilha decphexa(int elem){
    int resto;
    Pilha *p;
    p = cria_pilha();
    while(1){
        if(elem <= 15){
            push(p,elem);
            break;
        }
        resto = elem%16;
        elem = elem/16;
        push(p,resto);
    }
    return p;
}
