#include <stdio.h>

/*Scrivere un programma che chiede all'utente due caratteri e verifica se sono uno il
successivo dell'altro (ad esempio i caratteri 'a' e 'b' sono uno il successivo dell'altro)*/
void main () {

    char first,second;

    printf("Inserisci due caratteri: ");
    scanf("%c%c", &first, &second);

    // Vedi tabelle ASCII
    if (second == first+1 || first == second+1) {
        printf("I due numeri caratteri sono in sequenza\n");
    } else {
        printf("I due numeri caratteri non sono in sequenza\n");
    }
}