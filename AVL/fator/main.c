#include <stdio.h>
#include "tad.h"


int main()
{
    pNodoA *arvore_a = cria_arvore();
    pNodoA *arvore_b = cria_arvore();
    pNodoA *arvore_c = cria_arvore();
    pNodoA *arvore_d = cria_arvore();

    //Criando as arvores
    arvore_a = InsereArvore(arvore_a, 12);
    arvore_a = InsereArvore(arvore_a, 8);
    arvore_a = InsereArvore(arvore_a, 20);
    arvore_a = InsereArvore(arvore_a, 4);
    arvore_a = InsereArvore(arvore_a, 10);
    arvore_a = InsereArvore(arvore_a, 18);
    arvore_a = InsereArvore(arvore_a, 26);
    arvore_a = InsereArvore(arvore_a, 2);
    arvore_a = InsereArvore(arvore_a, 6);
    arvore_a = InsereArvore(arvore_a, 9);
    arvore_a = InsereArvore(arvore_a, 11);
    arvore_a = InsereArvore(arvore_a, 14);
    arvore_a = InsereArvore(arvore_a, 19);
    arvore_a = InsereArvore(arvore_a, 22);
    arvore_a = InsereArvore(arvore_a, 28);

    arvore_b = InsereArvore(arvore_b, 12);
    arvore_b = InsereArvore(arvore_b, 8);
    arvore_b = InsereArvore(arvore_b, 20);
    arvore_b = InsereArvore(arvore_b, 4);
    arvore_b = InsereArvore(arvore_b, 10);
    arvore_b = InsereArvore(arvore_b, 18);
    arvore_b = InsereArvore(arvore_b, 26);
    arvore_b = InsereArvore(arvore_b, 2);
    arvore_b = InsereArvore(arvore_b, 6);
    arvore_b = InsereArvore(arvore_b, 9);
    arvore_b = InsereArvore(arvore_b, 14);
    arvore_b = InsereArvore(arvore_b, 19);
    arvore_b = InsereArvore(arvore_b, 22);
    arvore_b = InsereArvore(arvore_b, 28);

    arvore_c = InsereArvore(arvore_c, 12);
    arvore_c = InsereArvore(arvore_c, 8);
    arvore_c = InsereArvore(arvore_c, 20);
    arvore_c = InsereArvore(arvore_c, 4);
    arvore_c = InsereArvore(arvore_c, 10);
    arvore_c = InsereArvore(arvore_c, 18);
    arvore_c = InsereArvore(arvore_c, 2);
    arvore_c = InsereArvore(arvore_c, 6);
    arvore_c = InsereArvore(arvore_c, 11);
    arvore_c = InsereArvore(arvore_c, 14);
    arvore_c = InsereArvore(arvore_c, 19);

    arvore_d = InsereArvore(arvore_d, 12);
    arvore_d = InsereArvore(arvore_d, 20);
    arvore_d = InsereArvore(arvore_d, 18);
    arvore_d = InsereArvore(arvore_d, 14);
    arvore_d = InsereArvore(arvore_d, 19);

    //Respostas
    printf("\nFator arvore A: %d", FatorArvore(arvore_a, 0));
    printf("\nFator arvore B: %d", FatorArvore(arvore_b, 0));
    printf("\nFator arvore C: %d", FatorArvore(arvore_c, 0));
    printf("\nFator arvore D: %d\n", FatorArvore(arvore_d, 0));

    return 0;
}
