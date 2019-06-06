# include <stdio.h>
# include <stdlib.h>
#include <string.h>

void main()
{
   char string[10];
   int tamanho;

   printf ("Digite uma string:\n");
   gets (string);

   tamanho = strlen(string);

   printf("Quantidade de letras: %d",tamanho);
   printf("\n");


}
