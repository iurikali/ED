#ifndef TAD_H_INCLUDED
#define TAD_H_INCLUDED

#define BLACK 0
#define RED 1


typedef struct nodo_struct
{
    int info;
    struct nodo_struct *pai, *dir, *esq;
    int cor;
}Nodo;



#endif