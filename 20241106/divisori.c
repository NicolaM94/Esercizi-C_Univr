#include <stdio.h>

/*Scrivere un programma che ricevuto in ingresso
un numero intero positivo (correggere
l’eventuale input sbagliato) stampa a video tutti
i suoi divisori.*/

void main () {

    int numero;

    printf("Inserisci un numero per ottenere i suoi divisori: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Il numero non è valido.");
    } else {
        for (int i = 1;i<=numero;i++) {
            if (numero%i==0) {
                printf("%d\n", i);
            }
            
        }
    }
}