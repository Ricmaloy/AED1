#include <stdio.h>
#include <stdlib.h>

typedef struct no *Lista;
Lista cria_lista();
int lista_vazia(Lista lst);
int insere_ord (Lista *lst, int elem);
int remove_ord (Lista *lst, int elem);
void imprime_lista(Lista *lst);
int menor(Lista *lst);
int tamanho(Lista *lst);
