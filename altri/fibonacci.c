#include <stdio.h>

/*Calcolo un elemento della sequenza di fibonacci*/
void main () {
    int pos;
    int a = 1;
    int b = 1;
    int temp = 0;

    printf("Inserisci la posizione di fib da calcolare: ");
    scanf("%d", &pos);

    if (pos <= 2) {
        printf("Fibonacci vale 1\n");
    } else {
        for (int c = 3; c <= pos; c++) {
            temp = b;
            b = a + b;
            a = temp;
        }
        printf("Fibonacci vale %d\n",b);
    }
}