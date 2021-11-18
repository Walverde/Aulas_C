#include <stdio.h>

main()
{

 float consumo, constotal = 0, maior, menor, med;
 int q = 1, meses;

 //printf(" *** Calculo da media de consumo de energia eletrica *** \n\n");

 printf(" Quantidade de meses ");

 scanf("%d", &meses);

 for( ; q <= meses; q++)
    {
        printf("Consumo do mes %d = ", q);
        scanf("%f", &consumo);
        constotal = constotal + consumo; //soma valores de consumo
        printf("CONSUMO PARCIAL %.2f KW/h \n\n", constotal);
        if(q == 0) //o primeiro valor de consumo é o maior e também o menor no início
            {
                maior = consumo;
                menor = consumo;
            }
        else
        {
        if(consumo > maior)
            {
             maior = consumo;
            }
        if(consumo < menor);
            {
             menor = consumo;
            }
        }
 }
 med = constotal / meses;
 printf("media de consumo = %f KW/h \n\n", med);
 printf("maior consumo = %f KW/h\n\n", maior);
 printf("menor consumo = %f KW/h", menor);
}