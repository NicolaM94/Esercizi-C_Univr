#include <stdio.h>

void main () {

    int matrice [3][3];
    int array [9];
    int contains = 1;
    int counter = 0;
    int solution = 1;
    int found;

    // Popolo la matrice
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrice[i][j]);
            array[counter] = matrice[i][j];
            counter++;
        }
    }

    // Uso un contatore per tenere traccia dell'elemento massimo possibile nella matrice
    counter = 8;
    while (counter >= 0) {
        found = 0;
        for (int c = 0; c < 9; c++) {
            if (array[c] == counter) {
                found = 1;
            }
        }
        // Se non ho trovato l'elemento nell'array, pongo la soluzione a 0
        if (found == 0) {
            solution = 0;
        }
        counter--;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    printf("\n%d\n", solution);
    
    




}