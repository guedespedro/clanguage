#include <stdio.h>

int main(void) {
  for(int i = 0; i<9; i++){
    if(i%2!=0) continue;
    printf("i=%d\n",i);
  }
  int num=8;
  while(num<9){
    printf("num=%d\n",num);
    num--;
    if(num==0)break;
  }
  printf("Insira um valor de 0 a 2");
  int valor=0;
  scanf("%d",&valor);
  do{
  switch(valor){
    case 0:
    printf("Opção 0 escolhida");
    break;
    case 1:
    printf("Opção 1 escolhida");
    break;
    case 2:
    printf("Opção 2 escolhida");
    break;
    default:
    printf("Opção inválida");
  }
  }while(valor!=3);
}