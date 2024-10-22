#include <stdio.h>

// Calcola fibonacci ricorsivamente
int fibonacciRec (int pos) {
    if (pos <= 2) {
        return 1;
    }
    return fibonacciRec(pos-1) + fibonacciRec(pos-2);
}

void main () {
    int fib = fibonacciRec(1000);
    printf("Risultato: %d\n",fib);
}