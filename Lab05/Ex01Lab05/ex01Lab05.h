typedef struct no * Lista;
Lista cria_lista();
int lista_vazia(Lista lst);
int insere_elem (Lista *lst, int elem);
int remove_elem(Lista *lst, int elem);
int imprime_lista(Lista *lst);
int menor(Lista *lst);
int tamanho(Lista *lst);
