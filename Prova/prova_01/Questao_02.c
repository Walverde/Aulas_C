#include <stdio.h>
// Walgreen Melo
/*
Desejando saber a média de idade de homens e mulheres que participaram de uma palestra, 
escreva um programa em linguagem C que leia a idade e o sexo de várias pessoas e mostre a 
média de idade geral e a quantidade de homens e mulheres. O loop da leitura de dados encerra 
quando for informado sexo = 'x'. Copie e cole aqui o código fonte do seu programa.
*/

 float homem, mulher, soma_idade, med_id, idade;
 char sexo;
 int num_all, num_man, num_woman;

num_woman = 0;
num_man = 0;
main()

{

            printf("INT SEXO & IDADE (m ou f)");
            printf("\n\n");
            scanf("%c,%f",&sexo,&idade);
    
    do{


            if (sexo == 'm'){
                num_all = num_all + 1;
                num_woman = num_woman + 1;
                soma_idade = soma_idade + idade;
            }else{
                if (sexo == 'h'){
                    num_all = num_all +1;
                    num_man = num_man + 1 ;
                    soma_idade = soma_idade + idade;
                }
            }

            printf("INT SEXO & IDADE (m ou f)");
            printf("\n\n");
            scanf("%c", &sexo);
            
    }while( sexo =! 'x');

    med_id = soma_idade/num_all;

printf("Media de idade = %.0f ", med_id);
printf("Quantidade de Homens = %i ", num_man);
printf("Quantidade de Mulheres = %i ", num_woman);

}
