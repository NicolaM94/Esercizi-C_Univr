#include <stdio.h>

/*Scrivere un programma in C che conta quanti soldi ha nel portafogli l'utente. In particolare,
l'algoritmo chiede all'utente il numero di banconote da 50, da 20, da 10 e da 5 euro, calcola la
somma complessiva e la visualizza.*/

void main () {

    int cinquanta;
    int venti;
    int dieci;
    int cinque;

    int total;

    printf("Inserisci il numero di banconote da € 50: ");
    scanf("%d", &cinquanta);

    printf("Inserisci il numero di banconote da € 20: ");
    scanf("%d", &venti);

    printf("Inserisci il numero di banconote da € 10: ");
    scanf("%d", &dieci);

    printf("Inserisci il numero di banconote da € 5: ");
    scanf("%d", &cinque);

    total = cinquanta * 50 + venti * 20 + dieci * 10 + cinque * 5;
    printf("Il totale a tua disposizione è: € %d", total);
}