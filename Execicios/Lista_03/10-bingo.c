#include <stdio.h>
#include <string.h>

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


int into (){
    color_full("cyan","   |==============================================|\n");
    color_full("cyan","   |");
    printf("  ########  #### ##    ##  ######    #######  ");
    color_full("cyan", "|\n");
    color_full("cyan","   |");
    printf("  ##     ##  ##  ###   ## ##    ##  ##     ## ");
    color_full("cyan", "|\n");
    color_full("cyan","   |");
    printf("  ##     ##  ##  ####  ## ##        ##     ## ");
    color_full("cyan", "|\n");
    color_full("cyan","   |");
    printf("  ########   ##  ## ## ## ##   #### ##     ## ");
    color_full("cyan", "|\n");
    color_full("cyan","   |");
    printf("  ##     ##  ##  ##  #### ##    ##  ##     ## ");
    color_full("cyan", "|\n");
    color_full("cyan","   |");
    printf("  ##     ##  ##  ##   ### ##    ##  ##     ## ");
    color_full("cyan", "|\n");
    color_full("cyan","   |");
    printf("  ########  #### ##    ##  ######    #######  ");
    color_full("cyan", "|\n");
    color_full("cyan","   |==============================================|");
}

int tab_gen(char lin, char colum){

}
/*
Escreva um programa em linguagem C para gerar cartelas de bingo e exibi-las. 
O programa deverá ler o número de cartelas que deseja-se gerar, onde os números 
em cada cartela serão sorteados dentro dos limites estabelecidos conforme as instruções a seguir:
a) A primeira linha de cada cartela será um cabeçalho com as letras B I N G O 
separadas por 7 espaços em branco gerada por uma função chamada cabecalho;
b) Cada cartela conterá 24 números na forma de uma matriz 5 x 5, sendo que 
a posição central da matriz não conterá valor mas sim um * nesta posição;
c) Os números sorteados em cada coluna deverão obedecer o seguinte critério:
    Coluna B: números de 1 a 15 apenas;
    Coluna I: números de 16 a 30 apenas;
    Coluna N: números de 31 a 45 apenas;
    Coluna G: números de 46 a 60 apenas;
    Coluna O: números de 61 a 75 apenas;
d) Em uma mesma coluna de cada cartela não podem ocorrer números repetidos;
e) As cartelas devem ser impressas de forma alinhada conforme o exemplo:
 
B	I	N	G	O
6	19	32	48	61
11	20	37	58	66
12	27	*	47	70
2	18	36	57	69
1	26	31	53	72


B	I	N	G	O
12	21	34	57	64
2	16	31	50	65
7	18	*	60	66
1	24	40	59	62
11	27	33	58	74

*/

main()
{
    into();
    int vetor[20], i;
	int vetp1[5], vetp2[5],vetp3[5], vetp4[5];
    int veti1[5], veti2[5],veti3[5], veti4[5];

    srand(time(NULL)); // sequencia randomica
} 
