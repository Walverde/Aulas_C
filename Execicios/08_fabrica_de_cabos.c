#include <stdio.h>
// #include <math.h>


main(){

    float caixas, minutos, metros, psegundo, hora;

    psegundo = 45.6;

    printf("______________________\n");
    printf("Fabrica de cabos \n");
    printf("______________________\n");
 
    printf("Insira a o tempo em minuto para calculo: ");
    scanf("%f", &minutos);
    printf("\n");

    caixas = (minutos*60*0.75)/300;
    metros = minutos*60*0.75;
    hora = minutos/60;

    printf("Em %.1fh, e %.1fmin, foi produzido: %.1f metros de fios e %.1f caixas", hora, minutos, metros, caixas);
    // system("PAUSE");

    return(0);
}