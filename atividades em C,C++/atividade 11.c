#include<stdio.h>

int fat, n;

int main()
{
	printf ("Digite um numero que deseja Calcular o seu fatorial \n");
  scanf("%d", &n) ;


  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

  printf("\n%d", fat);
  return 0;
}
