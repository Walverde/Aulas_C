#include <stdio.h>

main()

{
    int unidade,dezena,centena,milhar, numero, m, c;

    printf("digite um numero com quatro digitos");

    printf("\n\n");

    scanf("%1d%1d%1d%1d",&milhar,&centena,&dezena,&unidade);
    printf("\n\n");

    printf("milhar= %d , centena = %d , dezena= %d, unidade=%d", milhar,centena,dezena,unidade);

    getch();
    
    printf("\n\n");

    printf(" Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    m=(numero - numero % 1000)/1000;
    c = numero % 1000;
    c = ( c-c % 100 )/100;

    printf("milhar= %d , centena = %d , dezena= %d, unidade=%d", m,c,dezena,unidade);
}