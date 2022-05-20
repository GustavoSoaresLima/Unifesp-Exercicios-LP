#include <stdio.h>

int main(){

  int inicioIntervalo, fimIntervalo, soma;

  printf("Digite um numero intervalo:\n");
  printf("Começando em: ");
  scanf("%d", &inicioIntervalo);
  printf("E terminando em: ");
  scanf("%d", &fimIntervalo);

  for(int i = inicioIntervalo; i <= fimIntervalo; i++){
    soma = 0;
    for(int j = 1; j <= (i/2); j++){
      if(i%j == 0){
        soma += j;
      }
    }
    if(soma == i){
      printf("%d eh um numero perfeito\n", i);
    }
  }

  
  return 0;
}