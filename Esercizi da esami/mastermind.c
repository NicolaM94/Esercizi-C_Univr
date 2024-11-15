#include <stdio.h>

/*Scrivere un programma che realizzi il gioco Mastermind. Il
primo giocatore inserisce 4 caratteri che corrispondono alle
iniziali di 4 colori tra (r = rosso; g = giallo; v = verde, b =
blu, n = nero; si assuma che gli utenti inseriscano sempre
una lettera compresa in questo elenco). Il secondo giocatore
ha a disposizione 10 tentativi per indovinare la
combinazione, inserendo a sua volta quattro caratteri ad ogni
tentativo. Dopo ogni tentativo il programma visualizza il
numero di colori corretti in posizione corretta (non vengono
segnalati i colori corretti in posizione sbagliata). Terminati i
tentativi, se il secondo giocatore non è riuscito a indovinare
la sequenza, vengono visualizzati i caratteri corretti.*/

void main () {

    char solution [4];
    char tentativo [4];
    int solved;


    printf("Utente 1 - Inserisci i caratteri nell'ordine di soluzione: ");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &solution[i]);
    }

    // Loop per 10 tentativi
    for (int i = 0; i < 10; i++) {

        printf("Utente 2 - Inserisci i caratteri (tentativi rimasti %d): \n", 10-i);

        for (int t = 0; t < 4; t++) {
            scanf(" %c", &tentativo[t]);
        }

        // Inizializza solved per raccogliere il numero di caratteri indovinati
        solved = 0;

        for (int t = 0; t < 4; t++) {

            // Se il carattere è nella posizione corretta, stampa il carattere e aumenta solved di 1
            if (tentativo[t] == solution[t]) {   
                printf("%c", tentativo[t]);
                solved++;
            } 

            // Altrimenti, stampa un placeholder
            else {
                printf("*");
            }
        }
        printf("\n");

        // Verifica se sono stati indovinati 4 caratteri (ovvero risolto il problema). Se si, interrompe il loop
        if (solved == 4) {
            break;
        }
    }

    // Se il loop è stato interrotto, solved è pari a 4
    if (solved == 4) {
        printf("Congratulazioni!\n");
    }
    // Altrimenti il loop si è concluso e la soluzione non è mai stata trovata
    else {
        printf("Ritenta, sarai più fortunato!\n");
    }
}