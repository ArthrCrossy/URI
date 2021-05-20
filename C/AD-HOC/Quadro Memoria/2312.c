
#include <stdio.h>
#include <string.h>

typedef struct{

	char pais[20];
	int ouro, prata, bronze;

} medalhas;

void preencheQuadro(medalhas vet[], int tam);
void ordenaOuro(medalhas vet[], int tam);
void ordenaAlpha(medalhas vet[], int tam);
void ordenaPrata(medalhas vet[], int tam);
void ordenaBronze(medalhas vet[], int tam);
void printa(medalhas vet[], int tam);

int main ()
{

	int n;

	scanf("%d", &n);

	
	medalhas paisMedalhas[n + 1];

	preencheQuadro(paisMedalhas, n);

	
	ordenaBronze(paisMedalhas, n);
	ordenaPrata(paisMedalhas, n);
	ordenaOuro(paisMedalhas, n);

	printa(paisMedalhas, n);

}

void preencheQuadro(medalhas vet[], int tam)
{

	int i;

	for (i = 0; i < tam; i++){
		scanf(" %s %d %d %d", vet[i].pais, &vet[i].ouro, &vet[i].prata, &vet[i].bronze);
    }

}

void ordenaOuro(medalhas vet[], int tam)
{

	int i = 1, j;
	medalhas pivo;
    
    for(i=1;i<tam;i++){
          pivo = vet[i];
        j = i - 1;
        while((j>=0)&&(vet[j].ouro < pivo.ouro)){
            vet[j+1] = vet[j];
            j = j - 1;
        }
        vet[j+1] = pivo;
    }

}

void printa(medalhas vet[], int tam)
{

	int i;

	for (i = 0; i < tam; i++){
		printf("%s %d %d %d\n", vet[i].pais, vet[i].ouro, vet[i].prata, vet[i].bronze);
    }
}

void ordenaBronze(medalhas vet[], int tam)
{

	int i = 1, j;
	medalhas pivo;
    

    for(i=1;i<tam;i++){
          pivo = vet[i];
        j = i - 1;
        while((j>=0)&&(vet[j].bronze < pivo.bronze)){
            vet[j+1] = vet[j];
            j = j - 1;
        }
        vet[j+1] = pivo;
    }

}

void ordenaPrata(medalhas vet[], int tam)
{

	int i = 1, j;
	medalhas pivo;

   for(i=1;i<tam;i++){
          pivo = vet[i];
        j = i - 1;
        while((j>=0)&&(vet[j].prata < pivo.prata)){
            vet[j+1] = vet[j];
            j = j - 1;
        }
        vet[j+1] = pivo;
    }

}
