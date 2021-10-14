#include <stdio.h>
#include <math.h>


int main()

{
    float altura, peso, ideal;
    char sexo;

    printf("Insira seu peso: ");
    printf("\n\n");
    scanf("%f", &peso);

    printf("Insira sua altura");
    printf("\n\n");
    scanf("%f", &altura);
    
    printf("Qual seu sexo? M para  mulher e H para homem");
    printf("\n\n");
    scanf("%c", &sexo);
    printf("Valor de sexo informado = %c \n\n", &sexo);

    if(sexo == 'h'){
        printf("Valor de sexo informado = %c \n\n", &sexo);
        printf("\n\n"); 
        printf("Sexo masculino ");
        printf("\n\n"); 
        ideal= (72,7*altura-58);
    }
    else {
        printf("Valor de sexo informado = %c", &sexo);
        printf("\n\n"); 
        printf("Sexo Feminino");
        printf("\n\n"); 
        ideal= (62,7*altura-44,7);
    }

    // system("PAUSE");
    return(0);
}