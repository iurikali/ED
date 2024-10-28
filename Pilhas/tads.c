#include "tads.h"
#include <stdio.h>
#include <stdlib.h>


Produto *IniciaPilha()
{
	return NULL;
}

Produto *DestroiPilha(Produto *topo)
{
	Produto *auxi = NULL;

	while(topo)
	{
		auxi = topo;
		topo = topo->prox;
		free(auxi);
	}

	return NULL;
}

int PopPilha(Produto **topo, Dados *dado)
{
	Produto *auxi = NULL;

	if (*topo)
	{
		//Pegando o dado
		*dado = (*topo)->dados;
		auxi = *topo;
		*topo = (*topo)->prox;
		free(auxi);
		auxi = NULL;
		return 1;
	}
	else
	{
		//A pilha tah vazia
		return 0;
	}

}

Produto *PushPilha(Produto *topo)
{
    //Criando o novo
	Produto *novo = NULL;
	novo = (Produto*) malloc(sizeof(Produto));

	printf("\nDigite o novo codigo: ");
	scanf(" %d", &(novo->dados.codigo));

	novo->prox = topo;

	return novo;

}

Dados ConsultaDados(Produto *topo)
{
    Dados vazio = {0};
    if (topo)
    {
        return topo->dados;
    }
    else
    {
        printf("\nLista vazia");
        return vazio;
    }
}




















