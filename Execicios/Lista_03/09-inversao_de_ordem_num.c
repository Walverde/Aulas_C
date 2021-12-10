#include <stdio.h>
#include <string.h>

/*
Escreva um programa em linguagem C que tenha uma 
função para inverter qualquer vetor de números 
inteiros (ou seja, o último elemento será o primeiro 
e o primeiro será o último e assim sucessivamente 
com cada elemento na ordem do vetor).
*/

int color_full(char color[10], char text[10]){
    // char red[10] = "red";

    if (color == "red"){
        printf("\033[0;31m");
        printf("%s", text);
        printf("\033[0m");
        } 
        else
        {
            if (color == "green")
            {
                printf("\033[0;32m");
                printf("%s", text);
                printf("\033[0m");    
            }else
            {
                if(color == "yellow")
                {
                    printf("\033[0;33m");
                    printf("%s", text);
                    printf("\033[0m");
                }else
                {
                    if(color == "blue")
                    {
                        printf("\033[0;34m");
                        printf("%s", text);
                        printf("\033[0m");
                    }else
                    {
                        if(color == "pruple")
                        {
                            printf("\033[0;35m");
                            printf("%s", text);
                            printf("\033[0m");
                        }else
                        {
                            if(color == "cyan")
                            {
                                printf("\033[0;36m");
                               printf("%s", text);
                                printf("\033[0m");
                            }else
                            {
                                if(color == "white")
                                {
                                    printf("\033[0;37m");
                                    printf("%s", text);
                                    printf("\033[0m");
                                }else
                                {
                                    printf("COR INVALIDA");
                                    exit(3);
                                        
                                }//else invalido
                            }//else white
                        }//else cyan
                    }// else pruple
                }// Else blue
            }// ELSE yello
            
        }//else green

}




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

    printf("\n");
    color_full("yellow", "insira o range maximo de numeros: ");
    // printf("");
    scanf("%d",&range);

    // fgets(num_range,30,stdin);
    for(i=0;i<range;i++){
        printf("insira numeros (max %d): [%d]:",range,i);
        scanf("%d",&num_range[i]);
    }
    tamanho = strlen(num_range);
    metade = tamanho/2;
    
    // SAIDA -----------------------------------------------------------------------
    printf("\n");
    color_full("yellow", "________________________________________  ");
    printf("\n");
    printf("\n");
    printf("Total: %d \n", tamanho);
    printf("\n");
    printf("Metade: %d \n", metade);
    printf("\n");
    color_full("cyan", "---------------------------------------- ");
    printf("\n");
    color_full("green","Range Normal: ");
    // printf("\n");
    
    for(i=0;i<range;i++){
        printf("%d ",num_range[i]);
    }
    printf("\n\n");
    color_full("cyan", "---------------------------------------- ");
    printf("\n");
    color_full("red","Range invertido: ");
        // printf("\n");
    // printf("Range invertido: ");

    invert(num_range, tamanho);

    printf("\n");
    color_full("yellow", "________________________________________  ");
} 
