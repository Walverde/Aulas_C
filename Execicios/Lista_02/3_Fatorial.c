#include <stdio.h>

main()
    {
        int i, n, fatorial;
        fatorial = 1; //valor inicial
        printf("Digite o valor de n : ");
        scanf("%i", &n);
        // fatorial de 5 = 5*4*3*2
        for(i = n; i >= 2; i--)
        {
         fatorial = fatorial * i;
    }
 printf("\n\n"); //quebra linhas
 printf(" fatorial de %i = %i",n,fatorial);
}