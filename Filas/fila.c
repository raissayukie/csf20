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

/*Tipo abstrato de Fila */
typedef struct{
	
	int v[MAX];
	int inicio, fim;

}Fila;

/*Função que cria a fila*/
Fila* criaFila(){
	Fila* q = (Fila*)
	malloc (sizeof(Fila));
	q -> inicio;
	q -> fim;
	return q; 	
}  

/* Adiciona o elemento recebido no fim da fila e incrementa fim*/
void incluiNaFila (Fila* q, int x){	
	q -> v[q -> fim++] = x; 
	if(q -> fim == MAX){
		q -> fim = 0;
	}
}

/*Remove o elemento do fim da fila */
int retiraDaFila(Fila* q){
	int x = q -> v[q->inicio++];
	if (q -> inicio == MAX){
		q -> inicio;
	} 
	return x;

}

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	printf("Olar!!!\n");
	Fila* q = criarFila();
	incluiNaFila(q, 10);
	incluiNaFila(q, 12);
	incluiNaFila(q, 13);
	incluiNaFila(q, 14);
	incluiNaFila(q, 15);
	incluiNaFila(q, 16);

	printf("%d\n", retiraDaFila(q));
	printf("%d\n", retiraDaFila(q));
	printf("%d\n", retiraDaFila(q));
	printf("%d\n", retiraDaFila(q));
	printf("%d\n", retiraDaFila(q));
	printf("%d\n", retiraDaFila(q));










	return 0;
}