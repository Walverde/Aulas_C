#include <stdio.h>
#include <locale.h>

main()

{
    int unidade,dezena,centena,milhar, numero, m, c;

    printf(" Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    milhar =(numero - numero % 1000)/1000;
    printf(" Milhar -------------> %d \n", milhar);
    centena = numero % 1000;
    printf(" Centena 01 -------------> %d \n", centena);
    centena = ( centena- centena% 100 )/100;
    printf(" Milhar -------------> %d \n", milhar);

    dezena = centena % 100;
    dezena = (dezena - dezena % 10)/10;
    unidade = dezena % 10;
    unidade = (unidade - unidade %1)/1;

    printf("Milhar= %d , centena = %d , dezena= %d, unidade=%d", milhar,centena,dezena,unidade);
}