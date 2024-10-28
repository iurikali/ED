#include "tad.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

pNodoA* cria_arvore(void)
{
    return NULL;
}

pNodoA* InsereArvore(pNodoA *a, int ch)
{
    if (a == NULL)
    {
        a = (pNodoA*) malloc(sizeof(pNodoA));
        a->info = ch;
        a->esq = NULL;
        a->dir = NULL;
    }
    else if (ch < a->info)
        a->esq = InsereArvore(a->esq,ch);
    else
        a->dir = InsereArvore(a->dir,ch);
    return a;
}

void PreFixado(pNodoA *a)
{
    if (a!= NULL)
    {
        printf("%d\n",a->info);
        PreFixado(a->esq);
        PreFixado(a->dir);
    }
}

int QtdNodos(pNodoA *a)
{
    if (a!= NULL)
    {
        return 1 + QtdNodos(a->esq) + QtdNodos(a->dir);
    }
    else
    {
        return 0;
    }
}

void NivelArvore(pNodoA *a, int nivel)
{
    if (a!= NULL)
    {
        printf("\n");
        for (int i = 0; i < nivel; i++)
            printf("=");
        printf("%d",a->info);


        NivelArvore(a->esq, nivel+1);


        NivelArvore(a->dir, nivel+1);
    }
}

int Altura (pNodoA *a)
{
    int Alt_Esq, Alt_Dir;
    
    if (a == NULL)
        return 0;
    else
    {
        Alt_Esq = Altura(a->esq);
        Alt_Dir = Altura(a->dir);
        
        if (Alt_Esq > Alt_Dir)
            return (1 + Alt_Esq);
        else
            return (1 + Alt_Dir);
    }
}

int FatorNodo(pNodoA *a)
{
    if (a == NULL)
        return 0;
    else
        return abs(Altura(a->esq) - Altura(a->dir));
}

int FatorArvore(pNodoA *a, int fator)
{
    if (a == NULL)
    {
        return 0;
    }
    else
    {
        fator = FatorNodo(a);

        int esq = FatorArvore(a->esq, fator);
        int dir = FatorArvore(a->dir, fator);

        if (esq > fator)
            fator = esq;
        
        if (dir > fator)
            fator = dir;

        return fator;
    }
}