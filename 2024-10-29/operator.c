#include <stdio.h>

/*Scrivere un programma C che chiede all’utente
due numeri interi n1 e n2 e un carattere op
(appartenente all’insieme {‘+’,’-’,’*’,’/’}). Il
programma calcola e stampa a video il risultato
dell’operazione corrispondente a op applicata ai
numeri n1 e n2.*/

void main () {

    int a,b;
    char op;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);

    printf("Inserisci l'operatore: ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("La somma è: %d.\n", a+b);
    } else if (op == '-') {
        printf("La differenza è: %d.\n",a-b);
    } else if (op == '*') {
        printf("Il prodotto è: %d.\n", a*b);
    } else if (op == '/') {
        printf("Il rapporto è pari a: %f\n", (float)(a)/(float)(b));
    } else {
        printf("Operatore non riconosciuto.\n");
    }

}