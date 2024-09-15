#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale("LC_ALL", "Portuguese");
  int a, b, c;
  float d, r, s;
  printf("Insira os números inteiros e positivos a, b, c: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("a");
  r = (a+b) * (a+b);
  s = (b+c) * (b+c);
  d = (r+s) /2;
  printf("R = %.2f \n S = %.2f \n D = %.2f", r, s, d);
  return 0;
}