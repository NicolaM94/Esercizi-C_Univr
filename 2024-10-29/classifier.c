#include <stdio.h>

/*Scrivere un programma C che classifica un
carattere immesso da tastiera come: alfabetico (a-
z oppure A-Z), cifra (0-9), speciale (tutti gli altri).*/
void main () {
    
    char input;

    printf("Inserisci un carattere: ");
    scanf("%c", &input);

    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        printf("Hai inserito una lettera.\n");
    } else if ( input >= '0' && input <= '9') {
        printf("Hai inserito un numero.\n");
    } else {
        printf("Hai inserito un carattere speciale.\n");
    }
}