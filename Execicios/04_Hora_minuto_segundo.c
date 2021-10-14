#include <stdio.h>

int main()

{
    int segundos, emhora, emminuto;

    printf("Digite segundos: ");

    printf("\n\n");

    scanf("%d",&segundos);
    printf("\n\n");

    emminuto = (segundos/60);
    
    emhora = (segundos/3600);



    printf("Em hora = %dh , Em minuto = %dmin , Em segundo = %ds", emhora,emminuto,segundos);

    getch();
}