#include <stdio.h>
#define D1 5
#define D2 3

/*Si scriva un programma che copi tutti i valori di una
matrice int M[D1][D2] in un array di dimensione D1*D2
eliminando nel processo di copia tutti i duplicati se questi
sono valori negativi (<0)*/

void main () {

    int matrix [D1][D2] = {
        {1,2,3},
        {3,-1,3},
        {3,1,0},
        {-1,-1,6},
        {3,2,1}
    };

    int arrayOut [D1*D2];
    int counter = 0;
    int found = 0;

    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {

            // Se il valore [i][j] è negativo...
            if (matrix[i][j] < 0) {

                // Verifico la presenza nell'array
                found = 0;
                for (int c = 0; c < counter; c++) {
                    if (arrayOut[c] == matrix[i][j]) {
                        found = 1;
                    }
                }
                // Se non è presente, lo copio
                if (found == 0) {
                    arrayOut[counter] = matrix[i][j];
                    counter++;
                }
            } 
            // Se è pari lo copio direttamente
            else {
                arrayOut[counter] = matrix[i][j];
                counter++;
            }
        }
    }

    for (int i = 0; i < counter; i++) {
        printf("%d ", arrayOut[i]);
    }
    printf("\n");



}