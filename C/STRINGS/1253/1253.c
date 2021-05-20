#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct palavra{

    char letras[30];
    int number;

}palavra;

void desloca(char word[],int n1,int deslocamento){

    char letra;
    int i, j;

    for(int j = 0; j < n1; ++j){

        if (word[j] - deslocamento < 'A')
      {
        letra = '[' - (deslocamento - (word[j] - 'A'));
        printf("%c", letra);
      }
      else
      {
        letra = word[j] - deslocamento;
        printf("%c", letra);
      }
    }

    printf("\n");
}

int main(){

    int n, i, j;
    palavra letra[30];

    scanf("%d", &n);

    

        for(i = 0; i < n; ++i){

            scanf("%s %d", letra[i].letras, &letra[i].number);

            desloca(letra[i].letras, strlen(letra[i].letras), letra[i].number);
        }

     

    return 0;
}