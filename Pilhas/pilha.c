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

#define MAX 20 /* Define o valor máximo da string a ser analisada e da nossa pilha também */
int inicio = 0, topo = 0;
char pilha[MAX]; /*Essa pilha será usada para trabalhar os parenteses*/
char input[MAX];  /*Essa string será o input da equação do usuario */
char numeros[MAX];  /*Essa pilha */
int flag = 1; /*Diz se uma euqação é verdadeira ou não. 0 false 1 true */

/* Cabeçalhos de funções a serem utilizadas*/

int pilhaVazia();
int pilhaCheia();
void push(char x);
char pop();
void contaPt();
void calc();

/*inicia pilha*/
/*struct pilha
{
	int topo;
	int elementos[MAX];
};*/

/* main */
int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	
	/* Input do Usuário com sua equação */
	printf("Insira sua equação: \n");
	
	/*Recebe do teclado do Usuário*/
	//gets(input);
	fgets(input, sizeof(input), stdin);

	printf("\nSua equação foi: \n");
	printf("%s\n", input);

	//struct pilha calc;
	//calc.topo = -1;
	//testaSeVazia(ptpilha);
	/*
	push('E');
	push('a');
	push('i');
	push('S');

	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	printf("%c\n", pop());
	*/

	contaPt();
	calc();
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
		printf("Pilha está cheia!\n");
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
	 	printf("Pilha está vazia!\n");
	 }
}

/*Função que contab o numero de parenteses e retorna true se for valida ou false se não*/
void contaPt(){
	int i = 0;
	char aux;
	char e;
	while(i < 20 ){

		e = input[i];

		if (e == '('){
			push(e);
		}

		if(e == ')'){
			if( pilhaVazia() ){
				flag = 0;
			} 
			else{
				aux = pop();
				if(aux != '('){
					flag = 0;
				}
			}
		}
		i++;
	}
	if (!pilhaVazia()){
		flag = 0; 
	}
	if(flag != 0)
		printf("A equação inserida é válida.\n");
	else
		printf("ERROR! A equação inserida não é válida.\n");
}

void calc(){
	int result = 0;
	int i = 0;
	char aux;
	char e;
	while(i < 20 ){

			if(input[i] == '+'){
				result = result + ((input[i-1] - '0') + (input[i+1]- '0'));
			}
			
			else if(input[i] == '-'){
				result = result + ((input[i-1]- '0') - (input[i+1]- '0'));
			}
			
			else if(input[i] == '*'){
				result = result + ((input[i-1]- '0') * (input[i+1]- '0'));
			}
			else if(input[i] == '/'){
				result = result + ((input[i-1]- '0') / (input[i+1]- '0'));
			}

			i++;
		}

		printf("O resultado foi %d\n", result);
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

