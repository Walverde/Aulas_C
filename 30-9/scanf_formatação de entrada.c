#include <stdio.h>

main(){
    int codigo;
    float n1;
    char sadadsas;
    // Vai ler o valor e armazerna na variavel informada. 
    // o %d siginifica o tipo de varivel. 
    printf ("Insira o codigo de matricula: ");
    scanf("%05d", &codigo); // Essa parte Seta o valor a variavel. 
     
    printf ("Codigo de Matricura = %05d \n\n", codigo); // Imprimindo usadno uma mariavel

    // codigo = 75;
    getchar(); // Pausa para o enter. 
   
    printf ("Insira o valor da nota: ");
    scanf("%f", &n1); // Ledo valor para n1, onde %f informa que o valor lido sera float. Para formatar o numero de caracteres lidos: %.5f, onde sera lido um valor com até 5 casa decimais.  

    printf ("Nota da prova= %f \n\n", n1); // Imprimindo usadno uma mariavel, 
    
}


