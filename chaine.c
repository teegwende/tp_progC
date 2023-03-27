#include<stdio.h>

int main()
{
  char jours[7][10]={"lun\n","mardi 2","mercredi 3","jeudi 4","vendredi 5","samedi 6","dimanche 7"};
int score = 0;
  int i;
  printf("Test affichage jour\n");
  printf("%s\n",jours[1]);

  for (i=0;i<7;i++)
  {
    if(jours[i][0]=='m')
    printf("%s\n",jours[i]);
    score++;
  }
  printf("%d\n",score);
}
