#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcula(float valor){

    float resultado;

    resultado = (pow(valor, 3))-(30*(pow(valor, 2)))+(500*valor)+200;

    return resultado;

}

int main()
{
    float C;
    float n;

    printf("Escreva o valor de n: ");
    scanf("%f", &n);

    C = calcula(n);

    printf("\n\nO valor resultado da função com a variavel %.2f eh: %.4f\n\n", n, C);
    return 0;
}
