#include <stdio.h>

// Walgreen Melo

main()

{

 int numero = 101, soma = 0;
 for( ; numero <= 195; numero = numero + 2){
        printf("soma = %d + %d", soma, numero); 
        // Somar impar
        soma = soma + numero;
        getchar(); 
        //limpar caractere armazenado na memoria
 }

printf("Soma dos impares = %d", soma);

}
