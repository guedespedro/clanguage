#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale("LC_ALL","Portuguese");
  float salario, aumento;
  printf("Insira o salário do funcionário: \n");
  scanf("%f", &salario);
  if(salario<=800){
    aumento=0.1;
  } else if (salario>800 && salario<1000){
    aumento=0.09;
  } else {
    aumento=0.07;
  }
  salario+=salario*aumento;
  printf("O salário agora é de: R$ %.2f", salario);
  return 0;
}