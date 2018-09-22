#include <stdio.h>
#include <stdlib.h>
//#include </home/matheus/Projetos/C/Prog_SI/conio.h> //Incluir o local direto da biblioteca
//#include "conio.h" // entre aspas "" pesquisa a biblioteca na pasta do arquivo executavel
#include <conio.h> /*	entre <> pesquisa a biblioteca apenas no diretorio padrão de bibliotecas
						no linux fica em /usr/include/ */


int est;

void main(void){

	textbackground(RED);
	clrscr();
	textcolor(WHITE);
	gotoxy(10,20);
	printf("Teste da CONIO1");
	gotoxy(10,10);
	printf("Testes da Conio2");
	scanf("%d", &est);

}
