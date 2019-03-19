/*####################################################################################
###		Nome: Matheus Gonçalves Peres											   ###
###		RA: 2840481723024														   ###
###		Professor: Takeda														   ###
###		Atividade: Quadrado Mágico Teste na Matriz		   						   ###
####################################################################################*/

#include<stdio.h>
#include<stdlib.h>

int n,p,s;
void main (void){

	n = 4;
	int matriz[n][n];
	int *linha=(int *) calloc(n,sizeof(int));
	int *coluna=(int *) calloc(n, sizeof(int));

	printf("\n\nDigite os valores para o Quadrado Mágico");

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("\nDigite o valor da posição %d / %d: ", i , j);
			scanf("%d", &matriz[i][j]);
			linha[i] += matriz[i][j];
			coluna[j] += matriz[i][j];
		}
		p += matriz[i][i];
		s += matriz[i][n-1-i];

	}

	int error = 0;

	for (int i = 0; ((error == 0) && (i < n)) ; ++i)
	{
		if((p == s)&&(p == linha[n-1])&&(p == coluna[n-1])&&(linha[i] == coluna[i])){

			for (int j = i + 1; j < n; ++j)
			{
				if((linha[i] == linha[j])&&(coluna[i] == coluna[j])){}else{error = 1;}
			}
		}else{error = 1;}
	}

	for (int i = 0 ; i < n ; ++i)
	{
		for (int j = 0 ; j < n ; ++j)
		{
			for(int k = i ; k < n ; ++k)
			{

				for(int l = j + 1 ; l < n ; ++l)
				{

					if( matriz[i][j] == matriz[k][l] ){error = 1;}

				}
			}
		}
	}

	printf("\n\nA Matriz digitada foi:\n");
//*****************************************************************
	for (int i = 0; i < n ; ++i){

		for (int j = 0 ; j < n ; ++j)
		{

			printf("{ %d } ", matriz[i][j]);

		}

		printf("\n");
		

	}
//*****************************************************************
	printf("\n\n");

	for(int i = 0 ; i<n ; ++i){

		printf("\nLinha %d eh: %d, Coluna %d eh: %d", i, linha[i], i, coluna[i]);

	}

	printf("\nA principal eh: %d, a Secundaria eh: %d", p, s);

	if (error == 1){

		printf("\n\nNão é um quadrado mágico\n\n");

	}else{printf("\n\nÉ um quadrado mágico\n\n");}

}
