#include <stdio.h>
#include "tad.h"

int main()
{
    //Iniciando a matriz
    int grafo[6][6] =
    {{0, 1, 0, 0, 0, 1},
    {1, 0, 1, 1, 0, 0},
    {0, 1, 0, 1, 1, 0},
    {0, 1, 1, 0, 1, 1},
    {0, 0, 1, 1, 0, 1},
    {1, 0, 0, 1, 1, 0}};

    int visitados[6] = {0};

    printf("\nDFS:\n");
    DFS(grafo, 1, visitados);
    Limpa(visitados);


    printf("\n\nBFS:\n");
    BFS(grafo, 1, visitados);
    Limpa(visitados);


    return 0;
}
