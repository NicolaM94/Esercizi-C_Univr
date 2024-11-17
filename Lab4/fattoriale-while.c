#include <stdio.h>

/*calcolare il fattoriale di un numero n, ad esempio
per n=5 avremo n!= 5*4*3*2*1 = 120*/

// Soluzione con il ciclo while

void main () {

    int input;
    int result=1;
    int counter= 1;

    printf("Inserisci un numero per ottenere il fattoriale: ");
    scanf("%d", &input);

    if (input < 0) {
        printf("Impossibile calcolare il fattoriale di un numero negativo.\n");
    } else if (input == 0 || input == 1) {
        printf("1");
    } else {

        while (counter <= input) {
            result *= counter;
            counter++;
        }
        printf("Il fattoriale è: %d", result);
    }

}