#ifndef TRABEX1_INCLUDED
#define TRABEX1_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct no * Lista;
Lista cria_lista();
int lista_vazia (Lista lst);
int insere_final (Lista *lst, int elem);
int remove_inicio (Lista *lst, int *elem);
void imprime(Lista *lst);
int tamanho(Lista *lst);
int maior(Lista *lst);


#endif // TRABEX1_H_INCLUDED

