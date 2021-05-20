#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct feira{

    char nome[50];
    double preco;

}feira;

int main(){

    feira feirinha[1000];
    int n, l, i, cont_2, qnt, l2, cont;
    double total = 0;
    char alimento[80];

    scanf("%d", &n);

    while(n--){

        scanf("%d", &cont);

        for(i = 0; i < cont; i++){
            scanf("%s %lf", feirinha[i].nome, &feirinha[i].preco);
        }

        scanf("%d", &cont_2);

        for(i = 0; i < cont_2; i++){

            scanf("%s %d", alimento, &qnt);

            for(l2 = 0; l2 < cont; l2++){

                if((strcmp(feirinha[l2].nome, alimento ) == 0)){

                    total = (feirinha[l2].preco * qnt) + total; 
                    

                }
                 
            }
                
        }

        printf("R$ %.2lf\n", total);
        total = 0;

       
    }    

    return 0;
}