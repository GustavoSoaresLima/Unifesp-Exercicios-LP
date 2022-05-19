#include <stdio.h>

int main(void){

  int inversor = 1;
  float somaFinal = 1, elevado, numeroBase, fat, potencia, decrescimo;

  printf("Digite um numero: ");
  scanf("%f", &numeroBase);

  for (int i = 2; i <= 20; i = i+2){
    inversor = -inversor;
    potencia = (float) i;
    elevado = 1.0;
    decrescimo = (float) i + 1.0;
    fat = 1;

    for(int i = 0; i < potencia; i++){
      elevado *= numeroBase;
    }
    for (decrescimo; decrescimo >= 2; decrescimo--){
      fat *= decrescimo;
    }

    if(inversor == 1){
      somaFinal = somaFinal + (elevado / fat);
    }else{
      somaFinal = somaFinal - (elevado / fat);
    }
  }

  printf("Resultado da sequencia: %.3f\n", somaFinal);

  return 0;
}