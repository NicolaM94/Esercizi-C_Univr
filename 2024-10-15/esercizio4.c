#include <stdio.h>

void main () {
    // Valori dell'utente
    int minsone, secsone;
    int minstwo, secstwo;

    // Valori "sistemati"
    int totalelapsedseconds = 0;
    int totalmins = 0;
    int totalsecs = 0;

    // Richiede i valori in input e verifica l'input
    printf("Inserisci i tempi del primo esperimento (formato '<minuti> <secondi>'): ");
    scanf("%d %d", &minsone, &secsone);
    if (minsone < 0 || secsone < 0) {
        printf("Tempi invalidi (min o sec negativi)\n");
        return;
    }

    printf("Inserisci i tempi del secondo esperimento (formato '<minuti> <secondi>'): ");
    scanf("%d %d", &minstwo, &secstwo);
    if (minstwo < 0 || secstwo < 0) {
        printf("Tempi invalidi (min o sec negativi)\n");
        return;
    }

    // calcola il  totale secondi
    totalelapsedseconds = (minsone + minstwo) * 60 + (secsone + secstwo);
    
    // calcola minuti e secondi aggiustati
    totalmins = totalelapsedseconds / 60;
    totalsecs = totalelapsedseconds - (totalmins * 60);

    printf("Tempo totale: %d:%d\n", totalmins, totalsecs);

}