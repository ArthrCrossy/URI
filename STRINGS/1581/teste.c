#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main ()
{


	unsigned short casos, numPessoas;
	char atual[21], anterior[21];
	bool ingles;

	scanf("%hu", &casos);

	while (casos--)
	{

		scanf("%hu", &numPessoas);

		scanf(" %s", atual);

		//numPessoas--;
		ingles = false;
		strcpy(anterior, atual);
		while (--numPessoas)
		{

			if (strcmp(atual, anterior) != 0 && ingles == false)
				ingles = true;
			else
				strcpy(anterior, atual);

			scanf(" %s", atual);

		}

		if (ingles)
			printf("ingles\n");
		else
			printf("%s\n", atual);

		ingles = false;

	}

}

/*

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int cont = 0, cont_2 = 0;
    char palavra_1[300], palavra_2[300];
    bool resp;

    scanf("%d", &cont);
    

    while(--cont){
        printf("%d\n", cont);


        scanf("%d", &cont_2);

        scanf("%s", palavra_1);

        resp = false;

        cont_2 = cont_2 - 1;

        

        strcpy(palavra_2, palavra_1);


        while(--cont_2){
            

            if(strcmp(palavra_1, palavra_2) != 0 && resp == false){
                resp = true;
            }else{
                strcpy(palavra_2, palavra_1);
            }

            
             scanf("%s", palavra_1);    

        }
        
        if(resp == true){
            printf("ingles\n");
        }else{
            printf("%s\n", palavra_1);
        }

        resp = false;
    }

    

    return 0;
}*/