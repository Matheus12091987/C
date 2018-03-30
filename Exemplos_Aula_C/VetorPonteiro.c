#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main(void){

	char *tabela[N];	//Vetor de ponteiros de N ponteiros para char
	char nome[20];		//String para guardar o Nome do cidadão
	int i, pos;

	printf("Entre com um nome: ");
	gets(nome);

	for(i=0;i<N;++i){

	tabela[i] = NULL;

	}

	printf("\n\nQual a posição de %s ( 0 <= %d ): ", nome, N);
	scanf("%d", &pos);

	tabela[pos-1] = nome;

	for(i=0;i<N;++i){

		printf("\n%d. %s", i+1, tabela[i]);

	}

	printf("\n\n");

	return 0;

}
