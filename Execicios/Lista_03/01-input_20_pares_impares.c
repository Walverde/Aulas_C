#include <stdio.h>

/*
Construa um programa que leia um vetor de 20 números e o divida em outros
outros dois vetores, um apenas com os números pares e outro apenas com os
números ímpares. O programa deve mostrar na tela os 20 números digitados 
e os respectivos vetores pares e ímpares.
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

main()
{
	int numbers[20], par[20], impar[20],i,j=0,k=0;

    for(i=0; i<20; i++) // Loop para capturar os 20 digitos. 
    {
        printf("insira o numero[%d]:",i);
        scanf("%d",&numbers[i]);
        if(numbers[i] %2 == 0){
            par[k] = numbers[i];
            k++;	
        }else{
            impar[j] = numbers[i]; 
            j++;
        }
    }
    // PRINTS -----------------------------------------------------------------------------
    printf("\n\n"); //----------------------Numeros----------------------------
    
    // printf();
    color_full("yellow"," Numeros Informados ={");
        for(i=0;i<20;i++){
            printf("%d,",numbers[i]);
        }
    printf("}\n\n"); //----------------------PAR----------------------------
    
    color_full("green"," Pares={");
    // printf("Pares={");
        for(i=0;i<j;i++){
            printf("%d,",impar[i]); 
        }
    printf("} \n\n"); //----------------------IMPAR----------------------------
    
    // printf("Impares ={");
    color_full("red"," Impares ={");
        for(i=0;i<k;i++){
            printf("%d,",par[i]);
        }
    printf("} \n\n");
}
