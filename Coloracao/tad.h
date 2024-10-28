#ifndef TAD_H_INCLUDED
#define TAD_H_INCLUDED

#define QTD_NODOS 6
#define ROXO 1
#define VERMELHO 2
#define AZUL 3
#define PRETO 4

void Pinta(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS]);

void PintaBFS(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS]);

void DFS(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS]);

void BFS(int grafo[QTD_NODOS][QTD_NODOS], int vertice, int visitados[QTD_NODOS]);

void Limpa(int visitados[QTD_NODOS]);

#endif // TAD_H_INCLUDED
