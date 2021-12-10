#include <stdio.h>
#include <string.h>

/*
Walgreen Melo
*/
//lendo e escrevendo uma matriz
#include <stdio.h>

main()
{
	int linhas, colunas, i, j;
	int matriz[10][10], matrizt[10][10];

	printf(" Quantas linhas tem a matriz? ");
	scanf("%d", &linhas);

	printf(" Quantas colunas tem a matriz? ");
	scanf("%d", &colunas);


	//lendo a matriz __________________
	printf("\n\n");
	for(i = 0; i < linhas; i = i + 1) //controla as linhas
	{
		for(j = 0; j < colunas; j = j + 1) //controla colunas
		{
			printf("matriz[%d][%d] = ", i, j);
			
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] < 1){
                if(matriz[i][j] >= 0){
                    scanf("%d", &matriz[i][j]);
                }
                
                // if (matriz[i][j] != 1)
                // {
                // j--;
                //     scanf("%d", &matriz[i][j]);
                // }
                
            }else{
                j--;
                scanf("%d", &matriz[i][j]);
            }

		}
	}

	//escrevendo a matriz _______________
	printf("\n\n");
	printf(" Matriz: \n\n");

	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
			printf(" %d         ", matriz[i][j]);
		}
		printf("\n"); //quebras de linha
	}

	for(i = 0; i < linhas; i++)
		{
			for(j = 0; j < colunas; j++)
			{
			matrizt[j][i] = matriz[i][j];
			}
		}

		printf(" a Matriz transposta e: \n\n");

		for(i = 0; i < linhas; i++)
		{
			for(j = 0; j < colunas; j++)
				{

			printf(" %d         ", matrizt[i][j]);
			}
	printf("\n\n"); //quebras de linha

}
}