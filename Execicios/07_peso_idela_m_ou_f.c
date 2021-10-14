#include <stdio.h>
#include <math.h>

    float altura, peso, ideal;
    char sexo;

int main()

{
    sexo = "h";

    printf("Insira seu peso: ");
    scanf("%f", &peso);
    printf("\n");

    printf("Insira sua altura: ");
    scanf("%f", &altura);
    printf("\n");
    getchar();
    
    printf("Qual seu sexo? M para  mulher e H para homem: ");
    scanf("%c", &sexo);
    printf("\n");
    printf("Valor de sexo informado = %.0c \n", &sexo);

    if(sexo == 'h'){
        printf("_________________________________________ \n\n");
        printf("Valor de sexo informado = %c\n", &sexo);
        printf("Sexo masculino ");
        ideal = (peso*altura)-58;
        printf("\n"); 
        printf("Seu peso idela eh = %.0f", &ideal);
        printf("\n\n"); 
        printf("_________________________________________ \n\n");
    }
    else {
        printf("_________________________________________ \n\n");
        printf("Valor de sexo informado = %c\n", &sexo);
        printf("Sexo Feminino");
        ideal= (peso*altura)-447;
        printf("\n"); 
        printf("Seu peso idela eh = %.0f", &ideal);
        printf("\n"); 
        printf("_________________________________________ \n\n");
    }

    // system("PAUSE");
    return(0);
}