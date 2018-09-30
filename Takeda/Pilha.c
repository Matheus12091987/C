#include <stdio.h>
#include <stdlib.h>

/*###Região da TYPEDEF###*/

typedef struct fila{

	long int RA;
	char nome[40];
	struct fila *prox;		//Apontamento geral para a estrutura fila

}fila;

/*###Região das Subrotinas###*/

void ImprimirMenu(fila *inicio, fila *fim){

	printf("Bem vindo ao programa de Fila Encadeada\n");
	printf("A seguir digite o numero correspondente ao que desejas\n\n");
	printf("MENU\n");
	printf("1 - Inserir\n");

	if(fim != NULL){
		printf("2 - Listar\n");
		
		if(inicio!=NULL){
			printf("3 - Remover na FILA\n");
		}else{
			printf("3 - Remover na PILHA\n");
		}

		printf("4 - Esvaziar\n");
		
		if(inicio != NULL){
			printf("5 - Transferir FILA >>> PILHA\n");
		}else{
			printf("5 - Transferir PILHA >>> FILA\n");
		}
	}

	printf("6 - Sair\n\n");

}

void inserir_fila(fila **inicio, fila **fim){
	
	system("clear");
	fila *novo = (fila *)malloc(sizeof(fila));

	if(novo == NULL){

		printf("Sem Memoria\n\n");
		exit(1);

	}else{

		printf("Digite o Numero de RA: ");
		scanf("%ld", &novo->RA);

		if(*inicio == NULL){

			*inicio = novo;

		}else{

			(*fim)->prox = novo;

		}

	}

	*fim = novo;

	system("clear");

	//printf("%p\n", novo);
	//printf("%d", novo->RA);

}

void listar_fila(fila *inicio){

	int n;

	if(inicio == NULL){

		printf("Fila Vazia!!!\n\n");

	}else{

		while(inicio != NULL){

			printf("RA: %ld\n", inicio->RA);
			inicio = inicio->prox;			//Nesta linha o programa pega
											//o endereço do proximo e coloca
											//no indexador inicio

		}

	}

	printf("\n\nDigite a opção desejada:\n1 - Voltar        2 - Inserir");
	scanf("%d", &n);
	
	system("clear");

}

/*###Programa Principal###*/

void main (void){

	int n = 0;
	fila *inicio = NULL, *fim = NULL, *novo;

	system("clear");

	do{

		ImprimirMenu(inicio, fim);
		scanf("%d", &n);

		switch (n){

			case (1):		//Inserir

				inserir_fila(&inicio, &fim);

				break;	

			case (2):		//Listar

				listar_fila(inicio);

				break;

			case (3):

				break;

			case (4):

				break;

			case (5):

				break;

			case (6):

				break;

			default:

				system("clear");
				printf("VALOR INVÁLIDO, digite de 1 a 5\n\n");
				break;

		}

	}while(n != 6);

}