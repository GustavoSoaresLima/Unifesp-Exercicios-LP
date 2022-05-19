#include <stdio.h>

int main(){

  int numero, soma = 0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  for(int i =1; i <= (numero/2); i++){
    if(numero%i == 0){
      soma += i;
    }
  }
  if(soma == numero){
    printf("%d eh um numero perfeito\n", numero);
  } else{
    printf("%d nao eh um numero perfeito\n", numero);
  }
  return 0;
}