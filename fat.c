#include <stdio.h>

int main(){

  int numeroUser, fat = 1, decrescimo;
  printf("Digite um numero: ");
  scanf("%d", &numeroUser);
  decrescimo = numeroUser;

  for (decrescimo; decrescimo >= 2; decrescimo--){
    fat *= decrescimo;
  }

  printf("O fatorial de %d eh: %d\n", numeroUser, fat);

  return 0;
}