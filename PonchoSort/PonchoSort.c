#include <stdlib.h>
#include <stdio.h>

#define TAM 20
/*### Variaveis Globais ###*/
int vetor[TAM]={11,10,9,8,7,6,5,4,3,2,1,12,13,14,15,16,17,18,19,20};
int j, menor, maior, troca, pos_menor, pos_maior;
/*### Funções ###*/
void imprime(){

	for(int x=0;x<TAM;x++){

		printf("| %d |", vetor[x]);

	}

}
/*### Programa Principal ###*/
void main(void){

	printf("\nVetor Original: ");
	imprime();
	printf("\n");

	for (j=0 ; j<((TAM/2)) ; j++){
		
		menor = vetor[j];
		
		for(int i=j ; i<(TAM-j) ; i++){
			if(vetor[i] <= menor){
				menor = vetor[i];
				pos_menor = i;
			}
		}
		
		troca = vetor[j];
		vetor[j] = menor;
		vetor[pos_menor] = troca;
		
		maior = vetor[j];

		for(int i=j ; i<(TAM-j) ; i++){
			if(vetor[i] >= maior){
				maior = vetor[i];
				pos_maior = i;
			}
		}

		troca = vetor[TAM - (j+1)];
		vetor[(TAM - (j+1))] = maior;
		vetor[pos_maior] = troca;
				
	}

	printf("\nVetor Ordenado por PonchoSort: ");
	imprime();
	printf("\n\n");
}