#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main ()
{
  char digito, valor[200];
  int n, i, j;

  scanf("%c", &digito);
  scanf("%s", valor);

while(digito != '0'){

    n = strlen(valor);

    for(i = 0; i < n; i = i + 1){

        printf("%c\n", valor[i]);

    }


    scanf("%c", &digito);
    scanf("%s", valor);
    
}

    printf("resp eh: %d\n\n", n);

  return 0;
}