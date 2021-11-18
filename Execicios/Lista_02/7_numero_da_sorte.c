#include <stdio.h>
#include <stdlib.h> //biblioteca para utilizar a função rand
#include <time.h> //biblioteca para usar o relogio do windows e nao repetir os mesmos numeros
main()
{
 int chute, num, vezes=0;
/* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
 com o valor da função time(NULL). Este por sua vez, é calculado
 como sendo o total de segundos passados desde 1 de janeiro de 1970
 até a data atual.
 Desta forma, a cada execução o valor da "semente" será diferente.
 */
 srand(time(NULL));
 num = rand() % 500;
 /*
 A função rand() gera um numero aleatorio a partir do zero. "% 500" diz que o limite
maximo e 500. Se quiser
 conferir o numero gerado, habilite a linha de baixo:
 */
 //printf("Numero magico = %i\n\n", numero);
 do
 {
    printf("chute um numero de 0 a 500 \n\n");
    scanf("%i",&chute);
    vezes++;
    if(chute > num)
        {
           printf("\n\n numero oculto menor \n\n");
        }
    if(chute < num)
        {
          printf("\n\n numero oculto maior \n\n");
        }
 }
 while(chute != num);
 printf("\n\n");
 if(vezes <= 3)
    {
       printf("Muito sortudo\n chutou %i vezes\n\n", vezes);
    }
 if(vezes > 3 && vezes <= 6)
    {
       printf("Sortudo\n chutou %i vezes\n\n", vezes);
    }
 if(vezes > 6 && vezes <= 10)
    {
      printf("Normal\n chutou %i vezes\n\n", vezes);
    }
 if(vezes >= 10)
    {
     printf("Azarado\n chutou %i vezes\n\n", vezes);
    }
 getchar();
}