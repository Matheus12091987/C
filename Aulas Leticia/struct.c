#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*	O que é Struct: É uma estrutura, tal que as variaveis ficam dentro de 
	uma estrutura (armário)*/

struct cadastro{

	char nome[100];
	int idade;
	long long int cpf;
	long int cep;

};

void main(void){

	struct cadastro aluno1, aluno2, aluno3;

	printf("escreva o nome do aluno 1: \n");
	scanf(" %[^\n]s", aluno1.nome);
	printf("digite a idade: do aluno 1:\n");
	scanf("%d", &aluno1.idade);

	printf("\n\nValor digitado:%s\n\n", aluno1.nome );




}