#include <stdio.h>

/*Scrivere un programma che acquisisca un indice X
tra 0 e 9 (controllare validità del valore inserito) e
una sequenza di 10 numeri interi. Il programma
dovrà stampare la somma dei numeri in posizioni
minori di X e il prodotto dei numeri in posizioni
successive a X.*/

void main () {

    int index;
    int sequence [10];
    int tempsum = 0;
    int temprod = 1; 


    printf("Inserisci un indice da 0 a 9: ");
    scanf("%d", &index);

    printf("Inserisci 10 numeri: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %d", &sequence[i]);
    }

    if (index < 0 || index > 9) {
        printf("L'indice inserito non è valido\n");
    } else {
        for (int i = 0; i < 10; i++) {
            if (i < index) {
                tempsum += sequence[i];
            } else if (i > index) {
                temprod *= sequence[i];
            } 
        }
    }

    printf("La somma dei numeri della sequenza da 0 a %d è pari a %d: \n", index, tempsum);
    printf("Il prodotto dei numeri della sequenza da %d a 10 è pari a %d: \n", index, temprod);

}