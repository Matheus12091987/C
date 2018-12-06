/*	1ª Lista de exercicios de LP - Exercicio numero 1

	Nome: Matheus Gonçalves Peres
	RA: 2840481723024									*/

#include <stdio.h>
#include <stdlib.h>

void regr(int n){

	printf("%d\n", n);
	n = n-2;

	if (n<=0){

		printf("0");
		return 0;

	}
	else{

		return (regr(n));

	}

}

void bin(int n){


	return (0);
}


void main(void){
	
	int n = 0;

	printf("Digite um numero: ");
	scanf("%d", &n);
	system("clear");

	regr(n);
	bin(n);

	return(0);
}

