struct num{
    int n;
};
typedef struct num Num;
typedef struct lista Lista;
Num* criar_lista(int n);   ///cria lista
void liberar_lista(Num* li);   ///destroi a lista
int lista_vazia(Num* li);  ///checa se a lista esta vazia
int lista_cheia(Num* li);  ///cehca se a lista esta cheia
int insere_elem(Num* li,int elem);  ///insere um elemento na lista
int remove_elem(Num* li,int elem);  ///remove um elemento na lista
int obtem_valor_de(Lista* li,int numero); ///checa se existe dado valor na lista
