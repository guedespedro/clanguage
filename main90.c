#include <stdio.h>
#include "maior.h"
int main(void) {
  float a, b;
  printf("Insira o primeiro número: ");
  scanf("%f", &a);
  printf("Insira o segundo número: ");
  scanf("%f", &b);
  apontarMaior(a, b);
}