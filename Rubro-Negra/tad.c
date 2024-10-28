#include "tad.h"
#include <stdio.h>
#include <stdlib.h>

Nodo* CriaArvore(void)
{
    return NULL;
}

Nodo* InsereArvore(Nodo *a, int info)
{
    if (a == NULL)
    {
        a = (Nodo*) malloc(sizeof(Nodo));
        a->info = info;
        a->esq = NULL;
        a->dir = NULL;
        a->pai = NULL;
        a->cor = RED;
    }
    else
        //Comparando os textos
        if (info < a->info)
        {
            a->esq = InsereArvore(a->esq, info);
            a->esq->pai = a;
        }
        else if (info > a->info)
        {
            a->dir = InsereArvore(a->dir, info);
            a->dir->pai = a;
        }
    return a;
}

void CentralEsquerda(Nodo *a)
{
    if (a!= NULL)
    {
        CentralEsquerda(a->esq);
        printf("[%d]\n",a->info);
        CentralEsquerda(a->dir);
    }
}


/*
Nodo *RotacaoDireita(Nodo* nodo)
{
    Nodo *temp;
    temp = nodo->esq;
    nodo->esq = temp->dir;
    temp->dir = nodo;
    nodo = temp;
    return nodo;
}

Nodo *RotacaoEsquerda(Nodo *nodo)
{
    Nodo *temp;
    temp = nodo->dir;
    nodo->dir = temp->esq;
    temp->esq = nodo;
    nodo = temp;
    return nodo;
}*/

/*
// Right Rotation (Similar to LeftRotate)
void rightRotate(struct node **root,struct node *y)
{
    if (!y || !y->left)
        return ;
    struct node *x = y->left;
    y->left = x->right;
    if (x->right != NULL)
        x->right->parent = y;
    x->parent =y->parent;
    if (x->parent == NULL)
        (*root) = x;
    else if (y == y->parent->left)
        y->parent->left = x;
    else y->parent->right = x;
    x->right = y;
    y->parent = x;
}*/
/*
// Left Rotation
void LeftRotate(struct node **root, struct node *x)
{
    if (!x || !x->right)
        return ;
    //y stored pointer of right child of x
    struct node *y = x->right;

    //store y's left subtree's pointer as x's right child
    x->right = y->left;

    //update parent pointer of x's right
    if (x->right != NULL)
        x->right->parent = x;

    //update y's parent pointer
    y->parent = x->parent;

    // if x's parent is null make y as root of tree
    if (x->parent == NULL)
        (*root) = y;

    // store y at the place of x
    else if (x == x->parent->left)
        x->parent->left = y;
    else    x->parent->right = y;

    // make x as left child of y
    y->left = x;

    //update parent pointer of x
    x->parent = y;
}*/