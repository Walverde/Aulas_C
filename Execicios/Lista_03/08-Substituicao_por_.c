#include <stdio.h>
#include <string.h>

/*
Escreva um programa em linguagem C para ler uma palavra e 
reescrevê-la colocando um sublinhados na metade da palavra 
(tamanho da palavra / 2), conforme o exemplo:

UNIVERSIDADE

UNIVER _ _ _ _ _ _

O programa deve dizer quantas letras tem a palavra original 
e pedir para o usuário dizer qual é a palavra. Se o usuário 
acertar, o programa deve escrever "Parabéns, você acertou!!!”, 
caso contrário ele deve dizer para o usuário tentar novamente 
e repetir o processo.

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

int into(){
    // printf("\n ________________________________________  \n");
    printf("   __  .__  __.  __  .___________.     _______      ___      .___  ___.  _______  \n");
    printf("  |  | |  \ |  | |  | |           |    /  _____|    /   \     |   \ /   | |   ____|  \n");
    printf("  |  | |   \|  | |  | `---|  |----`   |  |  __     /  ^  \    |  \   /  | |  |__    \n");
    printf("  |  | |  . ` | |  |     |  |        |  | |_ |   /  /_\  \    |  |\ /|  | |   __|   \n");
    printf("  |  | |  |\   | |  |     |  |        |  |__| |  /  _____  \  |  |  |  | |  |____   \n");
    printf("  |__| |__| \__| |__|     |__|          \______| /__/     \__\  |__|  |__| |_______|  \n");
    // printf("\n ________________________________________  \n");

}

main()
{
    char word[30], user_input_word[30], owner_input_word[30]; 
	int i, vogal=0, consoante=0, range = 3, tamanho, metade;

    into();
    color_full("yellow", "INSIRA A PALAVRA DA RODADA! :D -> ");
    getchar();
    fgets(word,31,stdin);

    color_full("red","Debug, Input Letra:");
    printf(" %s", word);

    tamanho = strlen(word);
    metade = tamanho/2;

    color_full("red","Debug, Input Letra:");
    printf(" %s", word);

    for(i=metade;i<tamanho;i++){
        // printf("For");
        word[i] = '_';
    }
    
    // SAIDA -----------------------------------------------------------------------

    printf("\n ________________________________________  \n");
    color_full("green", "Faltando: ");
    printf("%d", metade);
    color_full("green", " letras em um total de: ");
    printf("%d", tamanho);
    color_full("green", ", letras");
    printf("\n ----------------------------------------  \n");
    printf("Qual a palavra?: ");
    
    for(i=-1;i<tamanho;i++){
        printf("%c ",word[i]);
    }
    printf("\n");

    fgets(user_input_word,31,stdin);
    
    while (user_input_word != word)
    {
        fgets(user_input_word,31,stdin);
        if (user_input_word == word)
        {
            color_full("green","Acertou mizeravi! ");
            break;
        }else{
            color_full("red","Erroooooou!, tente de novo! \n");
            
        }
    }
    printf("\n________________________________________  \n");
    exit(3);
} 
