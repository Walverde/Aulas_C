#include <stdio.h>
#include <math.h>

main(){

// Variaveis de entrada
float x, y, d;

printf("Informe o valor do ponto A: ");
scanf("%f", &x);

printf("Informe o valor do ponto B: ");
scanf("%f", &y);

// Formula da distancia entre os pontos. 
d = sqrt(pow((x*2-x*1),2)+pow((y*2-y*1),2));

printf("A distancia entre os dois pontos e: %.0f \n\n", d);

}