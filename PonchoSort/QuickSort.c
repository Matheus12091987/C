#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


void quickpart(char *, int, int);
void quicksort(char *, int);

void quickpart(char *Item, int left, int right) {
     int   i, j;
     char  x, y;

     i = left;
     j = right;
     x = Item[(left+right)/2];

     do {
         while ( (Item[i]<x) && (i<right) )
             i++;
         while ( (x<Item[j]) && (j>left) )
             j--;

         if (i<=j) {
             y = Item[i];
             Item[i] = Item[j];
             Item[j] = y;
             i++;
             j--;
         }

     }while (i<=j);

     if (left<j)
        quickpart(Item,left,j);
     if (i<right)
        quickpart(Item,i,right);
}

void quicksort(char *Item, int count) {
     quickpart(Item,0,count-1);
}

int main(void) {

    char  Item[MAX],Copias[5][MAX];
    int   i,n;

    for (int i = 0; i < MAX; ++i){
        Item[i] = (rand()%256); 
    }

    n=strlen(Item);

    for (i=1;i<5;i++)
        strcpy(Copias[i],Item);

    printf("\nString Original:\n %s\n",Item);
    quicksort(Copias[5],n);
    printf("\nOrdenação por QuickSort:\n %s\n",Copias[5]);

    return 0;
}