#include <stdio.h>
#include "./funcs/fibit.c"
#include "./funcs/fibrec.c"

void main () {
    
    for (int c = 0; c <= 20; c++) {
        printf("Fibonacci iterativo %d: %d\n", c, FibonacciIterativo(c));
    }
    for (int c = 0; c <= 10; c++) {
        printf("Fibonacci ricorsivo %d: %d\n", c, FibonacciRicorsivo(c));
    }
}