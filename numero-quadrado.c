#include <stdio.h>

int main() {
  int numero, quadrado = 1;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  for(int i = 0; i < numero; i++){
    quadrado *= numero; 
  }

  printf("O quadrado dele eh: %d\n", quadrado);
  return 0;
}