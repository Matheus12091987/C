#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

void main(void){

	double raio = 0; 
	double resultado;

	scanf("%lf", &raio);
	resultado= PI * (pow(raio,2));
	printf("A=%.4lf\n", resultado);

}