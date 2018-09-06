#include <stdlib.h>
#include <stdio.h>

#define TAM 21
/*### Variaveis Globais ###*/
int vetor[TAM] = {9,8,7,6,5,4,3,2,1,0,10,12,15,16,0,2,3,5,98,0,1000};

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
	//	vetor[i] = (rand()%10000); 
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
		
		
		if(pos_maior != j){

			troca = vetor[TAM - (j+1)];
			vetor[(TAM - (j+1))] = maior;
			vetor[pos_maior] = troca;

		}else{

			troca = vetor[TAM - (j+1)];
			vetor[(TAM - (j+1))] = maior;
			vetor[pos_menor] = troca;

		}
				
	}

	printf("\nVetor Ordenado por PonchoSort: ");
	imprime();
	printf("\n\n");
}