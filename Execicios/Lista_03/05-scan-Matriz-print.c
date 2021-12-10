#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C
que leia o número de linhas e colunas
de uma matriz, leia a seguir os elementos
desta matriz e mostre a sua transposta.
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
 int linhas, colunas, i, j;
 
 // i = linhas e j = colunas no loop
 
 printf("Quantas linhas tem a matriz A? ");
 scanf("%d",&linhas);
 printf("Quantas colunas tem a matriz A? ");
 scanf("%d",&colunas);
 printf("\n\n"); //quebras de linha
 
 int matriz[linhas][colunas], transposta[colunas][linhas];
 
 //leitura da matriz A a partir do elemento matriz[0][0] mas somando 1 para apresentar para
 //o usuário matriz(1,1), mas só na apresentação.
 for(i = 0; i < linhas ; i++)
 {
    for(j = 0; j < colunas; j++)
    {
       printf("matriz(%d,%d) = ", i + 1, j + 1);
       scanf("%d",&matriz[i][j]);                            
    }
 }
 
 // escrevendo a matriz A
 printf("\n\n"); //quebras de linha
 printf("Matriz original:\n\n");
 
 for(i = 0; i < linhas ; i++)
 {
    for(j = 0; j < colunas; j++)
    {
       printf("%d   ", matriz[i][j]);                            
    }
    printf("\n\n"); // pula linha
 }
 
 //Criando a matriz transposta T
 for(i = 0; i < linhas; i++)
 {
    for(j = 0; j < colunas; j++)
    {
       transposta[j][i] = matriz[i][j];                            
    }
 }
 

 printf("\n\n"); //quebras de linha
     printf("\n");
    color_full("yellow", "________________________________________  ");
 printf("Matriz tranposta:\n\n");
     printf("\n");
    color_full("yellow", "________________________________________  ");
 for(i = 0; i < colunas; i++)
 {
    for(j = 0; j < linhas; j++)
    {
       printf("%d   ", transposta[i][j]);                            
    }
    printf("\n\n");  //quebras de linha
 }
 
 getchar(); // descarta o último ENTER
 getchar(); // para a tela  
}
