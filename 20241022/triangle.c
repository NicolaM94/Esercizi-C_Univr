#include <stdio.h>

/*Si scriva un programma, in linguaggio C, che legga da input le lunghezze dei lati
di un triangolo e determini se il triangolo è equilatero, isoscele o scaleno*/
void main () {

    float a,b,c;

    printf("Inserisci i lati del triangolo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("Il triangolo è equilatero\n");
    } else if (a == b || b == c || a == c) {
        printf("Il triangolo è isoscele\n");
    } else {
        printf("Il triangolo è scaleno\n");
    }
}