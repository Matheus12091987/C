//soma da linhas e colunas e diagonal principal e secundária sem if dentro de for

//if dentro de for utiliza em cilcos de máquina um valor exponencalizado

#include<stdio.h>
#include<stdlib.h>

int n,p,s;
void main (void){

	printf("Digite a dimensão do seu Quadrado Perfeito: ");
	scanf("%d", &n);

	int matriz[n][n];
	int vetor[n*n];
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
			vetor[i+(j*(n-1))] = matriz[i][j];
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

	for (int i = 0; i < (n*n); ++i)
	{
		for (int j = (i+1); j < (n*n); ++j)
		{
			if(vetor[i] == vetor[j]){error = 1;}
		}
	}

	if (error == 1){

		printf("\n\nNão é um quadrado mágico\n\n");

	}else{printf("\n\nÉ um quadrado mágico\n\n");}

}
