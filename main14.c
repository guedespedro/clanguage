#include <stdio.h>
int disponiveis=48;
void mostrarDisponibilidade(int c[], int j[]){
  char posicao;
  printf("Total disponíveis: %d \n", disponiveis);
  if(disponiveis==0){
    printf("Não há assentos disponíveis! ");
  }
  printf("Insira 'j' se deseja janela, ou 'c' se deseja corredor: ");
  scanf(" %c", &posicao);
  if(posicao=='j'){
    for(int i=0; i<24;i++){
      if(j[i]==0){
        printf("poltrona nº %d , disponível\n", i);
      }
    }
  } else if (posicao=='c'){
    for(int i=0;i<24;i++){
      if(c[i]==0){
        printf("poltrona nº %d , disponível\n", i);
    }
  }
 }
}
void comprarAssento(int c[], int j[]){
  char posicao;
  int assento;
  if(disponiveis==0){
    printf("Não há assentos disponíveis! ");
  }
  else{
    printf("Insira 'j' para janela e 'c' para corredor: ");
    scanf(" %c", &posicao);
    printf("Insira o assento: ");
    scanf("%d", &assento);
    if(posicao=='j'){
      j[assento]=1;
      disponiveis--;
    } else if(posicao=='c'){
      c[assento]=1;
      disponiveis--;
    }
      printf("%d", disponiveis);
      if(disponiveis==0){
        printf("Não há assentos disponíveis! ");
      }
  }
}
int main(void) {
  int corredor[24]={0}, janela[24]={0}, resposta;
  do{
    resposta=0;
    printf("\n ------------ \n Insira uma opção:\n -1) sair \n 0) mostrar disponibilidade \n 1) comprar assento ");
    scanf("%d", &resposta);
    switch(resposta){
      case -1:
      printf("FIM DO PROGRAMA!");
      break;
      case 0:
        mostrarDisponibilidade(corredor, janela);
      break;
      case 1:
        comprarAssento(corredor, janela);
      break;
      
    }
  }while(resposta!=-1);
  return 0;
}
