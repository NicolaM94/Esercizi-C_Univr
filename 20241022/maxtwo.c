#include <stdio.h>

/*Scrivere un programma in C che acquisisce due numeri interi e stampa
a video il maggiore dei due.*/
void main () {

    int a,b;

    printf("Inserisci i due numeri: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Il numero %d è maggiore del numero %d\n", a,b);
    } else if (a < b) {
        printf("Il numero %d è maggiore del numero %d\n", b,a);
    } else {
        printf("I due numeri sono uguali\n");
    }
}