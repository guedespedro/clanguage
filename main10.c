#include <stdio.h>
#include <stdlib.h>
float divisao(int n1, int n2){  
  return (float) n1/n2;
}
int main(void) {
  int n1, n2;
  
  printf("Insira o dividendo: ");
  scanf("%d", &n1);
  printf("Insira o divisor: ");
  scanf("%d", &n2);
  if(n2!=0){
  printf("Resultado: %.2f", divisao(n1,n2));
  } else{
    printf("O divisor deve ser diferente de 0");
  }
return 0;
}
