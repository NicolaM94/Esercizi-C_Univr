#include <stdio.h>

/*Scrivere un programma in C che richiede
all’utente di inserire ore e minuti, calcola l’ora a
San Francisco (9 ore indietro) e a Teheran (+3:30)
e la stampa a video in formato «0-24 h : min». Se a
Teheran è già il giorno successivo o a San
Francisco ancora quello precedente, il programma
corregge l’ora e avvisa l’utente con un opportuno
messaggio a schermo.*/

void main () {

    int h,m;
    int thtime;

    printf("Inserisci l'ora: (formato hh:mm) ");
    scanf("%d:%d",&h,&m);

    // Rimando indietro h di 9 ore
    h = h - 9;
    if (h < 0) {
        h = 24 + h;
    }
    printf("L'ora a San Francisco è: %d:%d\n",h,m);

    //Mando avanti h di 12 ore (9+3)
    h = h + 12;
    if (h > 24) {
        h = h -24;
    }
    // Mando avanti 30 minuti
    // Se m >= 60, aggiungo 1 ora e tolgo 60 dai minuti
    m = m + 30;
    if (m >= 60) {
        h++;
        m = m - 60;
    }
    printf("L'ora a Teheran è: %d:%d\n",h,m);


}