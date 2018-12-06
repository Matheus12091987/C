#include <stdio.h>
#include <stdlib.h>


typedef struct Lista {
	int RA;
	char nome[30];
	struct Lista *prox;
}Lista;

void inserir(Lista **ini, Lista **f);
void menu();
Lista* localiza(Lista *ini, int l);
void listar(Lista *ini, Lista *f);
int contar(Lista *ini, Lista *f);
Lista* remover(Lista *ini);
void esvaziar(Lista **ini);
void removerReg(Lista **ini, Lista **f);

int main(){

	Lista *inicio = NULL, *fim;
	
	char op;
	do {
	menu();
	scanf(" %c", &op);

		switch(op){
			case '1':
				system("clear");
				inserir(&inicio, &fim);		
			break;
			case '2':
				system("clear");
				listar(inicio, fim);
			break;
			case '3':
				system("clear");
				inicio= remover(inicio);
			break;
			case '4':
				system("clear");
				esvaziar(&inicio);
			break;
			case '5':
				system("clear");
				removerReg(&inicio, &fim);
			break;
			case '6':
				system("clear");
				exit(0);
			break;
			default:
				system("clear");
				printf("Opção inválida!\n");
			break;	
		}
	}while (op != '6');

}


void menu(){

	printf("\nDigite o número correspondente a ação:\n");
	printf("\n1 - Inserir\n");
	printf("2 - Listar\n");
	printf("3 - Remover no início\n");
	printf("4 - Esvaziar\n");
	printf("5 - Remove registro\n");
	printf("6 - Sair\n");

}

Lista* localiza(Lista *ini, int l) {
	
	while (l != ini->prox->RA) {
				ini = ini->prox;
				if (ini->prox == NULL)
					//printf("Registro não encontrado!\n");
					return NULL;
	}
	Lista *aux1 = ini;
		return aux1;
}

int contar(Lista *ini, Lista *f) {

	int count = 0;

	do {
		count+= 1;
		ini = ini->prox;
	} while (ini != f);
	printf("Contando\n");
	return count;

}

void inserir(Lista **ini, Lista **f) {

	if (*ini == NULL) {

		Lista *novo = (Lista*)malloc(sizeof(Lista));

		printf("RA: ");
		scanf("%d", &novo->RA);
		printf("Nome: ");
		scanf(" %[^\n]s", &novo->nome);
		*ini = *f = novo;
		novo->prox = NULL;

	} else {

		//int count = contar(*ini, *f);

		if (*ini == *f) {
			Lista *novo = (Lista*)malloc(sizeof(Lista));

			printf("RA: ");
			scanf("%d", &novo->RA);
			printf("Nome: ");
			scanf(" %[^\n]s", &novo->nome);
			//Lista *aux = *ini;
			*ini = novo;
			//novo->prox = aux;
			(*ini)->prox = *f;
			(*f)->prox = *ini; 
		}

		else {
			int insOP;
			printf("Digite onde deseja inserir. Os registros existentes são:\n");
			listar(*ini, *f);
			scanf("%d", &insOP);

			if (insOP == (*ini)->RA) {

				Lista *novo = (Lista*)malloc(sizeof(Lista));

				printf("RA: ");
				scanf("%d", &novo->RA);
				printf("Nome: ");
				scanf(" %[^\n]s", &novo->nome);
				Lista *aux = *ini;
				*ini = novo;
				novo->prox = aux;

			} else {
				Lista *aux = localiza(*ini, insOP);
				if (aux == NULL)
					printf("Registro não encontrado!\n");
				else {
					Lista *novo = (Lista*)malloc(sizeof(Lista));
					printf("RA: ");
					scanf("%d", &novo->RA);
					printf("Nome: ");
					scanf(" %[^\n]s", &novo->nome);
					novo->prox = aux->prox;
					aux->prox = novo;
				}
			}
		}
	}
}


void listar(Lista *ini, Lista *f) {

	if (ini == NULL)
		printf("Lista vazia!\n");
	else {
		do {
			printf("RA: %d, Nome: %s\n", ini->RA, ini->nome);
			ini = ini->prox;
		} while (ini != f);
	}
	printf("\n");
}

Lista* remover(Lista *ini) {

	if (ini == NULL) {
		printf("Fila vazia!\n");
		return NULL;
	} else {
		Lista* aux = ini->prox;
		free(ini);
		return aux;
	}
}

void esvaziar(Lista **ini) {

	if (*ini == NULL)
		printf("Fila vazia!\n");
	else {
		while (*ini != NULL)
			*ini = remover(*ini);
	}
}

void removerReg(Lista **ini, Lista **f) {

	if (*ini == NULL) {
		printf("Lista vazia!\n");
	} else {
		int count = contar(*ini, *f);
		printf("N= %d\n", count);
		int insOP;
		printf("Digite o registro que deseja remover.\n Os registros existentes são:\n");
		listar(*ini, *f);
		scanf("%d", &insOP);

		if (count == 1 | (*ini)->RA == insOP) {
			*ini = remover(*ini);
		} else {
			if (localiza(*ini, insOP) != NULL) {
				Lista *aux = localiza(*ini, insOP);
				Lista *rm = localiza(*ini, insOP)->prox;
				printf("%d\n", rm->RA);
				aux->prox = rm->prox;
				free(rm);
			} else 
				printf("Registro não localizado!\n");
		}
	}
}
