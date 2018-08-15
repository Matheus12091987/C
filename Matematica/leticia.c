#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float v1,v2;

void main(void){

    printf("Digite o valor do nivel em metros: ");
    scanf("%f", &v1);

    if((v1<0) || (v1>9)){

        printf("\n\n Valor inexistente para este calculo!!!\n\n");

    }
    else{

        if ((v1 >= 4) || (v1 <= 9)){

          v2 = ((160*3.1415)*(pow((9 - v1),3)) / 3);

        }

        if ((v1 >= 0) || (v1 <= 4)){

          v2 = ((160*3.1415*125)/3) + ((4000*3.1415)*(4-v1));

        }

        printf("O volume em litros presente no reservatório é de: %.2f\n\n",v2);
    }

}

