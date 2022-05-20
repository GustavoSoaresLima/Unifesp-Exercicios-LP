#include <stdio.h>

int main() {
  
  int numeroPrint, numero, soma = 0;

  printf("Digite um numero: ");
  scanf("%d", &numero);
  
  numeroPrint = numero;

  do {
    soma += numero%10;
    numero = numero/10;
  } while(numero != 0);

  printf("A soma dos algarismos de %d eh: %d\n", numeroPrint, soma);
  return 0;
}