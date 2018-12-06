/*Programa de Lista Duplamente Encadeada com
  inserção ordenada (por nome) circular
	-> 09/11/2018
	-> Matheus Peres	*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{

	int RA;						//Entrada do valor do RA
	char Nome[100];				//Nome do aluno
	struct fila *anterior;		//Aponta para o Anterior
	struct fila *proximo;		//Aponta para o Proximo
	
} lista;

void menu(){

	printf("Bem vindo ao programa de inclusão de alunos\n\n");
	printf("Digite abaixo o numero correspondente a sua necessidade\n");
	printf("MENU\n");
	printf("1 - Inserir\n");
	printf("2 - Listar\n");
	printf("3 - Remover\n");
	printf("4 - Esvaziar\n");
	printf("5 - Procurar\n");
	printf("6 - Sair\n\n");

}

void inserir(**inicio, **fim){

	lista *novo = (lista *)malloc(sizeof(lista));

	if (novo == NULL){

		printf("Sem memoria para inseriri novos elementos\n\n")
		exit(1);
	}

	if((*inicio == NULL)&&(*fim == NULL)){

		printf("Digite o RA: ");
		scanf("%d", &novo->RA);

		printf("\nDigite o Nome: ")
		scanf(" %[^\n]s", & novo->Nome)

		*novo->anterior = novo;
		*novo->proximo = novo;

		*inicio = novo;
		*fim = novo;

	}else{

		printf("Digite o RA: ");
		scanf("%d", &novo->RA);

		printf("\nDigite o Nome: ")
		scanf(" %[^\n]s", & novo->Nome)

		//Continuar o codigo comparação para ordenação

	}



}


void main(void){

	lista *inicio = NULL, *fim = NULL, *novo;

	int op;

	do{
		menu(inicio, fim);
		scanf("%d", &op);

		switch(op){

			case 1:
				inserir(&inicio, &fim);
				break;

			case 2:
				//listar(inicio);
				break;

			case 3:

				//inicio = remover(inicio);
				break;

			case 4:

				//inicio = esvasiar(inicio);
				break;


		}

	}while(op != 6);

}