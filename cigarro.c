/*Calcular a quantidade dinheiro gasta por um fumante. Dados que o
usuário deve entrar: o número de anos que ele fuma, o nº de cigarros
fumados por dia e o preço de uma carteira.*/

#include <stdio.h>

int main() {
  int anosFumando, cigarrosDia, cigarrosCarteira;
  double precoCarteira, dinheiroGasto = 0;

  printf("Anos fumando: ");
  scanf("%d" , &anosFumando);

  printf("Cigarros por dia: ");
  scanf("%d" , &cigarrosDia);

  printf("Cigarros em uma carteira: ");
  scanf("%d" , &cigarrosCarteira);

  printf("Preco da carteira: ");
  scanf("%lf" , &precoCarteira);

  dinheiroGasto = (anosFumando * 365) * (precoCarteira / cigarrosCarteira) * cigarrosDia;

  printf("Fumando %d cigarros por dia, voce ja gastou R$:%1.2lf em %d anos\n", cigarrosDia, dinheiroGasto, anosFumando);

  return 0;
}