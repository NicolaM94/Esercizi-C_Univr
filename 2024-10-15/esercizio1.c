#include <stdio.h>

void main () {

    float r;
    float area;

    printf("Inserisci il raggio del cerchio: ");
    scanf("%f", &r);

    area = r * 2 * 3.1415;

    printf("L'area del tuo cerchio è %f", area);
}