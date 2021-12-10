#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C
para ler uma palavra ou uma frase e 
escrevê-la de trás para frente.
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
    char frase[30], aux[29], resto[30]; 
	int i,vogal=0,consoante=0, range = 3, tamanho=0 ;

    printf("insira a string: [%d]:",i=0);
    // scanf("%s",&frase);
    // gets(frase);
    fgets(frase,30,stdin);

    tamanho = strlen(frase);
    printf("\n");
    color_full("yellow", "________________________________________  ");
    printf("String Lida:   %s", frase);
    printf("Tamanho da String: %d \n", tamanho);
    printf("\n");
    color_full("cyan", "---------------------------------------- ");
    // printf("");
    color_full("blue", "String Invertida: ");
    for(i=tamanho;i>-1;i--){
        // printf("into for");
        printf("%c ",frase[i]);
    }
    printf("\n");
    printf("\n");
    color_full("yellow", "________________________________________  ");
} 
