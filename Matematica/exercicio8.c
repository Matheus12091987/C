#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcula(float valor){

	float resultado;

	if (valor >=0 && valor <=5){

		resultado =  (160*M_PI*(pow(valor,3)))/3;

	}

	if(valor>5 && valor<=9){

		resultado = ((160*M_PI*(pow(5,3))/3))+(4000*M_PI*(valor-5));

	}

	if(valor<0 || valor>9){

		resultado = 0;
		printf("\n\nDigite um valor entre 0 e 9");

	}

	return resultado;

}

int main()
{
    float C;
    float n;

    printf("Escreva o valor do nivel em metros : ");
    scanf("%f", &n);

    C = calcula(n);

    printf("\n\nO valor resultado da função com o nível em %.2f metros eh: %.4f\n\n", n, C);
    return 0;
}
