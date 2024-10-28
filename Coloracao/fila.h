#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

struct sTipoFila{
       int info;
       struct sTipoFila* prox;
       };

typedef struct sTipoFila TipoFila;

TipoFila* cria_fila(void);
TipoFila* insere (TipoFila *l, int dado);
int vazia (TipoFila* l);
int removeFila(TipoFila **l);
void imprime(TipoFila* l);


#endif // FILA_H_INCLUDED
