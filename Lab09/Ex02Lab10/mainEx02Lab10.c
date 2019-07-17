#include <stdio.h>
#include <stdlib.h>
#include "Ex02Lab10.h"

int main(){
    int num;
    char c[100];
    gets(c);
    if(escopo_valido(c) == 1)
        print("Expressao valida\n");

    return 0;
}
