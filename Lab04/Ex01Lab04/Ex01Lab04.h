#ifndef EX01LAB04_H_INCLUDED
#define EX01LAB04_H_INCLUDED


struct racional {
int num, den;
};

typedef struct racional Racional;
Racional *generates();
int set_value(Racional *p, int N, int D);
int get_value(Racional *p, int *N, int *D);
Racional * sum(Racional *R1, Racional *R2);
void delete(Racional ** p);
int print_value(Racional *R);

#endif // EX01LAB04_H_INCLUDED


