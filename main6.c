#include <stdio.h>
#include <locale.h>

int main(void) {
  float v1, v2, v3, v4, v5, media;
  printf("Digite os cinco valores: ");
  scanf("%f %f %f %f %f", &v1, &v2, &v3, &v4, &v5);
  media = (v1 + v2 + v3 + v4 + v5) / 5;
  printf("A média é: %.2f", media);
  return 0;
}