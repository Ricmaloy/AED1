#include <stdio.h>
#include <stdlib.h>
#include "Ex01Lab11.h"

int main(){
   Fila f;
   int num;
   f = cria_fila();
   imprime_fila(f);
   insere_fim(f,5);
   insere_fim(f,4);
   insere_fim(f,6);
   insere_fim(f,3);
   imprime_fila(f);
   remove_ini(f,&num);
   printf("Valor removido: %d\n",num);
   imprime_fila(f);
   remove_ini(f,&num);
   printf("Valor removido: %d\n",num);
   imprime_fila(f);

    return 0;
}
