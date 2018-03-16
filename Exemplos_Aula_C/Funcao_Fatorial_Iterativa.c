/*Programa de Função Fatorial (Iterativa)
  Matheus Peres | 15-03-2018 */

#include <stdio.h>
#include <stdlib.h>

int fat_iter(int n){

	int i, produto = 1;

	if((n == 0)||(n == 1)){

		return produto;

	}else{

		for(i=1;i<=n;++i){

			produto*=i;

		}
		return produto;
	}

}

int main(void){

	int n, fat;

	printf("\nFatorial: n! \nEntre com um numero inteiro e positivo: ");
	scanf("%d", &n);

	if(n<0){

		printf("\nErro! n<0\n");

	}else{

		fat = fat_iter(n);
		printf("\n%d! = %d\n", n, fat);

	}

}
