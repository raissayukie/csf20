/*
Est. Dados 1 (S13)- UTFPR - Fila
Guilmour H. D. Rossi
Marinho Welter
Pedro Pereira
Raissa Yukie Yamasaki Rodrigues
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define KGRN  "\x1B[32m"

#define MAX 10

int main ()
{

return 0;
}

typedef struct fila
{

    int inicio;
    int fim;
    int fila[MAX];
    int posicao;

};

void incluiFila(int c, struct fila *f)
{

    f->fila[f->posicao]=c;
    f->fim=f->posicao;
    f->posicao++;
}

int retiraDaFila(struct fila *f)
{
    int retirado;
    retirado=f->fila[0];
    int i;
    for (i=0; i<f->fim -1; i++)
    {
        f->fila[i]=f->fila[i+1];
    }
    f->posicao--;
    f->fim--;
    return retirado;
}

int filaVazia( struct fila *f)//retorna 0 se a fila esta vazia e 1 se tem elementos
{
    if (f->inicio==f->fim)
    {
        printf("fila vazia!!");
        return 0;
    }
    else return 1;
}

void limpaFila(struct fila *f)
{
    f->inicio=0;
    f->fim=0;
}

int primeiroElemento(struct fila *f)
{
    int p;
    p=f->fila[f->inicio];
    return p;
}
