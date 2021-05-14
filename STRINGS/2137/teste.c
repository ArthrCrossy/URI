#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int n, i;
	
	while(scanf("%d", &n) != EOF){		
		int vetor[n];
        for(i = 0; i < n; i++)
            scanf("%d", &vetor[i]);			
	    
        selectionSort(vetor, n);

        for(i = 0; i < n; i++)
            printf("%04d\n", vetor[i]);	
	}
	
	return 0;
}

void selectionSort(int *vetor, int n){
	int i, j, aux, menor;
	
	for(i=1;i<n;i++){
        int tmp = vetor[i];
        j = i - 1;
        while((j>=0)&&(vetor[j]>tmp)){
            vetor[j+1] = vetor[j];
            j = j - 1;
        }
        vetor[j+1] = tmp;
    }
}