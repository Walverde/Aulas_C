#include <stdio.h>

// Walgreen Melo

// Escreva um programa em linguagem C que concede descontos em produtos conforme o horário da 
// compra: 
// a) de 0 (zero) hs a 6 hs = 30%; 
// b) das 6 hs às 8 hs = 20%; das 8 hs às 19 hs = 5%; das 19 às 22 hs = sem desconto; das 22 hs às 24 hs = 5%. 
// O programa deverá ler o valor do produto e o horário da compra e exibir o preço final e o valor do desconto. 
// Copie e cole aqui o código fonte do seu programa.

 float hora, valor, desconto;

main()

{

    printf("Digite a hora e o valor de compra do cliente");
    printf("\n\n");
    scanf("%f,%f",&hora,&valor);
    printf("\n\n");

    if (hora <= 5.99 ){
        desconto = valor*0.7;
    }else{
        if(hora <= 7.99 ){
            desconto = valor * 0.8; 
        }else{
            if(hora <= 17.99 ){
                desconto = valor * 0.95;
            }else{
                if( hora <= 21.99){
                    desconto = valor;
                }else{
                    if(hora <= 23.99){
                        desconto = valor*0.95;
                    }
                }
            }
        }
    }
 

printf("Valor com desconto = %.0f ", desconto);

printf("Hora informada = %.0f ", hora);

printf("Valor sem desconto = %.0f ", valor);

}
