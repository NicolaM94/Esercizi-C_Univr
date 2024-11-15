#include <stdio.h>

/*Scrivere un programma in C che chiede all’utente un carattere dell’alfabeto minuscolo. Il programma
calcola e visualizza il corrispondente carattere maiuscolo.*/

void main () {

    char input;
    
    // Raccolgo l'input
    printf("Inserisci un carattere da trasformare in maiuscolo: ");
    scanf("%c", &input);

    // I char sono tipi di interi mappati alle tabelle ASCII. Ad ogni intero (8 bit) corrisponde un certo carattere ASCII.
    // Dalle tabelle ASCII si vede che il carattere A = 65 e a = 97. La differenza è 32, quindi sottraendo 32 ottengo il carattere maiuscolo.
    printf("%c\n", input-32);

}