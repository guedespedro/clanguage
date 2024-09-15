#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float v1, v2, soma, subt, mult, div;
  printf("Insira o primeiro valor: ");
  scanf("%f", &v1);
  printf("Insira o segundo valor: ");
  scanf("%f", &v2);
  soma = v1+ v2;
  subt = v1 - v2;
  mult = v1 * v2;
  div = v1 / v2;
  printf("A soma de %.2f mais %.2f é = %.2f \n", v1, v2, soma);
  printf("A subtracão de %.2f menos %.2f é = %.2f \n",v1, v2, subt);
  printf("A multiplicacão de %.2f vezes %.2f é = %.2f \n", v1, v2, mult);
  printf("A divisão de %.2f por %.2f é = %.2f \n", v1, v2, div);
  return 0;
}