#ifndef EX1LAB07_INCLUDED
#define EX1LAB07_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct no * Lista;
Lista cria_lista();
int lista_vazia (Lista lst);
int insere_final (Lista *lst, int elem);
int remove_inicio (Lista *lst, int *elem);
void imprime(Lista *lst);
int tamanho(Lista *lst);


#endif // EX1LAB07_H_INCLUDED
