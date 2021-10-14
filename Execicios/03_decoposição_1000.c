#include <stdio.h>

int main()

{
    int unidade,dezena,centena,milhar;

    printf("digite um numero com quatro digitos");

    printf("\n\n");

    scanf("%1d%1d%1d%1d",&milhar,&centena,&dezena,&unidade);
    printf("\n\n");

    printf("milhar= %d , centena = %d , dezena= %d, unidade=%d", milhar,centena,dezena,unidade);

    getch();
}