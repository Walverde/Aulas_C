#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C
para ler uma palavra ou uma frase e 
escrevê-la de trás para frente.
*/

main()
{
    int k = 60, j = 0;
    char frase[30], frase_x[60], resto[30]; 
	int i,vogal=0,consoante=0, range = 3, tamanho=0, tamanho_2 = 0 ;

    printf("insira a string: [%d]:",i=0);
    // scanf("%s",&frase);
    // gets(frase);
    fgets(frase,30,stdin);

    tamanho = strlen(frase);
    printf("\n");
    printf("________________________________________  ");
    printf("\n");
    printf("String Lida:   %s", frase);
    printf("Tamanho da String: %d \n", tamanho);

    k = 2*tamanho;

    printf("Tamanho de k: %d \n", k);

    printf("Bug");
    
    for(i=0;i<k;i++ ){
        // printf("Bug 01 ");
        j++;
        // printf("Bug 02");
        // printf("Bug");
        frase_x[j] = frase[i];
        // printf("Bug 03");
        frase_x[j+1] = ' ';
        // printf("Bug 04");
        j = j+2;
        // printf("Bug 05");
    }

    tamanho_2 = strlen(frase_x);

    printf("\n");
    printf("---------------------------------------- ");
    // printf("");
    printf("\n Tamanho da String_X: %d ", tamanho_2);
    printf("\n");
    printf("String separada: ");
    printf("\n");
    printf("Frase: ");
    for(i=0;i<k;i++){
        printf("%c",frase_x[i]);
    }
    printf("\n");
    printf("\n");
    printf("________________________________________  ");
} 
