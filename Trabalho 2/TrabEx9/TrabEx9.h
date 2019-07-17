#ifndef TRABEX9_H_INCLUDED
#define TRABEX9_H_INCLUDED

typedef struct deque *Deque;
Deque cria_deque();
int deque_vazia(Deque f);
int insere_ini(Deque f, int elem);
int insere_fim(Deque f, int elem);
int remove_ini(Deque f, int *elem);
int remove_fim(Deque f, int *elem);
int printa_deque(Deque f);

#endif // TRABEX9_H_INCLUDED
