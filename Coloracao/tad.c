#include "tad.h"
#include <stdio.h>
#include "fila.h"

void Pinta(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS])
{
    int cores[4] = {ROXO, VERMELHO, AZUL, PRETO};


    for (int i = 0; i < QTD_NODOS; i++)
    {
        //Retirando a cor adjacente da nossa lista
        if (grafo[vertice][i] == 1 && visitados[i] != 0)
        {
            cores[visitados[i] - 1] = 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (visitados[vertice] == 0)
        {
            if (cores[i] != 0)
            {
                visitados[vertice] = cores[i];
                printf("vertice: %d cor: %d\n", vertice, visitados[vertice]);
            }
        }
    }
}

void PintaBFS(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS])
{
    int cores[4] = {ROXO, VERMELHO, AZUL, PRETO};


    for (int i = 0; i < QTD_NODOS; i++)
    {
        //Retirando a cor adjacente da nossa lista
        if (grafo[vertice][i] == 1 && visitados[i] != 0)
        {
            cores[visitados[i] - 1] = 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (visitados[vertice] == 0)
        {
            if (cores[i] != 0)
            {
                visitados[vertice] = cores[i];
                printf("vertice: %d cor: %d\n", vertice + 1, visitados[vertice]);
            }
        }
    }
}

void DFS(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS])
{
    //Vizitando
    //visitados[vertice] = 1;
    //printf(" %d ", vertice);
    Pinta(grafo, vertice - 1, visitados);

    for (int i = 0; i < QTD_NODOS; i++)
    {
        if (grafo[vertice - 1][i] == 1 && visitados[i] == 0)
        {
            DFS(grafo, i + 1, visitados);
        }
    }
}

void BFS(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS])
{
    TipoFila *fila = cria_fila();

    //visitados[vertice] = 1;
    //printf(" %d ", vertice);
    visitados[vertice - 1] = ROXO;
    printf("vertice: %d cor: %d\n", vertice, visitados[vertice - 1]);


    fila = insere(fila, vertice - 1);

    while(!vazia(fila))
    {
        int topo = removeFila(&fila);
        for(int i = 0; i < QTD_NODOS; i++)
        {
            if (grafo[topo][i] == 1)
            {
                if (visitados[i] == 0)
                {
                    fila = insere(fila, i);
                    /*visitados[i] = 1;
                    printf(" %d ", i);*/
                    PintaBFS(grafo, i, visitados);
                }
            }
        }
    }
}

void Limpa(int visitados[QTD_NODOS])
{
    for (int i = 0; i < QTD_NODOS; i++)
        visitados[i] = 0;
}

