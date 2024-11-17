#include <stdio.h>

/*Scrivere un programma che ricevuto in ingresso
un numero intero positivo (correggere
l’eventuale input sbagliato) stampa a video tutti
i suoi divisori.*/

// Soluzione con il ciclo while
void main () {

    int counter = 1;
    int input;

    printf("Inserisci un numero per ottenere i suoi divisori: ");
    scanf("%d", &input);

    if (input <= 0) {
        printf("Per favore inserisci un numero positivo.\n");
    } else {
        while (counter <= input) {
            if (input%counter == 0) {
                printf("%d\n", counter);
            }
            counter++;
        }
    }
}