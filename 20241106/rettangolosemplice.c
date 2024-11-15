#include <stdio.h>

/*Scrivere un programma che ricevuto in ingresso
due numeri interi positivi a e b (se così non è, li
richiede), visualizza un rettangolo di dimensione
a*b usando il carattere '*’.*/

void main () {

    int lon, len;

    printf("Inserisci lunghezza e larghezza del rettangolo: ");
    scanf("%d %d", &lon, &len);

    if (lon <= 0 || len <= 0) {
        printf("Uno dei numeri non è positivo");
    } else {
        for (int i = 0; i < lon; i++) {
            for (int j = 0; j < len; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

}