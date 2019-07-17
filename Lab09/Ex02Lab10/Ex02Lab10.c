#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex02Lab10.h"

struct Pilha{
	int info;
	struct Pilha *prox;
};

pilha cria_pilha(){
	return NULL;
}

int pilha_vazia(pilha p){
	if(p==NULL) return 1;
	return 0;
}

int push(pilha *p, int x){
	pilha aux=(pilha)malloc(sizeof(struct Pilha));
	if(aux==NULL) return 0;
	aux->info=x;
	aux->prox=*p;
	*p=aux;
	return 1;
}

int pop(pilha *p, int *x){
	if(pilha_vazia(*p)) return 0;
	pilha aux=*p;
	*x=aux->info;
	*p=(*p)->prox;
	free(aux);
	return 1;
}

int ler_topo(pilha p, int *x){
	if(pilha_vazia(p)) return 0;
	*x=p->info;
	return 1;
}

int print(pilha p){
	if(p==NULL) return 0;
	pilha aux=p;
	while(aux!=NULL){
		printf("%d\n", aux->info);
		aux=aux->prox;
	}
	return 1;
}

int escopo_valido(const char *s){
	if(s==NULL) return 0;
	pilha p=cria_pilha();
	int x;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			push(&p,s[i]);
		}
		if(s[i]==')'){
			if(!pop(&p,&x)) return 0;
			if(x!='(') return 0;
		}
		if(s[i]==']'){
			if(!pop(&p,&x)) return 0;
			if(x!='[') return 0;
		}
		if(s[i]=='}'){
			if(!pop(&p,&x)) return 0;
			if(x!='{') return 0;
		}
	}
	if(pilha_vazia(p)) return 1;
	else return 0;
}
