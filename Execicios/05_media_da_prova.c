#include <stdio.h>
#include <math.h>


int main()

{
    float prova01, prova02, prova03, media;

    printf("Insira o valor das provas 01, 02 e 03 (Separados pro virgula)");

    printf("\n\n");

    scanf("%f,%f,%f,",&prova01, &prova02, &prova03);
    printf("\n\n");

    media=((prova01+prova02+prova03)/3);

    if( media > 6 ){
        printf("ARPOVADO");
        printf("\n\n");
    }
    else {
        printf("REPROVADO");
        printf("\n\n");
    }
    printf("\n\n");
    system("PAUSE");
    return(0);
}