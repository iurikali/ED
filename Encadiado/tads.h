#ifndef TADS_H_INCLUDED
#define TADS_H_INCLUDED

typedef struct dados
{
    int codigo;
    char nome[50];
    int valor;
}Dados;

typedef struct produto
{
    Dados dados;
    struct produto *prox;
}Produto;

Produto *Inicializa_Lista();

void Imprime(Produto *produto_inicial);

Dados Pega_dados();

Produto *Insere_Produto(Produto *produto_inicial);

#endif // TADS_H_INCLUDED
