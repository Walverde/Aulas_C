#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C 
para ler uma palavra ou uma frase 
e substituir todas as vogais do texto 
por uma vogal específica informada 
pelo usuário.
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
    char frase[30], aux[29], resto[30], vsub; 
	int i,vogal=0,consoante=0, range = 3, tamanho=0 ;

    printf("insira a string: [%d]:",i=0);
    getchar();
    fgets(frase,30,stdin);
    // getchar();
    color_full("yellow","insira a vogal de subtiuicao: ");
    // printf("");
    scanf("%c",&vsub);
    
    for(i=0;i<30;i++){
        if(frase[i] == 'a'){
            frase[i] = vsub;
            vogal++;
            }else{
                if(frase[i] == 'e'){
                frase[i] = vsub;
                vogal++;
            }else{
                if(frase[i] == 'i'){
                frase[i] = vsub;
                vogal++;
                }else{
                    if(frase[i] == 'o'){
                    vogal++;
                    frase[i] = vsub;
                    }else{
                      if(frase[i] == 'u'){
                            vogal++;
                            frase[i] = vsub;
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
    tamanho = strlen(frase);
    // SAIDA -----------------------------------------------------------------------

    printf("\n");
    color_full("yellow", "________________________________________  ");
    printf("String Lida:   %s", frase);
    printf("---------------------------------------- \n");
    printf("SUBSTITUICAO pela vogal: %c \n", vsub);
    // printf("Resultado: %d \n", tamanho);
    
    for(i=0;i<tamanho;i++){
        // printf("into for");
        printf("%c,",frase[i]);
    }
    printf("\n");
    color_full("yellow", "________________________________________  ");

} 
