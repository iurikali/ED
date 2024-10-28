#ifndef TAD_H_INCLUDED
#define TAD_H_INCLUDED

typedef struct TNodoA
{
    int info;
    struct TNodoA *esq;
    struct TNodoA *dir;
}pNodoA;

pNodoA* cria_arvore(void);

pNodoA* InsereArvore(pNodoA *a, int ch);

void PreFixado(pNodoA *a);

int QtdNodos(pNodoA *a);

void NivelArvore(pNodoA *a, int nivel);

#endif // TAD_H_INCLUDED
