#include <stdio.h>
#include <string.h>

/*
Elabore um programa em linguagem C
que leia o número de linhas e colunas
de uma matriz, leia a seguir os elementos
desta matriz e mostre a sua transposta.
*/

main()
{
    char frase[30], aux[29], resto[30], vsub; 
	int i,vogal=0,consoante=0, range = 3, tamanho=0 ;

    printf("insira a string: [%d]:",i=0);
    getchar();
    fgets(frase,30,stdin);
    // getchar();
    printf("insira a vogal de subtiuicao: ");
    scanf("%c",&vsub);
    
    for(i=0;i<30;i++){
        if(frase[i] == 'a'){
            frase[i] = vsub;
            vogal++;
            }else{
                if(frase[i] == 'e'){
                frase[i] = vsub;
                vogal++;
            }else{
                if(frase[i] == 'i'){
                frase[i] = vsub;
                vogal++;
                }else{
                    if(frase[i] == 'o'){
                    vogal++;
                    frase[i] = vsub;
                    }else{
                      if(frase[i] == 'u'){
                            vogal++;
                            frase[i] = vsub;
                            }else{
                                if(frase[1] =! frase[30]){
                                    consoante++;
                                }
                                
                        }
                    }

                }
            }
        
        }
    }
    tamanho = strlen(frase);
    // SAIDA -----------------------------------------------------------------------

    printf("________________________________________  \n");
    printf("String Lida:   %s", frase);
    printf("---------------------------------------- \n");
    printf("SUBSTITUICAO pela vogal: %c \n", vsub);
    // printf("Resultado: %d \n", tamanho);
    
    for(i=0;i<tamanho;i++){
        // printf("into for");
        printf("%c,",frase[i]);
    }
    printf("________________________________________  \n");

} 
