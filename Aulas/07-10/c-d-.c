#include <stdio.h>

main(){
    // assim como no arduino, tem varios tipos de variaveis, longint, float, char... 
    int codMatric;
    float notaProva1,media;
    char letra;
    // Vai ler o valor e armazerna na variavel informada. 
    // o %d siginifica o tipo de varivel. 
    printf ("Digite o cod. matricula: ");
    scanf("%d", &codMatric); // Essa parte Seta o valor a variavel, onde nessa variavel  o codigo requer 5 digitos. 
     
    printf ("Codigo de Matricura = %07d \n\n", codMatric); // Imprimindo usadno uma mariavel
   
    printf ("Nota da 1a prova = ");
    scanf("%c", &notaProva1); // Ledo valor para n1, onde %f informa que o valor lido sera float. Para formatar o numero de caracteres lidos: %.5f, onde sera lido um valor com até 5 casa decimais.  

    printf("N1 = %.1f \n\n", notaProva1);

    getchar(); // Descarta o ultimo enter. 

    printf ("Digite a primeira letra do seu nome: ");
    scanf("%c", &letra);
    printf ("Seu nome comeca com %c \n\n", &letra);

    getchar(); // para a tela aguardanbdo o entrer. 
    
}
