#include <stdio.h>


main()
{
 float CH, NF, CHNF = 0, somarCH = 0, Coef;
 int disciplinas, q;
 printf("Quantidade de disciplinas= ");
 scanf("%d", &disciplinas);

 for(q = 1; q <= disciplinas; q++) //somar CH e CH x NF
        {
        printf("Disciplina %d \n", q);
        printf("Carga Horaria = ");
        scanf("%f", &CH); // carga horária da disciplina
        printf("Nota Final = ");
        scanf("%f", &NF);// nota final da disciplina
        printf("\n");
        somarCH = somarCH + CH; //soma Carga horaria
        CHNF = CHNF + CH * NF; //soma de Carga x Nota
        printf("\n\n");
        getchar();
        }
 Coef = CHNF / (10 * somarCH);
 printf("Coeficiente = %f", Coef);
 printf("\n\n");
}