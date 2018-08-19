#include <stdio.h>
#include<stdlib.h>

void main(void){

	int NumTotal = 0;
	int TAM = 0;
	int Salto = 0;
	int Cont = 1;
	int i = 0;

	scanf("%d", &NumTotal);
	scanf("%d %d", &TAM, &Salto);

	char Vetor[TAM];

	while((TAM - 1) > Cont){

		i = i + (Salto - 1);

		if(i > (TAM - 1)){

			i = ((TAM - 1) - i);
		}

		if(Vetor[i] != 'X'){

			Vetor[i] = 'X';
			printf("%d\n",i);
			Cont++;
			i++;

		}else{

			while(Vetor[i] =='X'){

				i++;
				if(i > (TAM - 1)){

					i = (TAM - 1) - i;

				}

			}

			Vetor[i] = 'X';
			printf("%d\n",i);
			i++;

			Cont++;

		}


	}

	i = 0;

	while(Vetor[i] == 'X'){

		i++;

	}

	printf("%d", ++i);

}
