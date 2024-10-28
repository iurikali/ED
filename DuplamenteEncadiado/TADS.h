#ifndef TADS_H_INCLUDED
#define TADS_H_INCLUDED

typedef struct dados
{
    int codigo;
}Dados;

typedef struct produto
{
    Dados inf;
    struct produto *proximo, *anterior;
}Produto;

Dados informa_dados();

Produto *inicia_lista();

void imprime_lista(Produto *produto_inicial);

void imprime_reverso(Produto *produto_inicial);

Produto *insere_inicio(Produto *produto_inicial);

Produto *insere_final(Produto *produto_inicial);

Produto *remove_elemento(Produto *produto_inicial);

Produto *destroi_lista(Produto *produto_inicial);

#endif // TADS_H_INCLUDED
