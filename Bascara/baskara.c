#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//#include <graphics.h>

float valA, valB, valC;
FILE *txt_txt;

void resolvendo_equacao(float valA3, float valB3, float valC3){

	int i = -10;
	float resultado = 0;
	txt_txt = fopen("Equacao.csv", "w");
	fprintf(txt_txt, "Valor de X\tValor de Y");
	printf("\n\nValor de X\tValor de Y");

	for (i = -10 ; i <= 10 ; ++i){

		resultado = (pow(i,2) * valA3) + (i * valB3) + (valC3);
		printf("\n%d\t\t\%.2f", i, resultado);
		fprintf(txt_txt,"\n\%d\t\%.2f", i, resultado);

	}

	fclose(txt_txt);
	printf("\n\n");

}

void calculo_das_raizes(float delta2, float valA2, float valB2){

	float x1 = 0;
	float x2 = 0;

	x1 = (-valB2 + (sqrt(delta2)))/(valA2*2);
	x2 = (-valB2 - (sqrt(delta2)))/(valA2*2);

	printf("\n\nOs Valores das Raizes são X1 = %.2f e X2 = %.2f e o valor de delta ficou em %.2f\n\nBy Matheus Peres\n\n", x1, x2, delta2);

}

int calc_delta(float a, float b, float c){

	float resultado = 0;

	resultado = (pow(b,2))-(4*a*c);

	return resultado;

}

void main(void){

	float delta = 0;

	system("clear");

	printf("Digite em sequencia os valores dos termos da equação de segundo grau com espaço entre eles,\nobedecendo o seguinte criterio a seguir:\n\n   -Valor da constante do termo quadratico\n   -Valor da contante do  termo não quadratico\n   -Valor do termo livre\n\nDigite um em seguida do outro: "); 
	scanf("%f %f %f", &valA, &valB, &valC);
	printf("\nO valor digitado foi %.2f %.2f %.2f\n\n", valA, valB, valC);

	delta = calc_delta(valA, valB, valC);

	if(delta >= 0){

		calculo_das_raizes(delta, valA, valB);
		resolvendo_equacao(valA, valB, valC);
	}else{

		printf("\n\nRaiz negativa equação de segundo grau sem solução no campo dos numeros Reais\n\nBy Matheus Peres\n\n");

	}
}
