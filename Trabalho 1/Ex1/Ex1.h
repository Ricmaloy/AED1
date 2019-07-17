#ifndef EX1_H_INCLUDED
#define EX1_H_INCLUDED


struct ponto {
int x, y;
};

typedef struct ponto Ponto;
int set_value(Ponto *p, int X, int Y);
void libera(Ponto **p);
int dist(Ponto *p1, Ponto *p2);
int maior(int d1,int d2,int d3,int d4,int d5,int d6);
int menor(int d1,int d2,int d3,int d4,int d5,int d6);

#endif // EX1_H_INCLUDED


