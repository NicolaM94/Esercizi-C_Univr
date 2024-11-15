#include <stdio.h>

/*Verificare se un numero inserito è pari o dispari*/

void main( ){

	int num;

	scanf("%d",&num);
	
    if (num%2==0) {
        printf("Pari\n");
    } else {
        printf("Dispari\n");
    }
}