#include <stdio.h>

int main() {
  int numero, potencia, elevado = 1;

  printf("Digite um numero: ");
  scanf("%d", &numero);
  printf("Digite uma potencia: ");
  scanf("%d", &potencia);

  for(int i = 0; i < potencia; i++){
    elevado *= numero; 
  }

  printf("O numero %d elevado a %d eh: %d\n", numero, potencia, elevado);
  return 0;
}