/*Scrivere un programma che data una matrice int A[M]
[M] esegua la sommatoria di tutti gli elementi che si
trovano sopra la diagonale principale.*/
#include <stdio.h>
#define M 3

void main () {
    
    int matrix [M][M] = {
        {1,0,0},
        {2,3,0},
        {5,6,7}
    };
    int somma = 0;

    for (int i = 0; i < M; i++) {
        for (int j = i+1; j < M ; j++) {
            somma += matrix[i][j];
        }
    }

    printf("La somma è pari a: %d\n", somma);

}