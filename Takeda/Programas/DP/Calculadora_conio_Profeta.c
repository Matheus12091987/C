/*####################################################################################
###   Nome: Matheus Gonçalves Peres                                                ###
###   RA: 2840481723024                                                            ###
###   Professor: Takeda                                                            ###
###   Atividade: Calculadora com memoria                                           ###
####################################################################################*/

#include <stdio.h>
#include "conio.h"
void imprimeMenu(){
  printf("1- adicao\n");
  printf("2- subtracao\n");
  printf("3- multiplicacao\n");
  printf("4- divisao\n");
  printf("5- modulo\n");
}
int main() {
  float a, b, result;
  char op, tecla;
  do{
    system("cls");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    imprimeMenu();
    printf("\nEscolha uma opcao: ");
    op=getche();
    switch(op){
      case '1':
        result=a+b;
        printf("\na+b=%.2f",result);
        break;
      case '2':
        result=a-b;
        printf("\na-b=%.2f",result);
        break;
      case '3':
        result=a*b;
        printf("\na*b=%.2f",result);
        break;
      case '4':
        result=a/b;
        printf("\na/b=%.2f",result);
        break;
      case '5':
        result=a/b;
        printf("\na/b=%.2f",result);
        break;
        //---------------------------
      default:
        printf("\nOpcao invalida!\n");
    }
    printf("\nDigite a tecla 's' para continuar ou qualquer tecla para sair.\n");
    tecla=getch();
  }while (tecla =='s'||tecla=='S');
}
