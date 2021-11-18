#include <stdio.h>
#include <math.h>

main(){

// Variaveis de entrada
float a, b, c, d, e, f, x, y, ce, bf, af, cd, ae, bd, m1, m2, m3, m4, d1, d2 ;

printf("Informe o valor de A,B,C,D,E,F: (6 digitos)");

scanf("%f,%f,%f,%f,%f,%f", &a, &b, &c, &d, &e, &f);

// Formula da distancia entre os pontos. 
y = (c*e - b*f) / (a*e - b*d);
x = (a*f - c*d) / (a*e - b*d);


printf("A solucao e: X =  %.0f, Y = %.0f \n\n", x, y);
printf("_________________________________________________________________\n\n");
printf("Debug: Valor de A: %.0f, Valor de B: %.0f, Valor de C: %.0f, Valor de D: %.0f, valor de E: %.0f, Valor de F: %.0f \n\n", a,b,c,d,e,f);


ce = (c*e);
af = (a*f);
cd = (c*d);
ae = (a*e);
bd = (b*d);
bf = (b*f);

m1 = (ce-bf); 
m2 = (ae-bd);
m3 = (af-cd);
m4 = (ae-bd);

d1 = (m1/m2);
d2 =(m3/m4);


printf("         c.e = %.0f,  bf = %.0f, ae = %.0f, bd = %.0f  \n\n", ce, bf, ae, bd);
printf("         Y  = (%.0f - %.0f) / (%.0f - %.0f) \n\n", ce, bf, ae, bd);
printf("         Y = (%.0f) / (%.0f) \n\n", m1, m2);
printf("         Y = %.0f \n\n", d1);


printf("         af = %.0f,  cd = %.0f, ae = %.0f, bd = %.0f  \n\n", af, cd, ae, bd);
printf("         X = (%.0f - %.0f) / (%.0f - %.0f) \n\n", af, cd, ae, bd);
printf("         X = (%.0f) / (%.0f) \n\n", m3, m4);
printf("         X = %.0f \n\n", d2);

printf("_________________________________________________________________\n\n");
}