#include <stdio.h>

/*Scrivere un programma in C che chiede all'utente un valore che rappresenta una temperatura in
gradi celsius, converte il valore in gradi Fahrenheit e visualizza il risultato. NOTA: la formula per la
conversione è gradi_F = gradi_C x 1.8 + 32*/

void main () {

    float ctemp;
    float ftemp;

    printf("Inserisci la temperatura (C°): ");
    scanf("%f", &ctemp);

    ftemp = ctemp * 1.8 + 32;
    printf("%f C° sono %f farenheit", ctemp, ftemp);
}