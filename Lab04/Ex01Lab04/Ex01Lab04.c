#include<stdio.h> // para usar o NULL
#include<stdlib.h> // para usar as funções malloc() e free()
#include "Ex01Lab04.H"


Racional* generates() {
    Racional *p;
    p = (Racional *) malloc(sizeof(Racional));
    return p;
}
int set_value(Racional *p, int N, int D) {
    if(p==NULL||D==0) return (0);
    p->num=N;
    p->den=D;
    return(1);
}
int get_value(Racional *p, int *N, int *D) {
    if (p == NULL)
    return 0; // Falha
    *N = p->num;
    *D = p->den;
return 1; // Sucesso
}

Racional* sum(Racional *R1, Racional *R2) {
    Racional *R;
    R = generates();
    if (R != NULL) {
    R->num = (R1->num*R2->den) + (R2->num*R1->den);
    R->den = (R1->den * R2->den);
}
}
void delete(Racional **p) {
    free(*p); // Libera a memória
    *p = NULL; // Limpa o ponteiro para racional
}

Racional* prod(Racional *R1, Racional *R2,Racional *R3, Racional *R4) {
    Racional *R;
    R = generates();
    if (R != NULL) {
    R->num = (R1->num*R2->den) + (R2->num*R1->den);
    R->den = (R1->den * R2->den);
}
}

int print_value(Racional *R) {
printf("%d/%d",R->num,R->den); }

