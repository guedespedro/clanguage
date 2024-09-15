#include <stdio.h>
#include<locale.h>

int main(void) {
  setlocale("LC_ALL", "Portuguese");
  int num, qtdPar=0, qtdImpar=0;
  float mediaP, mediaI;
  do{
    printf("Insira um número");
    scanf("%i", &num);
    if(num!=0){
      if(num%2==0){
        qtdPar++;
        mediaP+=num;
      } else {
        qtdImpar++;
        mediaI+=num;
      }
    }
  }while(num!=0);
  mediaP/=qtdPar;
  mediaI/=qtdImpar;
  printf("\n Números pares: %i \n Números ímpares: %i \n Média pares: %.2f \n Média impares: %.2f", qtdPar, qtdImpar, mediaP, mediaI);
  return 0;
}