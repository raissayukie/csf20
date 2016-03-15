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
    //quando criar uma fila setar inicio, fim e posicao em 0, só ra garantir!

return 0;
}

typedef struct fila //variavel tipo fila
{

    int inicio;
    int fim;
    int fila[MAX];
    int posicao;

};

void incluiFila(int c, struct fila *f) //inclui o elemento c na fila
{

    f->fila[f->posicao]=c;
    f->fim=f->posicao;
    f->posicao++;
}

int retiraDaFila(struct fila *f)//retira o primeiro elemento da fila e retorna o elemento retirado
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

void limpaFila(struct fila *f) //apaga todos os elementos da fila
{
    f->inicio=0;
    f->fim=0;
}

int primeiroElemento(struct fila *f) //returna o primeiro elemento da fila
{
    int p;
    p=f->fila[f->inicio];
    return p;
}
