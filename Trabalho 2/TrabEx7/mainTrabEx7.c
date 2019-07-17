#include <stdio.h>
#include <stdlib.h>
#include "TrabEx7.h"

int main(){
   Fila f;
   int num;
   f = cria_fila();
   if(fila_vazia(f) == 1)printf("Fila esta vazia\n");
   else printf("Fila nao esta vazia\n");
   imprime_fila(f);
   insere_fim(f,5);
   insere_fim(f,4);
   insere_fim(f,6);
   insere_fim(f,3);
   if(fila_vazia(f) == 1)printf("Fila esta vazia\n");
   else printf("Fila nao esta vazia\n");
   imprime_fila(f);
   remove_ini(f,&num);
   printf("Valor removido: %d\n",num);
   imprime_fila(f);
   remove_ini(f,&num);
   printf("Valor removido: %d\n",num);
   imprime_fila(f);

    return 0;
}
