#include <stdio.h>

/*Leggere un numero naturale n e scrivere in
output un numero n di ‘+’.(Ad esempio se leggo 5
l’output sarà: +++++ )*/

void main () {

    int input;

    printf("Inserisci un numero: ");
    scanf("%d", &input);

    if (input <= 0) {
        printf("Inserisci un numero naturale pls");
    } else {
        for (int i = 0; i < input; i++) {
        printf("+");
        }
    }
    printf("\n");
}