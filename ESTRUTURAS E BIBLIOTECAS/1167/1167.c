#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

typedef struct pesq{

    char name[50];
    int valor;
    int prev, next;

}pesq;

int main(){

    while(true){

        int n, i = 0, j = 0;
        pesq pesq[30];

        scanf("%d", &n);

        if(n == 0){
            break;
        }

        for(i = 0; i < n; ++i){

            scanf("%s %d", pesq[i].name, &pesq[i].valor);

            pesq[i].prev = ((i - 1) % n + n) % n;
            pesq[i].next = ((i+1)%n); 
        }

        i = 0;

        while(n > 1){
            
            int valor = pesq[i].valor;

            if(valor % 2 == 0){
                for(j = 0; j < valor ; ++j){

                    i = pesq[i].prev;
                }
            }else{
                for(j = 0; j < valor ; ++j){
                     
                    i = pesq[i].next;
                }
            }

            pesq[pesq[i].prev].next = pesq[i].next;
            pesq[pesq[i].next].prev = pesq[i].prev;

            --n;

                }

            i = pesq[i].next;
            printf("Vencedor(a): %s\n", pesq[i].name);

            }

    return 0;
}