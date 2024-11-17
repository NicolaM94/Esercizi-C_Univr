#include <stdio.h>

/*Scrivere un programma che ricevuto in ingresso
un numero intero positivo (correggere
l’eventuale input sbagliato) stampa a video tutti
i suoi divisori.*/

// Soluzione con il ciclo for

void main () {

    int input;
    
    printf("Inserisci un numero per ottenere i suoi divisori: ");
    scanf("%d", &input);

    // Verifico che per i che va da 1 al numero inserito tale i sia un divisore del numero.
    // Se lo è, lo stampo a schermo.
    for (int i = 1; i<= input; i++) {
        if (input%i == 0) {
            printf("%d\n",i);
        }
    }
}