#include <stdio.h>

/*calcolare il fattoriale di un numero n, ad esempio
per n=5 avremo n!= 5*4*3*2*1 = 120*/

void main () {
    int temp = 1;
    int input;

    printf("Inserisci un numero per calcolare il fattoriale: ");
    scanf("%d", &input);

    if (input < 0) {
        printf("Impossibile calcolare il fattoriale di un numero negativo\n");
    } else if (input == 0 || input == 1) {
        printf("1");
    } else {
        for (int i = 2; i <= input; i++) {
            temp *= i;
        }
        printf("Il fattoriale è: %d\n", temp);
    }

}