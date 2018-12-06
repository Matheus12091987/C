#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fila{

	int RA;
	int Nome[40];
	struct fila *prox;

} fila;

void menu(){

	printf("Bem vindo ao programa de Fila Encadeada\n");
	printf("A seguir digite o numero correspondente ao que desejas\n\n");
	printf("MENU\n");
	printf("1 - Inserir\n");
	printf("2 - Listar\n");
	printf("3 - Remover na FILA\n");
	printf("4 - Esvaziar\n");
	printf("5 - Transferir FILA >>> PILHA\n");
	printf("6 - Sair\n\n");

}

fila *remover(fila *ini){

	if(ini == NULL){

		printf("fila Vazia");
		return NULL;
	}else{
		fila *aux = ini->prox;
		free(ini);
		return aux;
	}

}

fila *esvasiar(fila *ini){

	if(ini == NULL){

		printf("Fila Vazia");
		
	}else{
		
		while(ini != NULL){

			ini = remover(ini);
			
		}

	}

}

void listar(fila *ini){

	if(ini == NULL){

		printf("Fila Vazia!!!\n\n");

	}else{

		while(ini != NULL){

			printf("RA: %d\n", ini->RA);
			ini = ini->prox;				//Nesta linha o programa pega
											//o endereço do proximo e coloca
											//no indexador inicio

		}

	}
}


void inserir(fila **ini, fila **fim){

	fila *novo = (fila *)malloc(sizeof(fila));

	if(novo == NULL){

		printf("\n\n Sem memoria!!! \n\n");
		exit(1);
	}

	printf("Insira o RA: ");
	scanf("%d", &novo->RA);
	printf("\nInsira o Nome do Aluno: ");
	gets("%d", &novo->Nome);
	novo->prox = NULL;

	if(*ini == NULL){

		*ini = novo;

	}else{

		(*fim)->prox = novo;
	}

	*fim = novo;
}


void main(void){

	fila *inicio = NULL, *fim = NULL, *novo;

	int op;

	do{
		menu(inicio, fim);
		scanf("%d", &op);

		switch(op){

			case 1:
				inserir(&inicio, &fim);
				break;

			case 2:
				listar(inicio);
				break;

			case 3:

				inicio = remover(inicio);
				break;

			case 4:

				inicio = esvasiar(inicio);
				break;


		}

	}while(op != 5);
}