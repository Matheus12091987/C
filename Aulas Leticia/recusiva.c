#include <stdio.h>
#include <stdlib.h>

int recursividade(int valor){

	if (valor==0 || valor==1)
       return (1);
    else
       return (valor*recursividade(valor-1));

}

int recursividade1(int valor, int retorno){

	if (valor==0 || valor==1){

       return (retorno);

	}
    else{

    	retorno = retorno * valor;
    	return (recursividade1(valor-1, retorno));

    }

}

void main (void){

	int valor;

	scanf("%d", &valor);

	int retorno = recursividade(valor);
	int retorno1 = recursividade1(valor, 1);

	printf("\n\n%d | %d\n\n", retorno, retorno1);

}