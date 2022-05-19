#include <stdio.h>

int main(){

  int numero;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  if(numero != 2 && numero != 3){
    if(numero%2 == 0 || numero%3 == 0){
      printf("Nao primo\n");
    }
    else{
      printf("Primo\n");
    }
  } else{
    printf("Primo\n");
  }
  return 0;
}