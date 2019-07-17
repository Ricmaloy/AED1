#include <stdio.h>
#include <stdlib.h>
#include "Lab12Ex01.h"

int main(){
    int num;
    Deque d;
    d = cria_deque();
    imprime_deque(d);
    insere_fim(d,5);
    insere_ini(d,4);
    insere_ini(d,6);
    insere_fim(d,3);
    imprime_deque(d);
    remove_ini(d,&num);
    printf("Valor removido = %d\n",num);
    imprime_deque(d);
    remove_ini(d,&num);
    printf("Valor removido = %d\n",num);
    imprime_deque(d);
    remove_ini(d,&num);
    printf("Valor removido = %d\n",num);
    imprime_deque(d);
    remove_ini(d,&num);
    printf("Valor removido = %d\n",num);
    imprime_deque(d);
    return 0;
}
