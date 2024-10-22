#include <stdio.h>

/*Scrivere un programma in C che acquisito un numero intero visualizza
il messaggio "positivo", "negativo" o "nullo" in base al valore.*/
void main () {

    int a;

    printf("Inserisci un numero: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("Il numero è positivo\n.");
    } else if (a < 0) {
        printf("Il numero è negativo.\n");
    } else {
        printf("Il numero è nullo.\n");
    }
}