#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*	O que é Typedef: É Uma definição de tipo de variavel*/

typedef struct cadastro{

	char nome[100];
	int idade;
	long long int cpf;
	long int cep;

}cadastro;

void main(void){

	cadastro aluno;

	printf("Digite seu nome: ");
	scanf("%[^\n]s", aluno.nome);


	printf("\n\nO Nome digitado é: %s", aluno.nome);

}