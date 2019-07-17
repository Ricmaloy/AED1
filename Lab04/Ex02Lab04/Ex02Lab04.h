#ifndef EX02LAB04_H_INCLUDED
#define EX02LAB04_H_INCLUDED

typedef struct num Num;
typedef struct lista Lista;
Lista* criar_lista();   ///cria lista
void liberar_lista(Lista* li);   ///destroi a lista
int lista_vazia(Lista* li);  ///checa se a lista esta vazia
int lista_cheia(Lista* li);  ///cehca se a lista esta cheia
int insere_elem(Lista* li,int elem);  ///insere um elemento na lista
int remove_elem(Lista* li,int elem);  ///remove um elemento na lista
int obtem_valor_de(Lista* li,int numero); ///checa se existe dado valor na lista

#endif // EX02LAB04_H_INCLUDED

