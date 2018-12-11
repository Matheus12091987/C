//================================================================
// Nome Do Arquivo: quick.c
// File Name: quick.c
//
// Descrição: Implementação do algoritmo quicksort
// Description: Quick sort Algorithm
//================================================================
 
// Libs
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void quick_sort(int *a, int left, int right);

int main(int argc, char** argv)
{
    int i, vet[MAX];// = {'f','r','t','h','J','u','s','d','b','n'};

    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("\nVetor Original: \n");
    for(i = 0; i < MAX; i++)
    {
        printf("%c", vet[i]);
    }
    printf("\n");
    
    quick_sort(vet, 0, MAX - 1);

    printf("\nVetor Ordenado por QuickSort: \n");
    for(i = 0; i < MAX; i++)
    {
        printf("%c", vet[i]);
    }
    printf("\n\n");
    return 0;
}
 
// Função de Ordenação por Seleção
// Quick sort function
void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}
