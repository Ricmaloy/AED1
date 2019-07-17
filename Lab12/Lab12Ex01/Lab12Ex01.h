typedef struct deque *Deque;
Deque cria_deque();
int deque_vazio(Deque f);
int deque_cheio(Deque f);
int insere_fim(Deque f, int num);
int insere_ini(Deque f, int num);
int remove_ini(Deque f, int *num);
int remove_fim(Deque f, int *num);
void imprime_deque(Deque f);
