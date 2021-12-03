#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C
para ler uma palavra ou uma frase e 
escrevê-la de trás para frente.
*/

main()
{
    char frase[30], aux[29], resto[30]; 
	int i,vogal=0,consoante=0, range = 3, tamanho=0 ;

    printf("insira a string: [%d]:",i=0);
    // scanf("%s",&frase);
    // gets(frase);
    fgets(frase,30,stdin);

    tamanho = strlen(frase);

    printf("________________________________________  \n");
    printf("String Lida:   %s", frase);
    printf("Tamanho da String: %d \n", tamanho);
    printf("---------------------------------------- \n");
    printf("String Invertida: ");
    for(i=tamanho;i>-1;i--){
        // printf("into for");
        printf("%c ",frase[i]);
    }
    printf("\n");
    printf("________________________________________  \n");
} 
