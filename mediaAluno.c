#include <stdio.h>
#include<string.h>

int main() {
  
  double notaProva, notaAcumulador = 0, notaFinal = 0;
  int pesoProva, pesoAcumulador = 0, quantidadeProvas;
  char statusAprovacao[12];

  printf("Digite a quantidade de provas dadas: ");
  scanf("%d", &quantidadeProvas);

  for (int i = 1; i <= quantidadeProvas; i++){
    
    printf("Digite a nota da %dª prova: ", i);
    scanf("%lf", &notaProva);

    printf("Digite o peso da mesma: ");
    scanf("%d", &pesoProva);

    notaAcumulador += (notaProva * pesoProva);
    pesoAcumulador += pesoProva;
  }

  notaFinal = (notaAcumulador / pesoAcumulador);
  
  if (notaFinal < 5){
    strcpy(statusAprovacao, "Reprovado");
  } else if (notaFinal > 5 && notaFinal < 7){
    strcpy(statusAprovacao, "Recuperacao");
  } else {
    strcpy(statusAprovacao, "Aprovado");
  }

  printf("A media final do aluno e: %lf\nE sua Situacao: %s\n", notaFinal, statusAprovacao);

  return 0;
}