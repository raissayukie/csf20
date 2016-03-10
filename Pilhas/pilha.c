/*
Est. Dados 1 (S73)- UTFPR - Pilhas
Guilmour Rossi
Marinho Welter
Pedro Pereira
Raissa Yukie Rodrigues
*/

#include <stdio.h>
#include <stdlib.h>

/*inicia pilha*/
struct pilha
{
	int topo;
	int elementos[100];
};


/* main */
int main(int argc, char const *argv[])
{
	/* Input do Usuário com sua equação */
	char input[20]; 	
	
	printf("Entre sua equação: \n");
	
	/*Recebe do teclado do Usuário*/
	gets(input);

	struct pilha calc;
	calc.topo = -1;

	//testaSeVazia(ptpilha);


	return 0;
}

/*bool testaSeVazia(calc){

	if(ptpilha->topo == -1){
		printf("A pilha esta vazia.\n");
		return 1;
	}else{
		printf("A pilha nao estah vazia.\n");
		return 0;
	}	
}*/

