#include <stdio.h>
#include "maior.h"

void apontarMaior(float num1, float num2){
  if(num1>num2){
    printf("%.2f é maior do que %f", num1, num2);
  } else{
    printf("%.2f é maior do que %.2f", num2, num1);
  }
}