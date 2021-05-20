#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int n, i;
    

	while(scanf("%d", &n) != EOF){
        int array[n];

        for(i = 0; i < n; i = i + 1){
            scanf("%d", &array[i]);
        }

        selectionSort(array, n);

    }
	
	return 0;
}

void selectionSort(int *array, int n){
	int i, j, aux, menor;
	
	for(i=1;i<n;i++){
        int tmp = array[i];
        j = i - 1;
        while((j>=0)&&(array[j]>tmp)){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = tmp;
    }

    printf_array(array, n);
}

void printf_array(int *array, int n){

    int i;

    for(i = 0; i < n; i = i + 1){
        printf("%04d\n", array[i]);
    }

}