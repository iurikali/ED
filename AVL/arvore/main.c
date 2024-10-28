#include <stdio.h>
#include "tad.h"


int main()
{
    int nivel = 1;

    pNodoA *raiz = cria_arvore();

    raiz = InsereArvore(raiz, 8);
    raiz = InsereArvore(raiz, 4);
    raiz = InsereArvore(raiz, 9);
    raiz = InsereArvore(raiz, 2);
    raiz = InsereArvore(raiz, 6);
    raiz = InsereArvore(raiz, 1);

    int qtd = QtdNodos(raiz);

    printf("A Quantidade de nodos eh: %d\n", qtd);

    printf("\nNiveis:");
    NivelArvore(raiz, 1);

    return 0;
}
