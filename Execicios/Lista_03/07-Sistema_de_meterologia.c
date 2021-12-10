#include <stdio.h>
#include <string.h>

/*
Um sistema de meterologia utiliza 5 postos de coleta de índices pluviométricos. 
Cada posto faz 3 leituras diárias: uma pela manhã, outra à tarde e a última à noite.
Os dados são dispostos em uma tabela (ou uma matriz) conforme abaixo indicado. 
Construa um programa em linguagem C que permita entrar com dados de precipitação 
armazenando-os em uma matriz e obter qual foi a precipitação média em cada posto, 
a precipitação média do dia e em que posto aconteceu a maior precipitação e em qual 
período (manhã, tarde ou noite). Os números da tabela abaixo são apenas um exemplo, 
pois o programa deve ser capaz de fornecer as informações solicitadas quaisquer que sejam 
os dados.

        posto 1 posto 2 posto 3 posto 4 posto 5

manhã   33      8       56      3       5

tarde   12      28      43      35      67

noite   5       16      27      0       3

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
    int i,j,o, n_postos;
    char postos[60], periodo[5][100] ={{"Manha"},{"Tarde"},{"Noite"}}, leitura[50], numchar ;
    n_postos = 3;

    srand(time(NULL)); // sequencia randomica
    for (j=0;j<2;j++){
        for(i=0;i<3;i++){
            color_full("green","insira os dados do posto"); 
            // sprintf(numchar, "%c", i);
            // color_full("yellow", i); 
            printf(" %d ",i);
            color_full("green","no periodo da ");
            color_full("yellow",periodo[i]);
            color_full("green",": ");
            j++;
            scanf("%d",&leitura[j]);
        }
    }
    color_full("cyan","Dados obtidos: ");
    for(i=0;i<15;i++){
        printf("%d ",leitura[j]);
    }
} 