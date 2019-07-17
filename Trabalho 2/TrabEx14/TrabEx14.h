typedef struct no * Lista;
Lista cria_lista();
int lista_vazia(Lista lst);
int insere_elem (Lista *lst, int elem);
int remove_elem(Lista *lst, int elem);
int imprime_lista(Lista *lst);
int menor(Lista *lst);
int tamanho(Lista *lst);

///Lista estatico

typedef struct listaest * Listaest;
Listaest cria_listaest();
int lista_vaziaest(Listaest lst);
int lista_cheiaest(Listaest lst);
int insere_ordest(Listaest lst, int elem);
int remove_ordest(Listaest lst, int elem);
void imprime_listaest(Listaest lst);
