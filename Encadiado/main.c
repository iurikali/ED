#include <stdio.h>
#include <stdlib.h>
#include "tads.h"


int main()
{
    Produto *produtos = Inicializa_Lista();

    //produtos = Insere_Produto(produtos);

    for (int i = 0; i < 4; i++)
        produtos = Insere_Produto(produtos);

    Imprime(produtos);

    return 0;
}
