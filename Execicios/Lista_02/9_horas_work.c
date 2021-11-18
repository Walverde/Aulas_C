

#include <stdio.h>

main()
{
    float i, dias, total_horas = 0, horas_mes, carga_dia, hora_entrada, min_entrada, hora_saida, min_saida;
    float credito, debito;
    char dois_pontos; //separador de horas e minutos

    printf("*** Controle de horas trabalhadas  *** \n\n");

    printf("Quantos dias uteis neste mes? ");
    scanf("%d", &dias);

    printf("Carga horaria diaria do estagio? ");
    scanf("%f", &carga_dia);
    printf("\n\n"); //quebras de linha

    horas_mes = dias * carga_dia; //horas que deveriam ser trabalhadas no mês

   for (i = 0; i < dias; i++)
    {
        printf("dia %d \n", i);
        printf("Hora de entrada (hh:mm) = "); //lendo a hora de entrada no formato hh:mm
        scanf("%f %c %f", &hora_entrada, &dois_pontos, &min_entrada);
        printf("Hora de saida (hh:mm) = "); //lendo a hora de saída no formato hh:mm
        scanf("%f%c%f", &hora_saida, &dois_pontos, &min_saida);

        //convertendo os minutos em horas
        min_entrada = min_entrada / 60;
        min_saida = min_saida / 60;

        hora_entrada = hora_entrada + min_saida;
        hora_saida = hora_saida + min_saida;

        total_horas = total_horas + (hora_saida - hora_entrada); //acumula as horas trabalhadas dia a dia
    }

    printf("\n\n"); //quebra de linhas

    if(total_horas > horas_mes)
    {
        credito = total_horas - horas_mes;
        printf("Credito no banco de horas = %f", credito);
    }
    else
    {
        if(total_horas < horas_mes)
        {
            debito = horas_mes - total_horas;
            printf("Debito no banco de horas = %f", debito);
        }
        else
        {
            printf("Nao ha credito ou debito no banco de horas deste mes");
        }
    }
}
