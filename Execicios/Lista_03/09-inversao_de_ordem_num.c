#include <stdio.h>
#include <string.h>

/*
Escreva um programa em linguagem C que tenha uma 
função para inverter qualquer vetor de números 
inteiros (ou seja, o último elemento será o primeiro 
e o primeiro será o último e assim sucessivamente 
com cada elemento na ordem do vetor).
*/

int invert( char num_range[30], int tamanho){
    int j, resultado;
    for(j=tamanho-1;j>-1;j--){
        printf("%d ",num_range[j]);
    }
    resultado = num_range;
    return (resultado);
}

main()
{
	int  metade, range=10, i, tamanho;
    char num_range[30], invertido[30] ;

    printf("insira o range maximo de numeros: ");
    scanf("%d",&range);

    // fgets(num_range,30,stdin);
    for(i=0;i<range;i++){
        printf("insira numeros (max %d): [%d]:",range,i);
        scanf("%d",&num_range[i]);
    }
    tamanho = strlen(num_range);
    metade = tamanho/2;
    
    // SAIDA -----------------------------------------------------------------------
    printf("\n ________________________________________  \n");
    printf("Total: %d \n", tamanho);
    printf("Metade: %d \n", metade);
    printf("\n ----------------------------------------  \n");
    printf("Range normal: ");
    
    for(i=0;i<range;i++){
        printf("%d ",num_range[i]);
    }
    printf("\n ----------------------------------------  \n");
    printf("Range invertido: ");

    invert(num_range, tamanho);

    printf("\n________________________________________  \n");
} 
