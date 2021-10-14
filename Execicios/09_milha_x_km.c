#include <stdio.h>
// #include <math.h>

main(){

    int opera; 
    float milhas, km;


    // milhas = 1,609344 * milhas;
    // km = 1,609344 / km;

    printf("______________________\n");
    printf(" Que orecao vai fazer? \n");
    printf(" ( 1 - MILHA > KM | 2 - KM > MILHA) \n");
    printf("______________________\n");
    // 1 para milha>km 2 para km>milha
    scanf("%i", &opera);


    if (opera == 1){
        printf("Conversao de: MILHAS > KM \n");
        printf("Insira o valor de Milhas: \n");
        scanf("%f", &milhas);
        
        km = milhas * 1.609344;
        
        printf("%.2f milhas eh igual a: %.2f km\n", milhas, km);

    }else{
        printf("Conversao de: KM > MILHAS \n");
        printf("Insira o valor de KM: \n");
        scanf("%f", &km);
        milhas = km * 0.621371;
        printf("%.2f km eh igual a: %.2f milhas\n", km, milhas);
    }

    // printf("Em %.1fh, e %.1fmin, foi produzido: %.1f metros de fios e %.0f caixas", hora, minutos, metros, caixas);
    // system("PAUSE");

    return(0);
}