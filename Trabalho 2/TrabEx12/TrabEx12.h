#include <stdio.h>
#include <stdlib.h>

typedef struct no * Lista;
Lista cria_lista();
int lista_vazia (Lista lst);
int insere_final (Lista *lst, char name[]);
int remove_soldado(Lista *lst,int n, char *soldado[]);
int remove_inicio (Lista *lst, char *name[]);
int remove_fim(Lista *lst,char *soldado[]);
void sorteiasoldado(Lista *lst,int num,char *soldado[]);
void imprimesobrevivente(Lista *lst);
int procura_soldado(Lista *lst, char soldado[]);
void imprime(Lista *lst);
int tamanho(Lista *lst);

