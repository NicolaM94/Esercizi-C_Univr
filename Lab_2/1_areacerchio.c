#include <stdio.h>

/*Scrivere un programma in C che chiede all'utente il raggio di un cerchio. L'algoritmo calcola e
visualizza l'area di tale cerchio.*/

void main () {

    float r;
    float area;

    printf("Inserisci il raggio del cerchio: ");
    scanf("%f", &r);

    area = r * 2 * 3.1415;

    printf("L'area del tuo cerchio è %f", area);
}