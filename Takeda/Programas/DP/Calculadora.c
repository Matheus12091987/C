/*####################################################################################
###   Nome: Matheus Gonçalves Peres                                                ###
###   RA: 2840481723024                                                            ###
###   Professor: Takeda                                                            ###
###   Atividade: Calculadora com Memoria                                           ###
####################################################################################*/

#include <stdio.h>
#include <stdlib.h>

//protótipos das funções

char menu_principal();
char menu_memorizacao();
float value1();
float value2();
float somar(float v1, float v2);
float subtrair(float v1, float v2);
float multiplicar(float v1, float v2);
float dividir(float v1, float v2);


void main (void){

	char v1, v2;
	float valor1 = 0;
	float valor2 = 0;
	int inicializacao = 1;
	float memoria;

	
	while (inicializacao > 0){

		system("clear");
		v1 = menu_principal();

		if(inicializacao == 1){

			switch (v1){

				case '0':

					system("clear");
					printf("\n\nObrigado por utilizar este programa!!!\n\n");
					inicializacao = 0;
					break;

				case '1':

					system("clear");
					valor1 = value1();
					valor2 = value2();
					memoria = somar(valor1, valor2);
					system("clear");
					printf("\n\nO Resultado da Somatória de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
						
					v2 = menu_memorizacao();

					if (v2 == '1'){

						inicializacao = 2;
						valor2 = 0;

					}else{

						valor1 = 0;
						valor2 = 0;
						memoria = 0;
						inicializacao = 1;

					}

					break;

				case '2':

					system("clear");
					valor1 = value1();
					valor2 = value2();
					memoria = subtrair(valor1, valor2);
					system("clear");
					printf("\n\nO Resultado da Subtração de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
						
					v2 = menu_memorizacao();

					if (v2 == '1'){

						inicializacao = 2;
						valor2 = 0;

					}else{

						valor1 = 0;
						valor2 = 0;
						memoria = 0;
						inicializacao = 1;

					}

					break;

				case '3':

					system("clear");
					valor1 = value1();
					valor2 = value2();
					memoria = multiplicar(valor1, valor2);
					system("clear");
					printf("\n\nO Resultado da Multiplicação de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
					
					v2 = menu_memorizacao();

					if (v2 == '1'){

						inicializacao = 2;
						valor2 = 0;

					}else{

						valor1 = 0;
						valor2 = 0;
						memoria = 0;
						inicializacao = 1;

					}

					break;

				case '4':

					system("clear");
					valor1 = value1();
					valor2 = value2();

					if(valor2 == 0){

						system("clear");
						printf("\n\nNão Podeis Dividir por Zero, Digite algo diferente de zero no Valor 2\n\n");

					}else{

						memoria = dividir(valor1, valor2);

						system("clear");
						printf("\n\nO Resultado da Divisão de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
							
						v2 = menu_memorizacao();

						if (v2 == '1'){

							inicializacao = 2;
							valor2 = 0;

						}else{

							valor1 = 0;
							valor2 = 0;
							memoria = 0;
							inicializacao = 1;

						}

					}

					break;

				default:

					system("clear");
					printf("\n\nValor inválido, Tente novamente!!!!\n\n\n\n");
					v1 = menu_principal();				
					break;

			}

		}else{

			switch (v1){

				case '0':

					system("clear");
					printf("\n\nObrigado por utilizar este programa!!!\n\n");
					inicializacao = 0;
					break;

				case '1':

					system("clear");
					valor1 = memoria;
					valor2 = value2();
					memoria = somar(valor1, valor2);
					system("clear");
					printf("\n\nO Resultado da Somatória de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
					
					v2 = menu_memorizacao();

					if (v2 == '1'){

						inicializacao = 2;
						valor2 = 0;

					}else{

						valor1 = 0;
						valor2 = 0;
						memoria = 0;
						inicializacao = 1;

					}

					break;

				case '2':

					system("clear");
					valor1 = memoria;
					valor2 = value2();
					memoria = subtrair(valor1, valor2);
					system("clear");
					printf("\n\nO Resultado da Subtração de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
					
					v2 = menu_memorizacao();

					if (v2 == '1'){

						inicializacao = 2;
						valor2 = 0;

					}else{

						valor1 = 0;
						valor2 = 0;
						memoria = 0;
						inicializacao = 1;

					}

					break;

				case '3':

					system("clear");
					valor1 = memoria;
					valor2 = value2();
					memoria = multiplicar(valor1, valor2);
					system("clear");
					printf("\n\nO Resultado da Multiplicação de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
					
					v2 = menu_memorizacao();

					if (v2 == '1'){

						inicializacao = 2;
						valor2 = 0;

					}else{

						valor1 = 0;
						valor2 = 0;
						memoria = 0;
						inicializacao = 1;

					}

					break;

				case '4':

					system("clear");
					valor1 = memoria;
					valor2 = value2();

					if(valor2 == 0){

						system("clear");
						printf("\n\nNão Podeis Dividir por Zero, Digite algo diferente de zero no Valor 2\n\n");

					}else{

						memoria = dividir(valor1, valor2);

						system("clear");
						printf("\n\nO Resultado da Divisão de %.2f com %.2f é: %.2f\n\n", valor1, valor2, memoria);
						
						v2 = menu_memorizacao();

						if (v2 == '1'){

							inicializacao = 2;
							valor2 = 0;

						}else{

							valor1 = 0;
							valor2 = 0;
							memoria = 0;
							inicializacao = 1;

						}

					}

					break;

				default:

					system("clear");
					printf("\n\nValor inválido, Tente novamente!!!!\n\n\n\n");
					v1 = menu_principal();				
					break;

			}

		}

						

	}


}



char menu_principal(){


	char x;
	printf("==============================\n");
	printf("|         Calculadora        |\n");
	printf("==============================\n");
  	printf("Qual cálculo gostaria de fazer ?\n");
  	printf("Digite 1 para Somatória\n");
  	printf("Digite 2 para Subtração\n");
  	printf("Digite 3 para Multiplicação\n");
  	printf("Digite 4 para Divisão\n");
  	printf("Digite 0 para SAIR\n");
  	scanf(" %c",&x);
  	
  	return x;
}

char menu_memorizacao(){

	char y;
	printf("======================================\n");
	printf("|    Deseja memorizar este valor?    |\n");
	printf("======================================\n");
	printf("Digite 1 para SIM ou digite 0 para NÃO\n");
	scanf(" %c",&y);
  	
  	system("clear");

  	return y;

}

float value1(){

	float v1;
	printf("======================================\n");
	printf("|    Digite o valor 1 do calculo     |\n");
	printf("======================================\n");
	scanf("%f",&v1);

	return v1;

}

float value2(){

	float v2;
	printf("======================================\n");
	printf("|    Digite o valor 2 do calculo     |\n");
	printf("======================================\n");
	scanf("%f",&v2);

	return v2;

}

float somar(float v1, float v2){

	return (v1 + v2);

}

float subtrair(float v1, float v2){

	return (v1 - v2);

}

float multiplicar(float v1, float v2){

	return (v1 * v2);

}

float dividir(float v1, float v2){

		return (v1 / v2);

}