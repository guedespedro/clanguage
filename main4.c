#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float preco, taxa;
  printf("Insira o preco da conta: ");
  scanf("%f", &preco);
  taxa = (preco/100) * 10;
  printf("O valor da taxa é: %.2f", taxa);
  return 0;
}