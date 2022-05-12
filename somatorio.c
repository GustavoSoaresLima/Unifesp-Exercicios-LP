//gcc somatorio.c -o somatorio

#include <stdio.h>

int fatorial(int numero){
  int fat = 1, decrescimo;
  decrescimo = numero;

  for (decrescimo; decrescimo >= 2; decrescimo--){
    fat *= decrescimo;
  }

  return (fat);
}

int elevado(int numero, int potencia){
  int elevado = 1;

  for(int i = 0; i < potencia; i++){
    elevado *= numero; 
  }

  return (elevado);
}

int main(void){

  int numeroBase, numeroElevado, numeroFat;
  long double resultadoFinal = 0, resultadoDivisao, numeroAuxiliar = 1, inversor = 1;

  printf("Digite uma base x: ");
  scanf("%d", &numeroBase);

  for (int i = 2; i < 41; i = i+2){
    inversor *= -1;
    
    numeroElevado = elevado(numeroBase, i);
    numeroFat = fatorial(i+1);
    resultadoDivisao = numeroElevado/numeroFat; //elevado(numeroBase, i)/fatorial(i+1);

    printf("%Lf\n", resultadoDivisao);

    if(inversor = 1){
      resultadoFinal = numeroAuxiliar + resultadoDivisao;
    }else{
      resultadoFinal = numeroAuxiliar - resultadoDivisao;
    }

    numeroAuxiliar = resultadoDivisao;
  }

  printf("%Lf\n", resultadoFinal);

  return 0;
}