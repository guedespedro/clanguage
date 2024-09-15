#include <stdio.h>

int main(void) {
  double estC, estM;
  printf("Insira a estatura em metros: ");
  scanf("%lf", &estM);
  estC = estM * 100;
  printf("A estatura em centímetros é: %.2lf", estC);
  return 0;
}