#include "tads.h"
#include <stdio.h>
#include <stdlib.h>

Produto *Inicializa_Lista()
{
    return NULL;
}

void Imprime(Produto *produto_inicial)
{
    Produto *produto_aux = NULL;

    if (produto_inicial == NULL)
        printf("Lista vazia");
    else
    {
        printf("\n\nResposta:");
        for (produto_aux = produto_inicial; produto_aux != NULL; produto_aux = produto_aux->prox)
        {
            printf("\n\nCodigo: %d", produto_aux->dados.codigo);
            printf("\nNome: %s", produto_aux->dados.nome);
            printf("Valor: %d", produto_aux->dados.valor);
        }
    }
}


Dados Pega_dados()
{
    //fflush(stdin);
    Dados dado = {0};
    printf("\nCodigo: ");
    scanf(" %d", &(dado.codigo));

    //fflush(stdin);

    getchar();
    printf("Nome: ");
    fgets(&dado.nome, 50, stdin);

    //fflush(stdin);


    printf("Valor: ");
    scanf(" %d", &(dado.valor));
    //fflush(stdin);

    return dado;
}


Produto *Insere_Produto(Produto *produto_inicial)
{
    //Iniciando
    Produto *produto_novo = NULL;
    Produto *produto_aux = produto_inicial;

    produto_novo = (Produto *) malloc(sizeof(Produto));
    produto_novo->dados = Pega_dados();
    produto_novo->prox = NULL;

    //Vendo se a lista ta vazia
    if (produto_aux == NULL)
    {
        produto_inicial = produto_novo;
    }
    //A lista nao esta vazia
    else
    {
        //Colocando no comeco caso seja o primeiro ja seja o maior
        if (produto_aux->dados.codigo >= produto_novo->dados.codigo)
        {
            produto_novo->prox = produto_aux;
            produto_inicial = produto_novo;
        }
        else
        {
            //Andando ate o final ou ate achar um elemento maior que o desejado
            while(produto_aux->prox != NULL && (produto_aux->prox->dados.codigo < produto_novo->dados.codigo))
            {
                produto_aux = produto_aux->prox;
            }
            produto_novo->prox = produto_aux->prox;
            produto_aux->prox = produto_novo;
        }

    }

    return produto_inicial;
}










