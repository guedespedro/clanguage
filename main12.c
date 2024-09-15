#include <stdio.h>

int main(void) {
  char lugares[1][2][10];
  for(int i=0;i<=1;i++){
    for(int j=0;j<=2;j++){
      printf("Insira o lugar, %d da fileira %d ", j, i);
      fgets(lugares[i][j], sizeof(lugares[i][j]), stdin);
    }
  }
  for(int i=0;i<=2;i++){
    for(int j=0;j<=2;j++){
      printf(" [%s] ", lugares[i][j]);
    }
  }
}