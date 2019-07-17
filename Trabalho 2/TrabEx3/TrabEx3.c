#include <stdio.h>
#include <stdlib.h>
#include "TrabEx3.h"
#define max 20

struct pilha {
char vetor[max];
char topo;
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


void imprime(Pilha p){
    int i=0;
    if(pilha_vazia(p) == 1){
        printf("Pilha = | |\n");
    }else{
    printf("\nPilha = ");
    for(i=p->topo;i>=0;i--){
        if(i == p -> topo){
            printf("|%c|\n",p->vetor[i]);
        }else
        printf("        |%c|\n",p->vetor[i]);

    }
    }
    printf("\n");
 }


void imprime_reverso(Pilha p){
    int i=0;
    if(pilha_vazia(p) == 1){
        printf("Pilha = | |\n");
    }else{
    printf("\nPilha = ");
    for(i=0;i<=p->topo;i++){
        if(i == 0){
            printf("|%c|\n",p->vetor[i]);
        }else
        printf("        |%c|\n",p->vetor[i]);

    }
    }
    printf("\n");
}

int palindromo(char *s){
    if(s == NULL) return 0;
    int i,x;

    Pilha p=cria_pilha();

    for(i=0; s[i]!='\0' ;i++){
        if(s[i] != ' ')
            push(p,tolower(s[i]));
    }
    for(i=0;!pilha_vazia(p);i++){
        if(s[i] != ' '){
            pop(p,&x);
            if(x != tolower(s[i])) return 0;
        }
    }

    return 1;
}
