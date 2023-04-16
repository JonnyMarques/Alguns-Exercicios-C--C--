#include <stdio.h>
int main ()


{
float Av1 , Av2 ,media,F;
printf("Digite a nota final da Av1:" );
scanf("%f", &Av1);
printf("Digite a nota final da Av2:" );
scanf("%f", &Av2);
/*printf("Digite a nota final da Av3:" );
scanf("%f", &Av3);*/
printf("\n Digite a frequencia da F a: \n");
scanf("%f",&F);

media = (Av1+Av2)/2;
if (media>=4.0)
    if(F>=75)
    printf("Aluno aprovado \n");
    else
    printf("Aluno reprovado \n");
    else
    printf("Aluno reprovado \n");
return(0);
}
