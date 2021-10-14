#include <stdio.h>
#include <math.h>

main()
{
	float ideal, alt, peso;
	char sexo;

	printf("Digite altura: ");
	scanf("%f", &alt);

	printf("qual o peso: ");
	scanf("%f", &peso);

	printf("sexo:  digite (m) para masculino ou (f) para feminino: ");
	scanf("%c", &sexo);
	getchar(); //pega o ultimo caractere armazenado na memoria

	if(sexo == 'f')
	{
		ideal = 62.1 * alt - 44.7; // calculos dado no exercicio
	}
	else
	{
		ideal = 72.7 * alt - 58;
	}

	printf("\n\n");
	printf("peso ideal = %.1f kg \n\n", ideal);
}