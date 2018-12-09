#include <stdlib.h>
#include <stdio.h>

#define TAM 10
/*### Variaveis Globais ###*/
unsigned char vetor[TAM] = {'f','r','t','h','J','u','s','d','b','n'};

unsigned char menor, maior, troca, pos_menor, pos_maior;

int j;

/*### Funções ###*/
void imprime(){

	for(int x=0;x<TAM;x++){

		printf("%c", vetor[x]);

	}

}
/*### Programa Principal ###*/
void main(void){


	//for (int i = 0; i < TAM; ++i){
	//	vetor[i] = (rand()%256); 
	//}


	//printf("\nVetor Original:\n%s", vetor);
	printf("\nVetor Original: \n");
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

	//printf("\nVetor Ordenado por PonchoSort:\n%s", vetor);
	printf("\nVetor Ordenado por PonchoSort:\n");
	imprime();
	printf("\n\n");
}