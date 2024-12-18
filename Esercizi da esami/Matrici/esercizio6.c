/*
Scrivere un programma C che chiede all’utente un numero intero n. Il
programma inizializza il contenuto della matrice seguendo il seguente
schema:
n n+1 n+2 n+3 n+4
n+1 n+1 n+2 n+3 n+4
n+2 n+2 n+2 n+3 n+4
n+3 n+3 n+3 n+3 n+4
n+4 n+4 n+4 n+4 n+4
Per esempio se n=5, il programma popolerà come segue:
5 6 7 8 9
6 6 7 8 9
7 7 7 8 9
8 8 8 8 9
9 9 9 9 9
*/

#include <stdio.h>

void main () {

    int n;
    int matrix [5][5];

    scanf("%d", &n);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            /*
            Gli elementi sulla diagonale sono tutti pari a n+i
            Quindi quelli prima dell'elemento sulla diagonale della riga considerata sono tutti pari a n+i,
            mentre queli dopo sono pari a n+j.
            Prima della diagonale i > j, quindi questa è la condizione da verificare
            */
            
            if (i > j) {
                matrix[i][j] = n+i;
            } else {
                matrix[i][j] = n+j;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


}