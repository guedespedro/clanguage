#include <stdio.h>
float calcularPorCento(float valor){
  valor=valor-((valor/100)*10);
  return valor;
}
int calcularMaior(int a, int b){
  int maior;
  if(a>b){
    maior= a;
  } if (a<b){
    maior= b;
  }
  return maior;
}
int main(void) {
  char resposta='s';
  do{
    resposta='s';
    int opcao=0;
    printf("\n -----------\n O que você quer? \n 1- calcular 10 por cento \n 2- calcular maior número \n");
    scanf("%d", &opcao);
    if(opcao==1){
      float x=0;
      printf("\n Insira o valor\n");
      scanf("%f", &x);
      printf("O valor descontando 10 por cento é: %.2f",calcularPorCento(x));
    }else if(opcao==2){
      int num1=0, num2=0;
      printf("Insira o valor 1 e o valor 2\n");
      scanf("%d%d", &num1, &num2);
      if(num1==num2){
        printf("\nOs dois valores são iguais!\n");
      }else{
      printf("O maior número é: %d", calcularMaior(num1,num2));
      }
    } else{
      printf("\n A opção deve ser de 1 a 2 \n");
    }
    printf("\n Quer repetir?\n");
    scanf("%s ", &resposta);
  } while(resposta=='s'||resposta=='S');
  printf("Fim do programa!");
  return 0;
}