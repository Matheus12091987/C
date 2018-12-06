/*	Exercicio 8 Lista Fernando
	
	Escreva um programa (agenda) que armazene o nome endereço e telefone de
	10 pessoas. Utilize obrigatóriamente estruturas struct */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct agenda{

	char nome[50];
	char endereco[50];
	int numero;
	unsigned int telefone;
};

void main(void){

	struct agenda contato[10];

	for (int i = 0; i < 3; ++i)
	{
		scanf("%s", contato[i].nome);
		scanf("%s", contato[i].endereco);
		scanf("%d", &contato[i].numero);
		scanf("%d", &contato[i].telefone);
		
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("\n\n%s\n\n", contato[i].nome);
		printf("%s", contato[i].endereco);
		printf(" %d\n\n", contato[i].numero);
		printf("%d\n\n", contato[i].telefone);
	}

}