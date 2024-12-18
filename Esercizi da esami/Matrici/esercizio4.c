#include <stdio.h>

/*Scrivere un programma che chiede all’utente di inserire da
tastiera una matrice 3X3 con soli valori maggiori o uguali a
zero.

Il programma, dopo aver stampato la matrice a video,
verifica se la matrice è pari o meno e stampa un opportuno
messaggio a video.

Una matrice si dice pari se è composta di soli valori
pari.

Ad esempio, se l’utente inserisce la seguente matrice
4 0 2
4 4 6
6 4 8

L’output sarà del tipo: Matrice pari? 1*/

void main () {

    int matrice [3][3];
    int tempInput;
    int pari = 1;

    // Popolo la matrice
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            do {
                scanf("%d", &tempInput);
            } while (tempInput < 0);
            matrice[i][j] = tempInput;
            
            // Contemporaneamente, tengo traccia della parità dell'elemento inserito
            // Se è dispari, cambio la var. 'pari' in 0
            if (matrice[i][j]%2==1) {
                pari = 0;
            }
        }
    }

    // Stampo la matrice
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrice[i][j] );
        }
        printf("\n");
    }
    // Stampo se è pari o meno
    printf("Matrice pari? %d\n", pari);
}