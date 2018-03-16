/*Programa de Função Fatorial (Recursiva)
  Matheus Peres | 15-03-2018 */

#include <stdio.h>
#include <stdlib.h>

int fat_rec(int n){

	if((n == 0)||(n == 1)){

		return (1);

	}else{

		return (n*fat_rec(n-1));

	}

}

int main(void){

	int n, fat;

	printf("\nFatorial: n! \nEntre com um numero inteiro e positivo: ");
	scanf("%d", &n);

	if(n<0){

		printf("\nErro! n<0\n");

	}else{

		fat = fat_rec(n);
		printf("\n%d! = %d\n", n, fat);

	}

}
