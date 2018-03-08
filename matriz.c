#include <stdio.h>

int tam = 0;
int somatoria_principal = 0;
int somatoria_secundaria = 0;
int somatoria_resto = 0;
int acc = 0;

void main(void){

	printf("\e[H\e[2J");	//Igual a função system("clear")

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

			valor_matriz[i][j] = ((i + j)*(i + j));
			printf("%d\t", valor_matriz[i][j]);
			acc = acc + valor_matriz[i][j];

		}

	}

	for(int i = 0; i <= (tam - 1); ++i){

		somatoria_principal = somatoria_principal + valor_matriz[i][i];

	}

	int j = (tam - 1);

	for(int i = 0; i <= (tam - 1);  ++i){

		somatoria_secundaria = somatoria_secundaria + valor_matriz[i][j];
		--j;
	}

	if(tam % 2 == 0){


		somatoria_resto = acc - (somatoria_principal + somatoria_secundaria);

	}else{

		somatoria_resto = (acc + valor_matriz[tam/2][tam/2]) - (somatoria_principal + somatoria_secundaria);

	}

	printf("\n\nA somatória da diagonal principal é: %d\n\n", somatoria_principal);
	printf("A somatória da diagonal secundária é: %d\n\n", somatoria_secundaria);
	printf("A somatória de todos os valores não contemplados acima é: %d\n\nBy Matheus Peres\n\n", somatoria_resto);

}
