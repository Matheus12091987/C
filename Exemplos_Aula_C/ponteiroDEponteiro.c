#include <stdio.h>
#include <stdlib.h>

void main(void){

	int x = 10;
	int *px = &x;
	int **ppx = &px;

	printf("\nx = %d e &x = %p", x, &x);
	printf("\npx = %p e *px = %d e &px = %p", px, *px, &px);
	printf("\nppx = %p e *ppx = %p e **ppx = %d &ppx = %p", ppx, *ppx, **ppx, &ppx);

}
