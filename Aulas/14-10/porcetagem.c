#include <stdio.h>
#include <math.h>

main()
{

    float altura, peso, ideal;
    char sexo;

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
    printf("Valor de sexo informado = %c \n", sexo);

    if(sexo == 'h'){
        printf("_________________________________________ \n\n");
        printf("Peso idela para o sexo Masculino eh:  = %cKg\n", sexo);
        ideal = 72.7 * altura -58;
        printf("\n"); 
        printf("Seu peso idela eh = %.1f", ideal);
        printf("\n"); 
        printf("_________________________________________ \n\n");
    }
    else {
        printf("_________________________________________ \n\n");
        printf("Peso idela para o sexo Feminino eh: = %cKg\n", &sexo);
        ideal= 62.1 * altura - 44.7;
        printf("\n"); 
        printf("Seu peso idela eh = %.1f", ideal);
        printf("\n"); 
        printf("_________________________________________ \n\n");
    }

    // system("PAUSE");
    return(0);
}