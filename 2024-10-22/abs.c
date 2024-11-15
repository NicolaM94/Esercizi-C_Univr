#include <stdio.h>

/*Scrivere un programma in C chiede all'utente un numero intero e ne
visualizza il suo valore assoluto.*/
void main () {
    int a;

    printf("Inserisci il numero: ");
    scanf("%d", &a);

    // Scambia il segno quando a è negativo
    if (a < 0) {
        a = a*(-1);
    }
    printf("Valore assoluto: %d\n", a);
}