#include <stdio.h>

/*Scrivere un programma che ricevuto in ingresso
due numeri interi positivi a e b (se così non è, li
richiede), visualizza un rettangolo di dimensione
a*b usando il carattere ‘*’ sui bordi e il carattere ‘X’
all’interno.*/

void main () {

    int b, h;

    printf("Inserisci base e altezza: ");
    scanf("%d %d", &b, &h);

    for (int i = 0; i < h; i++) {

        if (i == 0 || i == h-1) {
            for (int j = 0; j < b; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 1; j < b-1; j++) {
                printf("X");
            }
            printf("*");
        }
        printf("\n");
    }


}