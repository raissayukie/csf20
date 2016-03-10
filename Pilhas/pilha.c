/*
Est. Dados 1 (S73)- UTFPR - Pilhas
Guilmour Rossi
Marinho Welter
Pedro Pereira
Raissa Yukie Rodrigues
*/

#include <stdio.h>
#include <stdlib.h>
/* Define o valor máximo da string a ser analisada e da nossa pilha também */
#define MAX 21
int inicio = 0, topo = 0;
char pilha[MAX];

/* Cabeçalhos de funções a serem utilizadas*/

int pilhaVazia();
int pilhaCheia();
void push(char x);
char pop();

/*inicia pilha*/
/*struct pilha
{
	int topo;
	int elementos[MAX];
};*/




/* main */
int main(int argc, char const *argv[])
{
	/* Input do Usuário com sua equação */
	char input[MAX]; 	
	
	//printf("Entre sua equação: \n");
	
	/*Recebe do teclado do Usuário*/
	//gets(input);
	//fgets(input, sizeof(input), stdin);

	//printf("\nSua equação foi: \n");
	//printf("%s\n", input);

	//struct pilha calc;
	//calc.topo = -1;

	//testaSeVazia(ptpilha);

	push('E');
	push('a');
	push('i');
	push('S');

	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	


	return 0;
}

int pilhaVazia(){
	return (inicio == topo);
}

int pilhaCheia(){
	return(topo == MAX);
}

void push(char x){
	if ( !pilhaCheia() )
	{
		pilha[topo++] = x; 
	}
	else {
		printf("Pilha esta cheia!\n");
	}
}
char pop(){
	char aux;
	if ( !pilhaVazia() )
	 {
	 	aux = pilha[topo - 1];
	 	topo--;
	 	return aux;
	 } 
	 else {
	 	printf("Pilha esta vazia!\n");
	 }
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

