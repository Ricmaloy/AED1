#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TrabEx11.h"

int main(){
    int num, vet[10], str[20];
    printf("Selecione 10 valores que corresponderao as letras de A a J: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    printf("Escolha uma opcao: \n1- Forma pos-fixa\n2- Forma infixa com uso de parenteses\n3- Forma infixa com uso de parenteses eventuais\n");
    scanf("%d", &num);

    printf("Digite a expressao: ");
    scanf("%s",str);

    if(num == 1) posfixa(str,vet);
    else if(num == 2) infixa_com_parentes(str,vet);
    else if(num == 3) infixa_eventual(str,vet);
    else printf("Opcao inserida nao corresponde com as opcoes validas.\n");

    return 0;
}
