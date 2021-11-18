#include <stdio.h>
// #include<locale.h>

main(){
    // setlocale(LC_ALL, "Portuguese");

    int opera; 
    float indice;

    printf("______________________\n");
    printf(" Insira o indice de poluicao: \n");
    printf("______________________\n");
    // 1 para milha>km 2 para km>milha
    scanf("%f", &indice);

    printf("Valor do indice: %f\n", indice); 

if( indice < 0.05)
{
    printf("Aceitavel");
}
else{
    if (indice <  0.25)
    {
            printf("Grupos Suspensos: \n");
            printf("[X] Grupo 01: \n");
            printf("[ ] Grupo 02: \n");
            printf("[ ] Grupo 03: \n");
    }else
        {
        if ( indice < 0.4)
        {
            printf("Grupos Suspensos: \n");
            printf("[X] Grupo 01: \n");
            printf("[X] Grupo 02: \n");
            printf("[ ] Grupo 03: \n");
        }else
        {
            if (indice < 0.5)
            {
                printf("Grupos Suspensos: \n");
                printf("[X] Grupo 01: \n");
                printf("[X] Grupo 02: \n");
                printf("[X] Grupo 03: \n");
            }else{
                    printf("Valor incorreto \n");
                }
                    
        }

        }


}

return(0);
}