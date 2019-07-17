#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TrabEx4.h"

struct no{
int info;
struct no* prox;
};

/*struct noo{
char infoo;
struct noo* proxx;
};

PPilha ccria_pilha (){
return NULL;
}
*/
Pilha cria_pilha (){
return NULL;
}

int pilha_vazia (Pilha p){
if (p == NULL)
return 1;
else
return 0;
}

int push (Pilha *p, int elem){
Pilha N = (Pilha) malloc(sizeof(struct no));
if (N == NULL)
return 0;
N->info = elem;
N->prox = *p;
*p = N;
return 1;
}
/*
int pushchar (PPilha *p, char elem){
PPilha N = (PPilha) malloc(sizeof(struct noo));
if (N == NULL)
return 0;
N->infoo = elem;
N->proxx = *p;
*p = N;
return 1;
}
*/
int pop (Pilha *p, int *elem){
if (pilha_vazia(*p) == 1)
return 0;
Pilha aux = *p;
*elem = aux->info;
*p = aux->prox;
free(aux);
return 1;
}
/*
int popchar (PPilha *p, char *elem){
if (pilha_vazia(*p) == 1)
return 0;
PPilha aux = *p;
*elem = aux->infoo;
*p = aux->proxx;
free(aux);
return 1;
}
*/

int le_topo (Pilha *p, int *elem){
if (pilha_vazia(*p) == 1)
return 0;
*elem = (*p)->info;
return 1;
}

void imprime(Pilha *p){
    int i = 0;
     Pilha aux = *p;
     if(aux==NULL){
        printf("Pilha : | |\n\n");
     }
     printf("Pilha : ");
     while (aux!= NULL){
        if(i == 0){
            printf("|%d|\n",aux->info);
            i++;
            aux = aux->prox;
        }else{
        printf("        |%d|\n",aux->info);
        aux = aux->prox;
      }
      }
      printf("\n");
}

int tamanho(Pilha *p){
    int i,cont = 0;
    Pilha aux = *p;
    if(aux==NULL){
        return 0;
    }
    cont++;
    if(aux->prox == NULL) return 1;
    while(aux != NULL){
        aux = aux->prox;
        cont++;
        if(aux->prox == NULL) break;
    }
    return cont;
}

int palindromo(char *s){
    int i = 0,num,elem;
    char c;
    Pilha aux;
    aux = cria_pilha();
    while(i<strlen(s)){
        if(s[i] != ' ')
        push(&aux,tolower(s[i]));
        i++;
    }
    i = 0;
    while(i<strlen(s)){
        if(s[i] != ' '){
            pop(&aux,&num);
            s[i] = tolower(s[i]);
            elem = s[i];
            if(elem != num){
                return 0;
            }
        }
        i++;
    }
    return 1;

}

/*
int palindromo(char *s){

    char c;
    PPilha pi;
    pi = ccria_pilha();
    for(int i = 0;i<strlen(s);i++){
        pushchar(&pi,s[i]);
    }
    for(int i = 0;i<strlen(s);i++){
        popchar(&s,&c);
        if(c != s[i]){
            return 0;
            printf("entro aqui\n");
        }
    }
    return 1;
}
*/

int pares_e_impares(Pilha *p,Pilha *par,Pilha *impar){

    srand(time(0));
    for(int i=0;i<10;i++){
        push(p,rand()%10);
    }
    Pilha aux = *p;

    while(aux != NULL){
		if(aux->info%2 == 0) push(par,aux->info);
		else push(impar, aux->info);
		aux = aux->prox;
	}
	return 1;
}
