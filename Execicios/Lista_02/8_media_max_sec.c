#include <stdio.h>

main()

{
    int numero, max = 0, secord = 0, midi = 0, i;

    for(i = 1; i <= 20; i++)
    {
        printf("numero%2d = ", i);
        scanf("%d", &numero);

        midi = midi + numero;

        if(numero > max) //
        {
            secord = max; //
            max = numero;
        }
        if(numero > secord && numero < max) // verifica se o número digitado por último é maior que o segundo valor
        {
            secord = numero;
        }
    }

    midi = midi / 20;

    printf("\n\n"); // quebras de linha
    printf("Media = %d \n", midi);
    printf("Maior numero = %d \n", max);
    printf("Segundo maior numero = %d \n\n", secord);
}
