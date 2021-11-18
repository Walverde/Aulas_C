#include <stdio.h>
main()
{
 float num;
 int q = 0;
 printf(" digite o numero = ");
 scanf("%f", &num);
 while(num >= 1)
 {
 printf("num = %.2f / 2", num);
 num = num / 2;
 q++;
 printf(" numero = %.2f ", num );
 printf("\n\n");
 }
 printf("quantidade de divisoes = %d", q );
 printf("\n\n");
}