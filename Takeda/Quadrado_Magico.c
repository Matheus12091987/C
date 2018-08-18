//soma da linhas e colunas e diagonal principal e secundária sem if dentro de for

//if dentro de for utiliza em cilcos de máquina um valor exponencalizado

#include<stdio.h>
#include<stdlib.h>

int n,p,s;
void main (void){

	printf("Digite a dimenção do seu quadrado Perfeito: ");
	scanf("%d", &n);

	int matriz[n][n];
	//int linha[n];
	int *linha=(int *) calloc(n,sizeof(int));
	//int coluna[n];
	int *coluna=(int *) calloc(n, sizeof(int));

	//for(int l = 0; l < n; ++l){

      //  linha[l] = 0;
        //coluna[l] = 0;

	//}

	printf("\n\nDigite os valores para o quadrado mágico: ");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("\nDigite o valor da prosição %d / %d: ", i , j);
			scanf("%d", &matriz[i][j]);
			linha[i] += matriz[i][j];
			coluna[j] += matriz[i][j];
		}
		p += matriz[i][i];
		s += matriz[i][n-1-i];

	}

	for(int k = 0; k < n; ++k){

        printf("\n\nValor de Linha x Coluna: %d x %d", linha[k], coluna[k]);

	}

	printf("\n\nValor de Principal x Secundaria: %d x %d", p, s);


}
