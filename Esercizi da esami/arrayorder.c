#include <stdio.h>
#define STOP -1

void main () {

    int sumCheck = 0;
    int len = 0;
    int index = 1;
    int array [5] = {4,3,2,1,STOP};

    // Calcolo lunghezza array;
    for (int i = 0; array[i]!=STOP;i++) {
        len += 1;
    }

    // Se len(array) <= 2 non è per forza in ordine
    if (len <= 2) {
        printf("L'array non è in ordine\n");
    } else {
        do {
            // Se array[i+1] > array[i] aggiungo 1 a sumcheck
            if (array[index] > array[index-1]) {
                sumCheck++;
            } 
            // Se array[i+1] < array[i] tolgo 1 da sumcheck
            else {
                sumCheck--;
            }
            // Proseguo
            index++;
        } while (array[index] != STOP);

        // Se sumcheck == len (positiva) allora l'ordine è crescente
        if (sumCheck == len-1) {
            printf("L'array è in ordine crescente\n");
        } 
        // Se sumcheck == -len (negativa) allora l'ordine è decrescente
        else if (sumCheck == 1-len) {
            printf("L'array è in ordine decrescente\n");
        } 
        // Altrimenti
        else {
            printf("L'array non è in ordine\n");
        }
    }
}