#include <stdio.h>
#include <stdlib.h>
#include "TADS.h"

int main()
{
    Produto *lista = inicia_lista();

    //lista = insere_inicio(lista);
    lista = insere_final(lista);
    lista = insere_final(lista);
    lista = insere_final(lista);
    lista = insere_final(lista);

    lista = remove_elemento(lista);

    imprime_reverso(lista);
    //imprime_lista(lista);

    lista = destroi_lista(lista);

    return 0;
}
