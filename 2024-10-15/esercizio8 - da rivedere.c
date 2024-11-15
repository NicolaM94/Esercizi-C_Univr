#include <stdio.h>

void main () {
    char car;
    // Questo non capisco come togliere il newline dallo scan.
    // E' come se facesse lo scan di "a\n"
    while (1) {
        printf("Inserisci un carattere: \n");
        scanf("%c", &car);
        printf("Eccolo qua: %c\n", car);
    }
}