#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
		
	char nome[30];
	int ra;
		
};

void main(void){
	
	
	struct Aluno Aluno1;
	
	strcpy(Aluno1.nome, "Matheus");
	Aluno1.ra = 28404;
	
	printf("%s \n %d \n", Aluno1.nome, Aluno1.ra);
	
}