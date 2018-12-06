#include<stdio.h>
#include<stdlib.h>

void main(void){

	int valor = 44;
	int maior=0, l1=0, l2=0;

	for (valor; valor >= 0; valor--){

		for(int i = 0; i<=(44) ; i++){
			
			if(((valor * i)>maior)&&((valor+valor+i) == 44)){

				maior = valor*i;
				l1 = valor;
				l2 = i;
			}

		}

	}

	printf("O L1 = %d, o L2 = %d e a area = %d", l1, l2, maior);


}