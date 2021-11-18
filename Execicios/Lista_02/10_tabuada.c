#include <stdio.h>

//Tabuada
main()
{
	int tabuada, resposta, i, acertos = 0, erros = 0;
	
	printf("Qual a tabuada quer estudar? - > ");
	scanf("%d", &tabuada);
	
	//mostrando a tabuada
	for(i = 1; i <= 10; i++) //i++ é a mesma coisa que i = i + 1
	{
	   printf("%d x %d = %d \n", tabuada, i, tabuada * i);	
	}
	
	getchar(); // gasta o último ENTER
	getchar(); // parar a tela
	
	printf("\n\n"); // pula várias linhas limpa tela
	printf("\n\n"); // pula várias linhas limpa tela
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d x %d = ", tabuada, i);
		scanf("%d", &resposta);
		
		if(resposta == tabuada * i)
		{
			acertos++;
		}
		else
		{
			erros++;
		}
	}
}
