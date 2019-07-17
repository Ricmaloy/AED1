#include "TrabEx11.h"

struct no{
    char c;
    int info;
    struct no *prox;
};

Pilha cria_pilha(){
    return NULL;
}

int pop(Pilha *p, int *elem){
    if(pilha_vazia(*p))
        return 0;

    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);
    return 1;
}

int pushchar(Pilha *p, char elem) {
    Pilha N = (Pilha)malloc(sizeof(struct no));
    if(N == NULL)
        return 0;

    N->c = elem;
    N->prox = *p;
    *p = N;
    return 1;
}

int pilha_vazia(Pilha p){
    if(p == NULL)
        return 1;
    else
        return 0;
}

int push(Pilha *p, int elem) {
    Pilha N = (Pilha)malloc(sizeof(struct no));
    if(N == NULL)
        return 0;

    N->info = elem;
    N->prox = *p;
    *p = N;
    return 1;
}

int popchar(Pilha *p, char *elem){
    if(pilha_vazia(*p))
        return 0;

    Pilha aux = *p;
    *elem = aux->c;
    *p = aux->prox;
    free(aux);
    return 1;
}

int le_topo(Pilha *p, int *elem){
    if(pilha_vazia(*p))
        return 0;
    *elem = (*p)->info;
    return 1;
}

int le_topo_char(Pilha *p, char *elem){
    if(pilha_vazia(*p))
        return 0;
    *elem = (*p)->c;
    return 1;
}

void posfixa(char str[20], int v[10]){
    Pilha p = cria_pilha();
    int num1, num2, result;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A')
            push(&p,v[0]);
        else if(str[i] == 'b' || str[i] == 'B')
            push(&p, v[1]);
        else if(str[i] == 'c' || str[i] == 'C')
            push(&p, v[2]);
        else if(str[i] == 'd' || str[i] == 'D')
            push(&p, v[3]);
         else if(str[i] == 'e' || str[i] == 'E')
            push(&p, v[4]);
        else if(str[i] == 'f' || str[i] == 'F')
            push(&p, v[5]);
        else if(str[i] == 'g' || str[i] == 'G')
            push(&p, v[6]);
        else if(str[i] == 'h' || str[i] == 'H')
            push(&p, v[7]);
        else if(str[i] == 'i' || str[i] == 'I')
            push(&p, v[8]);
        else if(str[i] == 'j' || str[i] == 'J')
            push(&p, v[9]);
        else if(str[i] == '+'){
            pop(&p,&num1);
            pop(&p, &num2);
            result = num2 + num1;
            push(&p,result);
        }
            else if(str[i] == '-'){
            pop(&p,&num1);
            pop(&p, &num2);
            result = num2 - num1;
            push(&p,result);
        }

            else if(str[i] == '*'){
            pop(&p,&num1);
            pop(&p, &num2);
            result = num2 * num1;
            push(&p,result);
        }
               else if(str[i] == '/'){
            pop(&p,&num1);
            pop(&p, &num2);
            result = num2 / num1;
            push(&p,result);
        }

            else if(str[i] == '^'){
            pop(&p,&num1);
            pop(&p, &num2);
            result = pow(num2,num1);
            push(&p,result);
        }
    }

    pop(&p,&result);
    if(pilha_vazia(p) == 1){
        printf("\nResultado da expressao: %d\n\n", result);
        }
    else
        return;
}

void infixa_eventual(char str[20], int u[10]){
    Pilha p = cria_pilha();
    int j=0;
    char c, v[20];

    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'A' && str[i] <= 'J'){
            v[j] = str[i];
            j++;
        }

        else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
            while(pilha_vazia(p) == 0 && prioridade(str[i]) <= prioridade(p->c)){
                popchar(&p,&c);
                v[j] = c;
                j++;
            }
                pushchar(&p,str[i]);

        }
        else if(str[i] == '(')
            pushchar(&p, str[i]);
        else if(str[i] == ')'){
            while(p->c != '('){
                    popchar(&p,&c);
                    v[j] = c;
                    j++;
                  }
                  popchar(&p,&c);
        }
      }
      while(pilha_vazia(p) == 0){
            popchar(&p,&c);
            v[j] = c;
            j++;
        }
        v[j] = '\0';
        printf("%s\n",v);
      if(pilha_vazia(p) == 1)
         posfixa(v,u);
}


void infixa_com_parentes(char str[20], int u[10]){
    Pilha p = cria_pilha();
    int j=0;
    char v[10], c;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^')
            pushchar(&p, str[i]);
        if((str[i] >= 'A' && str[i] <= 'J') || (str[i] >= 'a' && str[i] <= 'j')){
            v[j] = str[i];
            j++;
            }
        if(str[i] == ')'){
            popchar(&p,&c);
            v[j] = c;
            j++;
        }
    }
    v[j] = '\0';
    printf("%s\n",v);
    if(pilha_vazia(p) == 1){
        posfixa(v,u);
    }
    else{
        printf("Expressao foi digitada incorretamente.");
        return;
    }
}

void imprime(Pilha p){
    Pilha aux = p;
    if(pilha_vazia(p)){
        printf("Pilha vazia.\n");
        return;
        }

    while(aux != NULL){
        printf("%d", aux->info);
        aux = aux->prox;
    }
    printf("\n");
}

int prioridade(char c){
    if(c == '(')
        return 0;
    else if(c == '+' || c == '-')
        return 1;
    else if(c == '/' || c == '*')
        return 2;
    else
        return 3;
}


