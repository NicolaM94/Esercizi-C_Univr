#include <stdio.h>
#define N 5

void main () {

    int matrice [N][N];
    int maxcol = 0;
    int maxdiff = -1;
    int tempmax;
    int tempmin;
    int tempdiff;


    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <N; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }


    // Attenzione: qua il cursore indica col per riferimento, ma il programma itera sempre per righe...
    for (int col = 0; col < N; col++) {
        // ... infatti qua scegliamo come primo elemento (di default per ogni caso) l'elemento dalla riga 0 e dalla colonna corrispondente.
        // ... Questo è sempre pari a 2, 5, 10, 15, 18
        tempmax = matrice[0][col];
        tempmin = matrice[0][col];

        // Iteriamo per 'righe' verificando se ci sono entrate maggiori o minori di quelle di default
        for (int row = 0; row < N; row++) {
            if (matrice[row][col] > tempmax) {
                tempmax = matrice[row][col];
            }
            if (matrice[row][col] < tempmin) {
                tempmin = matrice[row][col];
            }
        }
        // calcoliamo la differenza della colonna specifica
        tempdiff = tempmax-tempmin;
        // se la differenza è negativa, la rendiamo positiva
        if (tempdiff < 0) {
            tempdiff*=-1;
        }
        // Se è maggiore della differenza massima trovata fino ad ora, la sostituiamo con quella appena calcolata
        // Teniamo anche traccia di quale colonna ha generato la differenza
        // Nota anche 'col+1' perchè la colonna va espressa in linguaggio naturale (l'indice è sempre una posizione indietro perchè parte da 0)
        if (tempdiff > maxdiff) {
            maxdiff = tempdiff;
            maxcol = col+1;
        }
    }


    printf("\n%d", maxcol);


}