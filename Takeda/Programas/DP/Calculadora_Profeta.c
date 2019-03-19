#include<stdio.h>
#include<stdlib.h>

//protótipos das funções
char menu();
float sum(float x, float y);
float sub(float x, float y);
float mult(float x, float y);
float dvs(float x, float y);
float value1();
float value2();

int main(){
  float mem=0,valor1,valor2;
  float calc;
  char x;
  do{
    x = menu();
    system("clear");//limpando a tela no Unix

    if (mem != 0){
      printf("O valor em memória é %.2f\nPara usar a memória digite 0\n",mem);
    }

    switch(x){
      case '1':
        valor1 = value1();
        valor2 = value2();
        mem = sum(valor1,valor2);
        printf("%.2f\n",mem);
        break;
      case '2':
        valor1 = value1();
        valor2 = value2();
        mem = sub(valor1,valor2);
        printf("%.2f\n",mem);
        break;
      case '3':
        valor1 = value1();
        valor2 = value2();
        mem = mult(valor1,valor2);
        printf("%.2f\n",mem);
        break;
      case '4':
        valor1 = value1();
        valor2 = value2();
        mem = dvs(valor1,valor2);
        if(mem == 0){
          printf("Jamais dividirás por zero\n");
          printf("%.2f\n",mem);
          break;		
        }
    }
  }while (x != '0');

  return 0;
}

float sum(float x, float y){
  float z;
  z = x + y;
  return(z);
}

float sub(float x, float y){
  float z;
  z = x - y;
  return(z);
}

float mult(float x, float y){
  float z;
  z = x * y;
  return(z);
}

float dvs(float x, float y){
  float z;
  if(y == 0){
    return 0;
  }else{
    z = x/y;
    return(z);
  }
}

char menu (){
  char x;
  printf("==============================\n");
  printf("|         Calculadora        |\n");
  printf("==============================\n");
  printf("Qual cálculo gostaria de fazer ?\n");
  printf("Digite 1 para soma\n");
  printf("Digite 2 para subtração\n");
  printf("Digite 3 par multiplicação\n");
  printf("Digite 4 para divisão\n");
  printf("Digite 0 para sair\n");
  scanf("%c",&x);
  return x;
}

float value1(){  
  float valor1;
  printf("Digite o primeiro valor:\n");
  scanf("%f",&valor1);
  return(valor1);
}

float value2(){
  float valor2;
  printf("Digite o segundo valor:\n");
  scanf("%f",&valor2);
  return(valor2);
}
