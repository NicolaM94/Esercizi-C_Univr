#include <stdio.h>

/*Scrivere un programma che data una sequenza
di numeri positivi che termina con -1 (sentinella,
non fa parte della sequenza) stampa a video la
media dei valori e quanti numeri sono stati
inseriti (sentinella esclusa).*/

void main () {

    int somma = 0;
    int counter = 0;
    int input;

    while (input >= 0) {
        scanf("%d", &input);
        if (input >= 0) {
            somma += input;
            counter ++;
        }
    }

    printf("La media è pari a: %.2f\n", (float)(somma)/counter);

}