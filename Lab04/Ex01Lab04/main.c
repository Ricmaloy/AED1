#include<stdio.h>
#include "Ex01Lab04.H"

int main() {

    Racional *N1, *N2, *N3, *N4, *N5, *N6, *NF;
    int nu, de;
    N1 = generates(); N2 = generates();N5 = generates();N6 = generates(); // Cria 4 nros racionais
    if (N1 == NULL || N2 == NULL || N5 == NULL || N6 == NULL) {
    printf ("Nao foi possivel criar os nros racionais.\n");
    return -1;
    }
    printf("Digite o numerador e denominador do 1o racional:\n");
    scanf("%d", &nu); scanf("%d", &de);
    if (set_value(N1, nu, de) == 0) { // Atribui o numerador e o denominador a N1
    printf ("\nFalha ao preencher o 1o racional.\n");
    return -1;
    }
    printf("\nDigite o numerador e denominador do 2o racional:\n");
    scanf("%d", &nu); scanf("%d", &de);
    if (set_value(N2, nu, de) == 0) { // Atribui o numerador e o denominador a N2
    printf ("\nFalha ao preencher o 2o racional.\n");
    return -1;
    }
    ///
    printf("Digite o numerador e denominador do 3o racional:\n");
    scanf("%d", &nu); scanf("%d", &de);
    if (set_value(N5, nu, de) == 0) { // Atribui o numerador e o denominador a N1
    printf ("\nFalha ao preencher o 3o racional.\n");
    return -1;
    }
    printf("\nDigite o numerador e denominador do 4o racional:\n");
    scanf("%d", &nu); scanf("%d", &de);
    if (set_value(N6, nu, de) == 0) { // Atribui o numerador e o denominador a N2
    printf ("\nFalha ao preencher o 4o racional.\n");
    return -1;
    }
    ///

    N3 = sum(N1,N2); // Soma 2 nros racionais
    N4 = sum(N5,N6); // Soma 2 nros racionais
    if (N3 == NULL) {
    printf ("\nFalha ao somar os 2 nros racionais.\n");
    return -1;
    }
    if(N4 == NULL){
    printf ("\nFalha ao somar os 2 nros racionais.\n");
    return -1;
    }
    if (get_value(N3, &nu, &de) == 0) { // Obtem o numerador e o denominador de N3
    printf ("\nFalha ao recuperar o numerador e denominador resultante.\n");
    return -1;
    }
    if (get_value(N4, &nu, &de) == 0) { // Obtem o numerador e o denominador de N3
    printf ("\nFalha ao recuperar o numerador e denominador resultante.\n");
    return -1;
    }
    NF = prod(N3,N4);
    printf("\nO resultado do produto eh: ");
    print_value(NF);
    delete(&N1); delete(&N2); delete(&N3); delete(&N4); delete(&N5); delete(&N6);  // Libera a memoria alocada para os nros

        return 0;
}
