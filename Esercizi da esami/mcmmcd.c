#include <stdio.h>

/*Scrivere un programma che calcoli il massimo comun
divisore e il minimo comune multiplo di due numeri inseriti
dall’utente. Entrambi i numeri inseriti devono essere
maggiori di zero.*/

void main () {

    int a,b;
    int mcm, mcd;
    int max, min;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("I numeri non sono validi\n");
    } else {

        // Trovo min e max tra i due
        if (a > b) {
            max = a;
            min = b;
        } else {
            max = b;
            min = a;
        }

        // Calcolo del mcm
        mcm = max;
        while (mcm%a != 0 || mcm%b != 0) {
            mcm++;
        }

        // Calcolo del mcd
        mcd = min;
        while (a%mcd != 0 || b%mcd != 0) {
            mcd--;
        }

        printf("Il mcd è %d.\n", mcd);
        printf("Il mcm è %d.\n", mcm);
    }


}