#include <stdio.h>

/*
Construa um programa que leia um vetor de 20 números e o divida em outros
outros dois vetores, um apenas com os números pares e outro apenas com os
números ímpares. O programa deve mostrar na tela os 20 números digitados 
e os respectivos vetores pares e ímpares.
*/

main()
{
	int numbers[20], par[20], impar[20],i,j=0,k=0;

    for(i=0; i<20; i++) // Loop para capturar os 20 digitos. 
    {
        printf("insira o numero[%d]:",i);
        scanf("%d",&numbers[i]);
        if(numbers[i] %2 == 0){
            par[k] = numbers[i];
            k++;	
        }else{
            impar[j] = numbers[i]; 
            j++;
        }
    }
    // PRINTS -----------------------------------------------------------------------------
    printf("\n\n"); //----------------------Numeros----------------------------
    
    printf(" Numeros Informados ={");
        for(i=0;i<20;i++){
            printf("%d,",numbers[i]);
        }
    printf("}\n\n"); //----------------------PAR----------------------------
    
    printf("Pares={");
        for(i=0;i<j;i++){
            printf("%d,",impar[i]); 
        }
    printf("} \n\n"); //----------------------IMPAR----------------------------
    
    printf("Impares ={");
        for(i=0;i<k;i++){
            printf("%d,",par[i]);
        }
    printf("} \n\n");
}
