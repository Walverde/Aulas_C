#include <stdio.h>
#include <math.h>


int main()

{
    float prova01, prova02, prova03, media, faltas, aulas;

    printf("Insira a quantidade de aulas ministradas: ");
    printf("\n\n");
    scanf("%f,",&aulas);
    printf("\n\n");

    printf("Insira a quantidade de Faltas do aluno: ");
    printf("\n\n");
    scanf("%f,",&faltas);
    

    printf("Insira o valor das provas 01, 02 e 03 (Separados pro virgula)");
    printf("\n\n");

    scanf("%f,%f,%f,",&prova01, &prova02, &prova03);
    printf("\n\n");

    media=((prova01+prova02+prova03)/3);

    faltas=(faltas*100/aulas);

    if( media > 6 && faltas > 25){
        printf("ARPOVADO");
        printf("\n\n");
    }
    else {
        printf("REPROVADO");
        printf("\n\n");
    }

    system("PAUSE");
    return(0);
}