/*
Est. Dados 1 (S73)- UTFPR - Pilhas
Guilmour Rossi
Marinho Welter
Pedro Pereira
Raissa Yukie Rodrigues
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 20 /* Define o valor máximo da string a ser analisada e da nossa fila também */

typedef struct{
	
	int v[MAX];
	int inicio, fim;

}Fila;

Fila* criarFila(){
	Fila* q = (Fila*)
		malloc (sizeof(Fila));
	q -> inicio;
	q -> fim;
	return q; 	
}  

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	printf("Olar!!!\n");
	return 0;
}