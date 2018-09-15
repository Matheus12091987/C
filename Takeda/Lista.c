#include<stdio.h>
#include<stdlib.h>

typedef struct Fila{

	int RA;
	Fila *prox;

};

void ImprimirMEnu(){

	printf("Bem vindo ao Cadastrador de Ingressos Takeda\n\n");
	printf("1 - Inserir\n");
	printf("2 - Remover\n");
	printf("3 - Listar\n");
	printf("4 - Esvasiar\n");
	printf("5 - Sair\n\n");
	printf("Digite o indice correspondente ao que necessita: \n");

}


void main(void){

	int n, aux;
	Fila inicio = NULL, *fim, *novo;

	do{

		ImprimirMEnu();

		scanf("%d", &n);

		switch (n){

			case 1:

				printf("Opção 1 selecionada\n");

				novo = (Fila *)malloc(sizeof(Fila));

				if(novo == NULL){
					printf("Sem Memoria");
				}else{
					printf("Digite o RA: ")
					scanf("%d", &novo -> ra);
					novo -> prox = NULL

					if(inicio == NULL){
						inicio = novo;
					}else{
						fim -> proximo=novo;
					}

				}

				fim = novo;

			break;

			case 2:

				printf("Opção 2 selecionada\n");

				if(inicio == NULL){
					printf("Fila Vazia");
				}else{
					
					aux = inicio -> prox;
					free(inicio);
					inicio = aux;

				}
				
			break;

			case 3:

				printf("Opção 3 selecionada\n");

				if(inicio == NULL){
					printf("Fila Vazia");
				}else{
					aux = inicio;

					while(aux != NULL){

						printf("RA: %d", aux -> ra);
						aux = aux -> prox;

					}

				}
				
			break;

			case 4:

				printf("Opção 4 selecionada\n");

				if(inicio == NULL){
					printf("Fila Vazia")
				}else{
					while(inicio == NULL){
						aux = inicio -> prox;
						free(inicio);
						inicio = aux;
					}
				}
				
			break;

			case 5:

				printf("Opção 5 selecionada\n");
				
			break;

			default:

				printf("Opção selecionada errada escolha uma opção válida (1 a 5)\n");


		}

	}while(n!=5);





}