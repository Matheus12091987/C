#include <stdlib.h>
#include <stdio.h>

#define TAM 100
/*### Variaveis Globais ###*/
unsigned char vetor[TAM];// = {'f','r','t','h','J','u','s','d','b','n'};

unsigned char menor, maior, troca, pos_menor, pos_maior;

long int j;

/*### Funções ###*/
void imprime(){

	for(long int x=0;x<TAM;x++){

		//printf("| %c = %d|", vetor[x], vetor[x]);
		printf("%c", vetor[x]);

	}

}
/*### Programa Principal ###*/
void main(void){

	for (long int i = 0; i < TAM; ++i){
		//vetor[i] = (rand()%256);
		scanf("%c", &vetor[i]); 
	}

	printf("\nVetor Original: ");
	imprime();
	printf("\n");

	for (j=0 ; j<((TAM/2)) ; j++){
		
		menor = vetor[j];
		
		for(long int i=j ; i<(TAM-j) ; i++){
			if(vetor[i] >= menor){
				menor = vetor[i];
				pos_menor = i;
			}
		}
		
		troca = vetor[j];
		vetor[j] = menor;
		vetor[pos_menor] = troca;
		
		maior = vetor[j];

		for(long int i=j ; i<(TAM-j) ; i++){
			if(vetor[i] <= maior){
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