#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float raio, altura, volume;
  printf("Insira o raio do cilindro:");
  scanf("%f", &raio);
  printf("Insira a altura do cilindro:");
  scanf("%f", &altura);
  volume = 3.141592 * raio * raio * altura;
  printf("O volume do cilindro é: %.2f", volume);
  
  return 0;
}