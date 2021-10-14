#include <stdio.h>
#include <conio.h>
int main(void)
{
  int i;
  
  //declarando e atribuindo valores no vetor de char
        //texto[7] usa 6 caracteres úteis + 1 caracter para o finalizador
  int texto[6] = "";

  printf("Informe um numero com 4 digitos:");
// scanf("%04d", &codigo);

  scanf("%05d", texto);

  
  printf("Valor da variavel texto = %s\n", texto);
  
  //Percorrendo o vetor de char e mostrando
  //cada elemento individualmente
  for (i=0; i<6; i++)
  {
    printf("Valor do elemento %d da string = %c\n",i, texto[i]);
  }
  
  printf("Valor do elemento %d da string = %c\n",4, texto[4]);

//   getch();
  return 0;
}