#include <stdio.h>

/*Scrivere un programma in C che richiede
all’utente di inserire i coefficienti a, b, c di un
polinomio di secondo grado ax2 + bx + c = 0. Se a è
pari a zero, il programma informa che il polinomio
è di grado inferiore al secondo. In caso contrario, il
programma calcola il determinante (det)
dell’equazione di secondo grado e informa l’utente
se le soluzioni sono reali e distinte (det>0),
coincidenti (det=0) o complesse coniugate (det<0).*/
void main () {

    float a, b, c;
    float det;

    printf("Inserisci i tre coefficienti: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("L'equazione non è di secondo grado.\n");
    } else {
        det = b*b-4*a*c;
        if (det > 0) {
            printf("Due soluzioni reali distinte.\n");
        } else if (det == 0) {
            printf("Una soluzione reale.\n");
        } else {
            printf("Soluzioni nel campo complesso.\n");
        }
    }
}