#include <stdio.h>
#include <stdlib.h>
#include "tads.h"


int main()
{
    Produto *pilha = IniciaPilha();
    Dados dados = {0};

    printf("Antes");

    pilha = PushPilha(pilha);

    dados = ConsultaDados(pilha);

    printf("\n %d", dados.codigo);

    PopPilha(&pilha, &dados);

    printf("\n %d", dados.codigo);

    pilha = DestroiPilha(pilha);

    printf("\nfoi");
    return 0;
}
