#include <stdio.h>

/*Scrivere un programma che ricevuto in ingresso un
numeri interi positivi a (se così non è, lo richiede),
visualizza un quadrato di lato a usando il carattere ‘X’
sulla diagonale principale e il carattere ’*’ altrove.*/

void main () {

    int lato;

    printf("Inserisci il lato del quadrato da stampare: ");
    scanf("%d", &lato);

    for (int i = 0; i < lato; i++) {
        for (int j = 0; j < lato; j++) {
            if (j==i) {
                printf("X");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}