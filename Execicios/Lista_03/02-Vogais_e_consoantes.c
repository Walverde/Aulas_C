#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C 
que leia uma string e informe quantas 
vogais e quantas consoantes há nesta string.
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

    for(i=0;i<30;i++){
        if(frase[i] == 'a'){
            vogal++;
            }else{
                if(frase[i] == 'e'){
                vogal++;
            }else{
                if(frase[i] == 'i'){
                vogal++;
                }else{
                    if(frase[i] == 'o'){
                    vogal++;
                    }else{
                      if(frase[i] == 'u'){
                            vogal++;
                            }else{
                                if(frase[1] =! frase[30]){
                                    consoante++;
                                }
                                
                        }
                    }

                }
            }
        
        }
    }
    // Printando Array 
    tamanho = strlen(frase);

    printf("\n");
    color_full("yellow", "________________________________________  ");
    printf("String Lida:   %s", frase);
    // printf("________________________________________  \n");
    
    printf("\n");
    color_full("yellow", "________________________________________  ");
    printf("\n");
    color_full("cyan", "                Dados ");
    printf("Tamanho da String: %d \n", tamanho);
    printf("Letra 1: %c \n", frase[0]);
    printf("Letra 3: %c \n", frase[3]);
    printf("Ultima: %c \n", frase[30]);
    
    for(i=0;i<tamanho;i++){
        // printf("into for");
        printf("%c,",frase[i]);
    }
    // PRINTS ---------------------------------------------------------------
    printf("\n");
    color_full("yellow", "________________________________________  ");
    printf("\n");
    color_full("cyan", "Contagens de Vogais e Consoantes  ");
    printf("\n");
    color_full("yellow", "________________________________________  ");
    printf("\n");
    printf("Numero de Vogais = %d,",vogal-1); 
    printf("\n"); //----------------------IMPAR----------------------------
    printf("Numero de Consoantes = %d,\n",tamanho-vogal-1);
} 
