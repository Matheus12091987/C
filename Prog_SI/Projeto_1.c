#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <basic.H>

void main(void){
	int sair = 1;
	int resposta;

	while(sair){

		system("clear");

		printf("**********************************************************");
		printf("\n*Programa para auxiliar na escolha geral de investimento *");
		printf("\n**********************************************************\n\n");
		printf("\n**********************************************************");
		printf("\n**** Escolha uma Opção Abaixo:                        ****");
		printf("\n**********************************************************");
		printf("\n* 0 - Sair                                            ****");
		printf("\n* 1 - Calcular                                        ****");
		printf("\n* 2 - Profetizar                                      ****");
		printf("\n* 3 - Teste                                           ****");
		printf("\n**********************************************************");
		printf("\n**** Cotações do dia:                                 ****");
		printf("\n* Dolar: 123,123   Euro:234,234   China: 456,456      ****");
		printf("\n**** Valor das principais Ações                       ****");
		printf("\n*                                                     ****");
		printf("\n**********************************************************\n\n");
		scanf("%d", &resposta);

		switch (resposta){
			case 0:
				sair = 0;
				break;
			case 1:
				sair = 1;
				break;
			default:
				sair = 1;
				break;
		}
	}
}
