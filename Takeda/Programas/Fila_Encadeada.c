#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct fila{
	int RA;
	struct fila *prox;
}fila;//adicionar filas aqui se vc estiver no linux

void imprimirMenu() {
	system("cls");
	printf("MENU - INGRESSOS\n");
	printf("1 - Inserir\n");
	printf("2 - Listar\n");
	printf("3 - Remover\n");
	printf("4 - Esvaziar\n");
	printf("5 - Sair\n\n");
}

void inserir(fila **inicio, fila **fim) {
	fila *novo = (fila *)malloc(sizeof(fila));
	if (novo == NULL) {
		printf("Sem Memoria");
		exit(1);
	}
	else {
		printf("Digite o RA: ");
		scanf("%d", &novo->RA); // mesma coisa que a desgraca do scanf("%d", &(*novo),RA);
		novo->prox = NULL;

		if (*inicio == NULL) {
			*inicio = novo;
		}
		else {
			(*fim)->prox = novo;
		}
	}
	*fim = novo;
}

void listar(fila *inicio) {
	if (inicio == NULL) {
		printf("Fila Vazia\n");
	}
	else {
		while (inicio != NULL) {
			printf("RA: %d\n", inicio->RA);
			inicio = inicio->prox;
		}
	}
}

fila *remover(fila *inicio) {
	if (inicio == NULL){
		printf("Fila vazia\n");
		return NULL;
	}
	else {
		fila *aux = inicio->prox;
		free(inicio);
		return aux;
	}
}

void esvaziar(fila **inicio) {
	if (*inicio == NULL){
		printf("fila vazia\n");
	}
	else{
		while (*inicio != NULL){
			*inicio = remover(*inicio);
		}
	}
}


void main() {
	int op;
	fila *inicio = NULL,*fim = NULL,*novo;

	do {
		imprimirMenu();
		scanf("%d", &op);

		switch (op) {
			case 1:
				system("cls");
				printf("Inserir\n");
				inserir(&inicio, &fim);
				system("cls");
			break;

			case 2:
				system("cls");
				printf("listar\n");
				listar(inicio);
				//getch();
			break;

			case 3:
				system("cls");
				printf("Remover\n");
				printf("Inserir\n");
				inicio = remover(inicio);
				system("cls");
			break;

			case 4:
				printf("Esvaziar\n");
				esvaziar(&inicio);

			break;

			case 5:
				printf("Sair\n");
			break;

			default:
				printf("Opcao invalida!\n");
				break;
			}

	} while (op != 5);
}
