#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int tam = 0;
int somatoria_principal = 0;
int somatoria_secundaria = 0;
int somatoria_resto = 0;
int acc = 0;
int quant_par_prin = 0;
int soma_par_sec = 0;
int cont_pares = 0;
int numeros_impares = 0;

void main(void){

	srand(time(NULL));
	system("clear");
	//printf("\e[H\e[2J");	//Igual a função system("clear")

	printf("\nDigite o tamanho quadratico da matriz utilizada (X x Y sendo que Y = X): ");
	scanf("%d", &tam);
	printf("\n\nO valor da matriz ficou em:  %d x %d \n\n", tam, tam);

	int valor_matriz[tam][tam];

	for(int i = 0; i <= (tam - 1); ++i){

		for(int j = 0; j <= (tam - 1); ++j){

			int ii = 0;

			if(i > ii && j == 0){

				printf("\n\n\n");
				ii = i;

			}

			//valor_matriz[i][j] = ((i + j)*(i + j));	//antes do abaixo
			valor_matriz[i][j] = (rand()%100);
			printf("%d\t", valor_matriz[i][j]);
			acc = acc + valor_matriz[i][j];
			if(valor_matriz[i][j]%2 == 0){

				++cont_pares;

			} else{

				numeros_impares = numeros_impares + valor_matriz[i][j];

			}

		}

	}

	for(int i = 0; i <= (tam - 1); ++i){

		somatoria_principal = somatoria_principal + valor_matriz[i][i];

		if(valor_matriz[i][i]%2 == 0){

			quant_par_prin++;

		}
	}

	int j = (tam - 1);

	for(int i = 0; i <= (tam - 1);  ++i){

		somatoria_secundaria = somatoria_secundaria + valor_matriz[i][j];
		--j;

		if(valor_matriz[i][j]%2){

			soma_par_sec = soma_par_sec + valor_matriz[i][j];

		}
	}

	if(tam % 2 == 0){


		somatoria_resto = acc - (somatoria_principal + somatoria_secundaria);

	}else{

		somatoria_resto = (acc + valor_matriz[tam/2][tam/2]) - (somatoria_principal + somatoria_secundaria);

	}

	printf("\n\nA somatória da diagonal principal é: %d\n\n", somatoria_principal);
	printf("A somatória da diagonal secundária é: %d\n\n", somatoria_secundaria);
	printf("A somatória de todos os valores não contemplados acima é: %d\n\n", somatoria_resto);
<<<<<<< HEAD
	printf("A somatória de todos os elementos desta matriz é: %d\n\n", acc);
	printf("A quantidade de numeros pares na diagonal principal é: %d\n\n", quant_par_prin);
	printf("A somatória dos pares da diagonal secundaria é: %d\n\n", soma_par_sec);

	if(cont_pares >= 5){

		printf("Já que o numero de numeros pares desta matriz é igual a %d então o resultado é: %d\n\nBy Matheus Peres\n\n", cont_pares, acc*3);

	} else{

		printf("Ja que o numero de pares desta matriz é igual a %d então o resultado é: %d\n\nBy Matheus Peres\n\n", cont_pares, numeros_impares*2);

	}
=======
>>>>>>> f70743949bed108da945051395086a07826a6b1d

}
