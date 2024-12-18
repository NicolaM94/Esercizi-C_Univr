/*Scrivere un programma che chiede all’utente di riempire
una matrice quadrata 4x4 di caratteri (qualsiasi valore
char). Il programma individua il carattere che compare
più frequentemente e lo mostra a schermo (si ipotizzi che
sia sempre unico). Inoltre il programma visualizza il
contenuto della matrice, mostrando però un asterisco al
posto dei caratteri uguali a quello individuato.*/

#include <stdio.h>

void main () {

    char matrice [4][4];
    int array [4*4];
    int counter = 0;
    char finalResult; 
    int tempOccs = 0;
    int maxOccs=0; 

    // Popolo la matrice
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf(" %c", &matrice[i][j]);
            array[counter] = matrice[i][j];
            counter++;    
        }
    }

    // Verifico le occorrenze in un array
    for (int c = 0; c < 4*4; c++) {
        printf("Controllo %c\n", array[c]);
        tempOccs = 0;
        for (int d = 0; d < 4*4; d++) {
            if (array[c] == array[d]) {
                tempOccs++;
            }
        }
        printf("Temp occs: %d \n", tempOccs );
        if (tempOccs > maxOccs) {
            finalResult = array[c];
            maxOccs = tempOccs;
        }
    }
    

    printf("Il carattere più frequente è %c (%d volte)\n",finalResult, maxOccs);

    // Ristampo la matrice con gli asterischi
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrice[i][j] == finalResult) {
                printf("* ");
            } else {
                printf("%c ", matrice[i][j]);
            }
        }
        printf("\n");
    }
    
    


}