#include <stdio.h>
void calcularMedia(){
  float num1, num2, num3;
  printf("Insira o número 1, 2 e 3\n");
  scanf("%f%f%f", &num1,&num2,&num3);
  float media = (num1+num2+num3)/3;
  printf("\n A média é: %.2f \n", media);
}
void verificarPar(){
  int numero;
  printf("Insira o número:\n");
  scanf("%d", &numero);
  if(numero%2==0){
    printf("\nO número é par!");
  } else{
    printf("\nO número é ímpar!");
  }
}
void contar(int v){
  for(int i = 1; i <= v; i++){
    printf("\n %d", i);
  }
}
int main(void) {
  char resposta = 's';
  do{
    resposta = 's';
    int opcao =0;
    printf("Qual função você quer? \n ---------- \n 1- Média \n 2- Par ou Ímpar \n 3- contagem\n");
    scanf("%d", &opcao);
      if(opcao==1){
        calcularMedia();
      } else if (opcao==2){
        verificarPar();
      } else if (opcao==3){
        int num = 0;
        printf("Insira o número\n");
        scanf("%d", &num);
        contar(num);
      } else {
        printf("\nDeve ser inserido um número de 1 a 3\n");
      }
    printf("\n Deseja repetir? [s/n] \n ");
    scanf(" %c", &resposta);
  } while (resposta =='s' || resposta =='S');
  printf("Fim do programa!");
  return 0;
}