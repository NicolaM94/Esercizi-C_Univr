#include <stdio.h>

/*Scrivere un programma C che chiede in ingresso due numeri a e b e verifica se a
è multiplo di b, oppure b è multiplo di a e stampa un opportuno messaggio a video*/
void main () {

    int a,b;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);

    if (a%b==0) {
        printf("%d è multiplo di %d\n", a, b);
    } else if (b%a==0) {
        printf("%d è multiplo di %d\n", b, a);
    } else {
        printf("%d e %d sono primi tra loro\n", a, b);
    }
}