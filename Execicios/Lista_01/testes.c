#include <stdio.h>
/*
Desejando saber a média de idade de homens e mulheres que participaram de uma palestra,
escreva um programa em linguagem C que leia a idade e o sexo de várias pessoas e mostre a
média de idade geral e a quantidade de homens e mulheres. O loop da leitura de dados encerra
quando for informado sexo = 'x'. Copie e cole aqui o código fonte do seu programa.
*/

 float homem, mulher, soma_idade, media_idade, idade;
 char sexo;
 int num_all, nman, num_mulher;

num_mulher = 0;
num_homem = 0;

main()

{
    // printf("Insira o sexo e a idade da pessoa ");

    printf("Insira o sexo e a idade da pessoa ");

    // printf("\n\n");
    printf("\n\n");

    scanf("%c,%f",&sexo,&idade);

   // scanf("%f,%f",&sexo,&idade);
    do{


    // printf("\n\n")
    printf("\n\n");
    printf("Sexo informado = %c ", sexo);

    if (sexo == "m"){
    num_all++;
    num_mulher++;
    soma_idade = soma_idade + idade;
    }else{
    if (sexo == "h"){
    num_all++;
    num_homem++;
    soma_idade = soma_idade + idade;
                }
            }

    printf("Insira o sexo e a idade da pessoa ");
    printf("\n\n");
    scanf("%c,%f",&sexo,&idade);

    }while( sexo =! "x");

    media_idade = soma_idade/num_all;

printf("Media de idade = %.0f ", media_idade);
printf("Quantidade de Homens = %.0f ", num_homem);
printf("Quantidade de Mulheres = %.0f ", num_mulher);

}