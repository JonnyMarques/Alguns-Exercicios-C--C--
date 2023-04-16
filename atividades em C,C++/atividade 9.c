#include <stdio.h>
#include <stdLib.h>

  int main ()

{
  float AV1,AV2,AV3,a,B;

  float media = 0;

  a=2;
  B=3;

/* printf("\n O valor de A: %f de a: %d e de B: %d",var2,a,B);*/
   printf("\n digite o valor da Av1 a:\n");
   scanf("%f",&AV1);

   printf("\n Digite o valor da Av2 a:\n");
   scanf("%f",&AV2);

   printf ("\n digite o valor de AV3 a:\n");
   scanf("%f",&AV3);

   media =(AV1+AV2+AV3)/3;
   printf("\n A media do aluno e : %f", media);
   return 0;
}
