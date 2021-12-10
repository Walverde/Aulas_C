#include <stdio.h>
#include <string.h>

/*
Incremente o primeiro exercício desta lista de forma que, 
em vez de montar apenas dois vetores, um de números pares 
e um de números ímpares, o programa divida os números pares 
e os números ímpares em vetores de máximo 5 elementos cada um. 
Portanto, haverão no máximo 4 vetores pares ou 4 vetores ímpares (4 * 5 = 20).
*/

#include <stdio.h>


int color_full(char color[10], char text[10]){
    // char red[10] = "red";

    if (color == "red"){
        printf("\033[0;31m");
        printf("%s", text);
        printf("\033[0m");
        } 
        else
        {
            if (color == "green")
            {
                printf("\033[0;32m");
                printf("%s", text);
                printf("\033[0m");    
            }else
            {
                if(color == "yellow")
                {
                    printf("\033[0;33m");
                    printf("%s", text);
                    printf("\033[0m");
                }else
                {
                    if(color == "blue")
                    {
                        printf("\033[0;34m");
                        printf("%s", text);
                        printf("\033[0m");
                    }else
                    {
                        if(color == "pruple")
                        {
                            printf("\033[0;35m");
                            printf("%s", text);
                            printf("\033[0m");
                        }else
                        {
                            if(color == "cyan")
                            {
                                printf("\033[0;36m");
                               printf("%s", text);
                                printf("\033[0m");
                            }else
                            {
                                if(color == "white")
                                {
                                    printf("\033[0;37m");
                                    printf("%s", text);
                                    printf("\033[0m");
                                }else
                                {
                                    printf("COR INVALIDA");
                                    exit(3);
                                        
                                }//else invalido
                            }//else white
                        }//else cyan
                    }// else pruple
                }// Else blue
            }// ELSE yello
            
        }//else green

}





main()
{
 int vetor[20], i = 0, k = 0, l = 0, m = 0, n = 0, r = 0, s = 0, t = 0, u = 0;
 int vpar1[5], par2[5], par3[5], par4[5], vetnum[20];
 int vetimpar1[5], vetimpar2[5], vetimpar3[5], vetimpar4[5];
 
 //leitura dos números
 for(i = 0; i < 20; i++)
 {
    printf("numero[%i] = ", i);
    scanf("%d", &vetor[i]);
    
    if(vetor[i] % 2 == 0) 
    {
       if(k < 5) 
       {
          vpar1[k] = vetnum[i];
          k = k + 1; 
       }else{
          if(l < 5) 
          {
             par2[l] = vetnum[i];
             l = l + 1; 
          }else{
             if(m < 5) 
             {
                par3[m] = vetnum[i];
                m = m + 1;
             }else{
                 par4[n] = vetnum[i];
                 n = n + 1;// 
             }
          }
       }
    }else //ímpares
    {
       if(r < 5) 
       {
          vetimpar1[r] = vetnum[i];
          r = r + 1; 
       }else{
          if(s < 5) 
          {
             vetimpar2[s] = vetnum[i];
             s = s + 1; 
          } else{
             if(t < 5) 
             {            
                vetimpar3[t] = vetnum[i];
                t = t + 1;
             }else{
                 vetimpar4[u] = vetnum[i];
                 u = u + 1; 
             }
          }
       }    
    }
 }
 
 printf("\n\n\n"); //quebra de linhas
     printf("\n");
    color_full("yellow", "________________________________________  ");
 //escreve o vetor com os números lidos
 printf("Vetor de numeros: \n");
 printf("{"); //chave de início do vetor
 for(i = 0; i < 20; i++)
 {
    printf("%d, ", vetnum[i]); 
 }
 printf("}"); //chave de final do vetor
 printf("\n\n\n"); //quebra de linhas
     printf("\n");
    color_full("green", "________________________________________  ");

 printf("Vetor(es) par(es): \n\n");
 
 //primeiro vetor par ---------------------------------------
 if(k > 0) // verifica se tem o primeiro vetor de pares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < k; i++)
    {
       printf("%d, ",vpar1[i]);
    }
    printf("}"); //chave de final do vetor
 }
 printf("\n\n"); //quebras de linhas
 
  //segundo vetor par ---------------------------------------
 if(l > 0) // verifica se tem o segundo vetor de pares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < l;i++)
    {
       printf("%d, ",par2[i]);
    }
    printf("}"); //chave de final do vetor
 }
 printf("\n\n"); //quebra de linhas
 
 //terceiro vetor par ---------------------------------------
 if(m > 0) // verifica se tem o terceiro vetor de pares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < m; i++)
    {
       printf("%d, ",par3[i]);
    }
    printf("}"); //chave de final do vetor
 }
 printf("\n\n"); //quebra de linhas
 
 //quarto e último vetor par ---------------------------------
 if(n > 0) //verifica se tem o último vetor de pares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < n; i++)
    {
       printf("%d, ",par4[i]);
    }
    printf("}"); //chave de final do vetor
 }
 printf("\n\n"); //quebra de linhas
 
     printf("\n");
    color_full("red", "________________________________________  ");
 printf("Vetor(es) impar(es): \n\n");
 
 //primeiro vetor ímpar --------------------------------------
 if(r > 0) //verifica se tem o primeiro vetor de ímpares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < r; i++)
    {
       printf("%d, ",vetimpar1[i]);
    }
    printf("}"); //chave de final do vetor
 }
 printf("\n\n"); //quebra de linhas
 
  //segundo vetor ímpar --------------------------------------
 if(s > 0) //verifica se tem o segundo vetor de ímpares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < s; i++)
    {
       printf("%d, ",vetimpar2[i]);
    }
    printf("}");//chave de final do vetor
 }
 printf("\n\n"); //quebra de linhas
 
 //terceiro vetor ímpar --------------------------------------
 if(t > 0) // verifica se tem o terceiro vetor de ímpares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < t; i++)
    {
       printf("%d, ",vetimpar3[i]);
    }
    printf("}"); //chave de final do vetor
 }
 printf("\n\n"); //quebra de linhas
 
 //quarto e último vetor ímpar --------------------------------
 if(u > 0) //verifica se tem o último vetor de ímpares
 {
    printf("{"); //chave de início do vetor
    for(i = 0; i < u; i++)
    {
       printf("%d, ",vetimpar4[i]);
    }
    printf("}"); //chave de final do vetor
 }
 printf("\n\n"); //quebra de linhas
 
 //-----------------------------------------------------------
 
 getchar(); //consome o último ENTER
 getchar(); //parar a tela
}
