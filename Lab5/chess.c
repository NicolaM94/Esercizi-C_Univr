#include <stdio.h>

/*Su una scacchiera 8x8 sono posizionati due pezzi: il Re
bianco e la Regina nera. Si scriva un programma in
linguaggio C che acquisisce le posizioni del Re e della
Regina in termini di coordinate (x,y) assumendo che la
posizione (1,1) sia situata in basso a sinistra rispetto
al giocatore. Il programma controlla prima che le
coordinate inserite siano valide; in particolare
entrambi i pezzi devono trovarsi all’interno della
scacchiera ed inoltre non possono trovarsi nella stessa
posizione. In seguito il programma determina se la
Regina è in posizione tale da poter mangiare il Re e
visualizza un apposito messaggio specificando anche
in che direzione e per quante posizioni deve muoversi
per mangiare. NB: La regina si può muovere in linee
rette verticalmente, orizzontalmente o in diagonale
per il numero di caselle non occupate che trova.*/

void main () {

    int kingx, kingy;
    int queenx, queeny;

    printf("Inserisci le coordinate del re (x,y): ");
    scanf("%d %d", &kingx, &kingy);
    printf("Inserisci la posizione della regina (x,y): ");
    scanf("%d %d", &queenx, &queeny);

    if (kingx > 8 || kingx < 1 || kingy > 8 || kingy < 1) {
        printf("Posizione del re invalida.\n");
    } else if (queenx < 1 || queenx > 8 || queeny < 1 || queeny > 8) {
        printf("Posizione della regina invalida.\n");
    } else if (queenx == kingx && queeny == kingy) {
        printf("Posizione invalida - pezzi sovrapposti.\n");
    } else {
        if (kingx == queenx) {
            printf("Regine muove su asse y di %d posizioni e mangia il re.\n", queeny-kingy);
        } else if (kingy == queeny) {
            printf("Regina muove su asse x di %d posizioni e mangia il re.\n", queenx-kingx);
        } else if (kingx-queenx == kingy-queeny) {
            printf("Regina muove in diagonale di %d posizioni e mangia il re.\n", queenx-kingx);
        } else {
            printf("La regina non può mangiare il re.\n");
        }
    }
}