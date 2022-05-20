#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){

  time_t timeNumber;
  srand ( (unsigned) time (&timeNumber));

  int rodadas, l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0;

  printf("Digite a quantidade de vezes que deseja rodar o dado: ");
  scanf("%d", &rodadas);

  for(int i = 0; i <  rodadas; i++){
    switch ((rand() % 5) + 1)
    {
    case 1:
      l1++;
      printf(" _____\n|     |\n|  @  |\n|_____|\n");
      break;
    case 2:
      l2++;
      printf(" _____\n|@    |\n|     |\n|____@|\n");
      break;
    case 3:
      l3++;
      printf(" _____\n|@    |\n|  @  |\n|____@|\n");
      break;
    case 4:
      l4++;
      printf(" _____\n|@   @|\n|     |\n|@___@|\n");
      break;
    case 5:
      l5++;
      printf(" _____\n|@   @|\n|  @  |\n|@___@|\n");
      break;
    
    default:
      l6++;
      printf(" _____\n|@   @|\n|@   @|\n|@___@|\n");
      break;
    }
  }

  printf("\nForam sorteadas as faces de numero:\n");
  printf(" - 1: %d vezes sendo isso (%.2f)%% do total\n", l1, (l1/(float)rodadas)*100);
  printf(" - 2: %d vezes sendo isso (%.2f)%% do total\n", l2, (l2/(float)rodadas)*100);
  printf(" - 3: %d vezes sendo isso (%.2f)%% do total\n", l3, (l3/(float)rodadas)*100);
  printf(" - 4: %d vezes sendo isso (%.2f)%% do total\n", l4, (l4/(float)rodadas)*100);
  printf(" - 5: %d vezes sendo isso (%.2f)%% do total\n", l5, (l5/(float)rodadas)*100);
  printf(" - 6: %d vezes sendo isso (%.2f)%% do total\n", l6, (l6/(float)rodadas)*100);

  return 0;
}