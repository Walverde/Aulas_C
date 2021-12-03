#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C 
que leia uma string e informe quantas 
vogais e quantas consoantes há nesta string.
*/

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

    printf("________________________________________  \n");
    printf("String Lida:   %s", frase);
    printf("________________________________________  \n");
    printf("                Dados \n");
    printf("Tamanho da String: %d \n", tamanho);
    printf("Letra 1: %c \n", frase[0]);
    printf("Letra 3: %c \n", frase[3]);
    printf("Ultima: %c \n", frase[30]);
    
    for(i=0;i<tamanho;i++){
        // printf("into for");
        printf("%c,",frase[i]);
    }
    // PRINTS ---------------------------------------------------------------
    printf("________________________________________  \n");
    printf("Contagens de Vogais e Consoantes  \n");
    printf("________________________________________  \n");
    printf("\n");
    printf("Numero de Vogais = %d,",vogal-1); 
    printf("\n"); //----------------------IMPAR----------------------------
    printf("Numero de Consoantes = %d,\n",tamanho-vogal-1);
} 
