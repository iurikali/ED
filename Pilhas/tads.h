#ifndef TADS_H_INCLUDED
#define TADS_H_INCLUDED

typedef struct dados
{
    int codigo;
    /*char nome[50];
    int valor;*/
}Dados;

typedef struct produto
{
    Dados dados;
    struct produto *prox;
}Produto;

Produto *IniciaPilha();

Produto *DestroiPilha(Produto *topo);

int PopPilha(Produto **topo, Dados *dado);

Produto *PushPilha(Produto *topo);

Dados ConsultaDados(Produto *topo);

#endif // TADS_H_INCLUDED
