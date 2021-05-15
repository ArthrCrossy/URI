#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int mdc(int a, int b);

int main(){

    int num, den, n1, n2, d1, d2, div, n;
    char op;
        
        

        scanf("%d", &n);

        while(n>0){

        scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

        if(op == '+'){
            num = (n1*d2 + n2*d1);
            den = (d1*d2);
        }
        else if(op == '-'){
			num = (n1*d2 - n2*d1);
			den = (d1*d2);
		}

		else if(op == '*'){
			num = (n1*n2);
			den = (d1*d2);
		}

		else if(op == '/'){
			num = (n1*d2);
			den = (n2*d1);
		}


        div = mdc(num, den);

        printf("%d/%d = %d/%d\n", num, den, num/div, den/div);

        n = n - 1;

        }

    }



    int mdc(int a, int b)
{
	if(a<0){
		a = -a;
    }
	if(b<0){
		b = -b;
    }
	if(a%b == 0){
		return b;
    }
	else{
		return mdc(b,a%b);
    }
}