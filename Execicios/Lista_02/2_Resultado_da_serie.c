#include <stdio.h>

main()
{
    float Soma = 0, num = 1, den = 1; //n = numerador; d = denominador
    while(num <= 99 && den <=50)
        {
            printf("Soma = %.1f + %.1f / %.1f ", Soma, num, den);
            Soma = Soma + (num / den);// formula da soma e divisao
            num = num + 2; //incremento
            den++; //denominador = denominador +1
            getchar(); //usar o caractere armazenado na memoria para esperar o usuario
        }
    printf("\n\n");
    printf(" Soma = %d \n\n", Soma);
}
