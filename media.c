#include <stdio.h>

int main() {
  int numero, soma = 0, media = 0, contador = 0;

  do {
    printf("Digite um numero: (digite -1 para finalizar)");
    scanf("%d", &numero);
    if(numero != -1){
      soma += numero;
      contador += 1;
    }
  } while (numero != -1);

  media = soma/contador;

  printf("A média destes numeros e: %d\n", media);
  return 0;
}