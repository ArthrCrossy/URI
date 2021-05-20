#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

int main(){

    int n, i, j, l, tam, tam_div_2;
    char palavra[100];
    char aux;

    scanf("%d", &n);

    for(l = 0; l < n; l++){

         scanf(" %[^\n]", palavra);

        tam = strlen(palavra);
        tam_div_2 = tam/2;

        for(i = 0; i < tam; ++i){
            if((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <='z')){
                palavra[i] = palavra[i] + 3;
            }
        }


        for(i = 0, j = tam-1; i < tam_div_2; i++, j--){
    
            aux = palavra[j];
            palavra[j] = palavra[i];
            palavra[i] = aux;

        }


        for(i = tam_div_2; i < tam; i++){

            if((palavra[i] >= 32 && palavra[i] <= 176)){
                palavra[i] = palavra[i] - 1;
            }

        }  


        printf("%s\n", palavra);

        memset(palavra, 0, sizeof(palavra));

    }


    return 0;
}