#include <stdio.h>

// Calculo de media, vai ler duas notas e tirar a media. 

main(){
    // variaveis onde sera salvo o valor n1 e n2 para tirar a media
    float n1,n2, media;

    // vai printar e na segunda linha, ler os dados inseridos. 
    printf("Nota 1 = ");
    scanf("%f", &n1);
    // vai printar e na segunda linha, ler os dados inseridos. 
    printf("Nota 2 = ");
    scanf("%f", &n2);
    // calculo do valor medio. 
    media = (n1 + n2)/2;
    // print do valro calculado. 
    printf("A nota media e: %.1f \n\n", media);

}
