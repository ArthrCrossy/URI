 #include <stdio.h>
#include <string.h>

int main (){

    int n; 
    char palavra[10]; 
    int cont = 0;

    scanf ("%d", &n);

    while ( n){
        

        scanf ("%s", palavra);

        if ( strlen (palavra) == 5 ){
            printf ("3\n");

            
        }else{

            if ( palavra[0] == 'o' ){
                ++cont;
            }
            if(palavra[1] == 'n'){
                ++cont;
            }
            if(palavra[2] == 'e'){
                ++cont;
            }

        if ( cont >= 2 ){
            printf ("1\n");      
        }else{
            printf ("2\n");
        }

        }
        
        cont = 0;
        n = n - 1;
    }   

    return 0;
}