#include <stdio.h>

int main() {

	int n1 = 0;

	printf("Digite o Numero: ");
	scanf("%d", &n1);

	if(n1>=15 && n1<=35){

		printf("O numero %d esta no range de funcionalidade do item a\n");

	}

	if(n1>34 && n1<90){

                printf("O numero %d esta no range de funcionalidade do item b\n");

        }

	if(n1>=0 && n1<10){

                printf("O numero %d esta no range de funcionalidade do item c\n");

        }

	if((n1>=-4 && n1<4)||(n1 >= 100 && n1<=200)){

                printf("O numero %d esta no range de funcionalidade do item d\n");

        }

	if((n1==35)||(n1>=40 && n1<=50)){

                printf("O numero %d esta no range de funcionalidade do item e\n");

        }

	if((n1>=2 && n1<8)||n1==25){

                printf("O numero %d esta no range de funcionalidade do item f\n");

        }

	if((n1>=-1 && n1 < 45)||(n1 >= 0 && n1 <= 1)){

                printf("O numero %d esta no range de funcionalidade do item g\n");

        }

	if((n1>=-4 && n1<4 )||(n1>=10 && n1<20) || (n1==0)){

                printf("O numero %d esta no range de funcionalidade do item h\n");

        }
return 0;
}


