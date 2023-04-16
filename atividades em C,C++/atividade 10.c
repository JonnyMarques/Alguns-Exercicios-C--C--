#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
    int tabuada = 0;
    printf("\nDigite a tabuada que você deseja \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);

    for(int x = 1; x<=10; ++x){
        //1 x 5 = 5
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
