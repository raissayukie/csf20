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

void main ()
{


}

typedef struct fila
{

    int inicio=0, fim=0;
    int fila[10];
    int posicao=0;

};

void incluiFila(int c, fila *f)
{

    f.fila[f.posicao]=c;
    f.fim=f.posicao;
    f.posicao++;
}

void retiraDaFila(fila *f)
{
    int retirado;
    retirado=f.fila[f.inicio];
    for (int i =0; i<f.fim -1; i++)
    {
        f.fila[i]=f.fila[i+1];
    }
    return retirado;
}

int filaVazia(fila *f)//retorna 0 se a fila esta vazia e 1 se tem elementos
{
    if (f.inicio==f.fim)
    {
        printf("fila vazia!!");
        return false;
    }
    else return true;
}

void limpaFila(fila *f)
{
    f.inicio=0;
    f.fim=0;
}

int primeiroElemento(fila *f)
{
    int p;
    p=f.fila[f.inicio];
    return p;
}
