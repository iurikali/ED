#include "TADS.h"
#include <stdlib.h>
#include <stdio.h>

Dados informa_dados()
{
    Dados novo = {0};

    printf("\nInforme o codigo novo: ");
    scanf(" %d", &(novo.codigo));

    return novo;
}


//Iniciando a lista
Produto *inicia_lista()
{
    return NULL;
}

void imprime_lista(Produto *produto_inicial)
{
    Produto *produto_auxiliar = produto_inicial;
    //Vendo se a nossa lista nao ta vazia
    if (produto_auxiliar)
    {
        do
        {
            printf("\nO codigo eh: %d", produto_auxiliar->inf.codigo);
            produto_auxiliar = produto_auxiliar->proximo;
        }
        while(produto_auxiliar);
    }
    else
    {
        printf("\nA lista tah vazia");
    }
}

void imprime_reverso(Produto *produto_inicial)
{
    Produto *auxiliar = produto_inicial;

    if (auxiliar)
    {
        //Indo ate o ultimo elemento
        while(auxiliar->proximo)
            auxiliar = auxiliar->proximo;
        //Estamos no ultimo entao vamos retroceder
        while(auxiliar)
        {
            printf("\nO codigo eh: %d", auxiliar->inf.codigo);
            auxiliar = auxiliar->anterior;
        }
    }
    else
    {
        printf("\nA lista tah vazia");
    }

}

Produto *insere_inicio(Produto *produto_inicial)
{
    //Criando o nosso novo endere�o
    Produto *novo = NULL;
    novo = (Produto*) malloc(sizeof(Produto));
    novo->inf = informa_dados();
    novo->anterior = NULL;
    novo->proximo = NULL;

    if (produto_inicial)
    {
        novo->proximo = produto_inicial;
        produto_inicial->anterior = novo;
    }

    produto_inicial = novo;
    return produto_inicial;
}

Produto *insere_final(Produto *produto_inicial)
{
    //Criando o nosso novo endere�o
    Produto *novo = NULL;
    novo = (Produto*) malloc(sizeof(Produto));
    novo->inf = informa_dados();
    novo->anterior = NULL;
    novo->proximo = NULL;

    Produto *auxiliar = produto_inicial;

    if (auxiliar)
    {
        //indo ate o ultimo elemento
        while(auxiliar->proximo)
            auxiliar = auxiliar->proximo;
        novo->anterior = auxiliar;
        auxiliar->proximo = novo;
    }
    else
    {
        produto_inicial = novo;
    }

    return produto_inicial;
}
/*
Produto *remove_elemento(Produto *produto_inicial)
{
    //Pegando o codigo que queremos destruir
    int num_delete = 0;
    printf("\nDigite o codigo que deseja apagar: ");
    scanf(" %d", &num_delete);

    Produto *auxiliar = produto_inicial;

    if (auxiliar)
    {
        //Verificando se tem soh um elemento
        if (auxiliar->proximo == NULL)
        {
            //Verificando se esse unico elemento eh o nosso elemento
            if (auxiliar->inf.codigo == num_delete)
            {
                produto_inicial->anterior = NULL;
                produto_inicial->proximo = NULL;
                free(produto_inicial);
                produto_inicial = NULL;
            }
        }
        else
        {
            //Existe mais de um elemento
            while (auxiliar)
            {
                if (auxiliar->inf.codigo == num_delete)
                {
                    Produto *auxiliar_2 = auxiliar;

                    if (!(!auxiliar->anterior && !auxiliar->proximo))
                    {
                        //Se somos o primeiro elemento
                        if (auxiliar->anterior == NULL && auxiliar->proximo != NULL)
                        {
                            auxiliar->proximo->anterior = NULL;
                            produto_inicial = auxiliar->proximo;
                        }
                        //Se somos o elemento do meio
                        else if (auxiliar->anterior != NULL && auxiliar->proximo != NULL)
                        {
                            auxiliar->proximo->anterior = auxiliar->anterior;
                            auxiliar->anterior->proximo = auxiliar->proximo;
                        }
                        //Se somos o ultimo elemento
                        else if (auxiliar->anterior != NULL && auxiliar->proximo == NULL)
                        {
                            auxiliar->anterior->proximo = NULL;
                        }
                    }



                    auxiliar = auxiliar->proximo;
                    free(auxiliar_2);
                }
                else
                {
                    auxiliar = auxiliar->proximo;
                }

            }
        }
    }

    return produto_inicial;
}
*/

Produto *destroi_lista(Produto *produto_inicial)
{
    Produto *auxiliar = NULL;

    while (produto_inicial != NULL)
    {
        auxiliar = produto_inicial;
        produto_inicial = auxiliar->proximo;
        free(auxiliar);
    }
    free(produto_inicial);

    return NULL;
}



Produto *remove_elemento(Produto *produto_inicial)
{
    //Pegando o codigo que queremos destruir
    int num_delete = 0;
    printf("\nDigite o codigo que deseja apagar: ");
    scanf(" %d", &num_delete);

    Produto *auxiliar = produto_inicial;
    //Percorrendo a lista
    while(auxiliar)
    {
        Produto *proximo = auxiliar->proximo;
        //Se achamos
        if (auxiliar->inf.codigo == num_delete)
        {
            //Se tem um anterior
            if (auxiliar->anterior)
            {
                auxiliar->anterior->proximo = auxiliar->proximo;
            }
            else
            {
                produto_inicial = auxiliar->proximo;
            }

            //Se tem um proximo
            if (auxiliar->proximo)
            {
                auxiliar->proximo->anterior = auxiliar->anterior;
            }

            //Se soh tem um elemento
            if (!auxiliar->anterior && !auxiliar->proximo)
            {
                produto_inicial = NULL;
            }
            free(auxiliar);
            //auxiliar = NULL;
        }
        auxiliar = proximo;
    }
    return produto_inicial;
}










