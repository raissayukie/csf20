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

#define MAX 40 /* Define o valor máximo da string a ser analisada e da nossa fila também*/ 

/*Tipo abstrato de Fila */
/* Struct controleFila*/
typedef struct{          
	
	int v[MAX];
	int inicio, fim; //tamanho lista?? carro *fim; int tamanho;

}Fila;


/* Elemento fila */
typedef struct carroFila{
	
	int *tempoSaida;
	struct carroFila *seguinte;

}carro;

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

	int i = 0;

	Fila* q = criaFila();

	
	for (i = 0; i < 10; i++)
	{
		incluiNaFila(q, i+1);
	}


	
	for (i = 0; i < 10; i++)
	{
		printf("|.%d.|", retiraDaFila(q));
	}



	free(q);
	printf("\n");
	return 0;
}



/* DESCONSIDERAR 


	printf(":::::::::::::::::::::: URBS :::::::::::::::::::::\n");
	printf("\n");
	printf(":::::::Av. Mal. Floriano :::::::  "KGRN" >>>>>>   \n");
	printf("------------------------------------------\n");
	printf("\n------------------------------------------\n");
	printf("\n::::::Av. Mal. Floriano :::::::    <<<<<<   \n"); 
	printf("------------------------------------------\n");
	printf("\n------------------------------------------\n");
	





*/
