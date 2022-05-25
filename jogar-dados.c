#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){

  time_t timeNumber;
  srand ( (unsigned) time (&timeNumber));

  int rodadas, l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0, pressionado;

  printf("Digite a quantidade de vezes que deseja rodar o dado: ");
  scanf("%d", &rodadas);
  getchar();
  system("clear");

  for(int i = 0; i <  rodadas; i++){
    switch ((rand() % 6) + 1)
    {
    case 1:
      l1++;
      printf(" _____%d\n|     |\n|  @  |\n|_____|\n", l1);
      getchar();
      system("clear");
      break;
    case 2:
      l2++;
      printf(" _____%d\n|@    |\n|     |\n|____@|\n", l2);
      getchar();
      system("clear");
      break;
    case 3:
      l3++;
      printf(" _____%d\n|@    |\n|  @  |\n|____@|\n", l3);
      getchar();
      system("clear");
      break;
    case 4:
      l4++;
      printf(" _____%d\n|@   @|\n|     |\n|@___@|\n", l4);
      getchar();
      system("clear");
      break;
    case 5:
      l5++;
      printf(" _____%d\n|@   @|\n|  @  |\n|@___@|\n", l5);
      getchar();
      system("clear");
      break;
    
    default:
      l6++;
      printf(" _____%d\n|@   @|\n|@   @|\n|@___@|\n", l6);
      getchar();
      system("clear");
      break;
    }
  }

  printf(" ___________________________________ \n");
  printf("| Foram sorteadas as faces:         |\n");
  printf("|===================================|\n");
  printf("| 1: %dx sendo isso %06.2f%% do total |\n", l1, (l1/(float)rodadas)*100);
  printf("| 2: %dx sendo isso %06.2f%% do total |\n", l2, (l2/(float)rodadas)*100);
  printf("| 3: %dx sendo isso %06.2f%% do total |\n", l3, (l3/(float)rodadas)*100);
  printf("| 4: %dx sendo isso %06.2f%% do total |\n", l4, (l4/(float)rodadas)*100);
  printf("| 5: %dx sendo isso %06.2f%% do total |\n", l5, (l5/(float)rodadas)*100);
  printf("| 6: %dx sendo isso %06.2f%% do total |\n", l6, (l6/(float)rodadas)*100);
  printf("|###################################|\n");

  return 0;
}