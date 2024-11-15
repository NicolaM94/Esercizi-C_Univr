#include <stdio.h>

/*Scrivere un programma in C che chiede all’utente due valori interi positivi o nulli che rappresentano
in termini di minuti e secondi la durata di un esperimento. Siccome l’utente potrebbe aver inserito
erroneamente questi dati, in particolare specificando un valore di secondi maggiore o uguale a 60, il
programma deve “risistemare” i due valori, calcolando il numero di minuti e secondi effettivi della
durata dell’esperimento, e visualizzare il risultato. Per esempio se l’utente inserisce i valori 2 e 80, il
programma calcolerà che l’esperimento è durato 3 minuti e 20 secondi.*/
void main () {
    // Valori inseriti dall'utente
    int userminutes;
    int userseconds;

    // Valori "aggiustati"
    int adjminutes;
    int adjseconds;

    printf("Inserisci minuti e secondi dell'esperimento (formato '<minuti> <secondi>')");
    scanf("%d %d", &userminutes, &userseconds);

    if (userminutes < 0 || userseconds < 0) {
        printf("Errore: minuti o secondi negativi");
    } else if (userseconds >= 60) {
        adjminutes = userseconds / 60;
        adjseconds = userseconds - (adjminutes * 60);
    }

    printf("Tempo trascorso dell'esperimento: %d:%d", adjminutes+userminutes, adjseconds);
}