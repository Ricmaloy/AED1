typedef struct fila * Fila;
Fila cria_fila();
int fila_vazia(Fila f);
int fila_cheia(Fila f);
int insere_ini(Fila f, int elem);
int insere_fim(Fila f, int elem);
int remove_ini(Fila f, int *elem);
int removee(Fila f, int *elem);
int print_fila(Fila f);
