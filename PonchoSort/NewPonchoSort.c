#include <stdlib.h>
#include <stdio.h>

#define TAM 10
/*### Variaveis Globais ###*/
int vetor[TAM] = {1,3,5,7,9,8,4,6,2,0};

int j, menor, maior, troca, pos_menor, pos_maior;
/*### Funções ###*/
void imprime(){

	for(int x=0;x<TAM;x++){

		printf("| %d |", vetor[x]);

	}

}
/*### Programa Principal ###*/
void main(void){


	//for (int i = 0; i < TAM; ++i){
	//vetor[i] = (rand()%256); 
	//}


	printf("\nVetor Original: ");
	imprime();
	printf("\n");

	for (j=0 ; j<((TAM/2)) ; j++){
		
		menor = vetor[j];
		maior = vetor[j];
		
		for(int i=j ; i<(TAM-j) ; i++){
			if(vetor[i] <= menor){
				menor = vetor[i];
				pos_menor = i;
			}
			if(vetor[i] >= maior){
				maior = vetor[i];
				pos_maior = i;
			}
		}
		
		troca = vetor[j];
		vetor[j] = menor;
		vetor[pos_menor] = troca;
				
		if(pos_maior == j){

			pos_maior = pos_menor;

		}
		
		troca = vetor[TAM - (j+1)];
		vetor[(TAM - (j+1))] = maior;
		vetor[pos_maior] = troca;
				
	}

	printf("\nVetor Ordenado por PonchoSort: ");
	imprime();
	printf("\n\n");
}