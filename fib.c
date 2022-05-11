#include <stdio.h>

int main(){

  int primeiroNumero = 0, segundoNumero = 1, fib = 1, quantidade, i = 1;

  printf("Digite a quantidade de numeros da serie de Fibonacci: ");
  scanf("%d", &quantidade);

  do {
    printf("O %dº numero eh: %d\n", i, fib);
    fib = primeiroNumero + segundoNumero;
    primeiroNumero = segundoNumero;
    segundoNumero = fib;
    i++;
  } while (i <= quantidade);

  return 0;
}