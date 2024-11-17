#include <stdio.h>

/*calcolare il fattoriale di un numero n, ad esempio
per n=5 avremo n!= 5*4*3*2*1 = 120*/

void main () {

    int input;
    int result = 1;

    printf("Inserisci un numero per calcolare il fattoriale: ");
    scanf("%d", &input);

    if (input < 0) {
        printf("Impossibile calcolare il fattoriale di un negativo\n");
    } else if (input == 0 || input == 1) {
        printf("1\n");
    } else {
        for (int i = 2; i <= input; i++) {
            result *= i;
        }
        printf("Il fattoriale calcolato è: %d\n", result);
    }
}