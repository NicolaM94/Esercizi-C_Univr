#include <stdio.h>

void main () {
    int a,b,c;

    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b > c) {
        printf("%d è il maggiore\n", a);
    } else if (b > a && b > c) {
        printf("%d è il maggiore\n", b);
    } else if (c > a && c > b) {
        printf("%d è il maggiore\n", c);
    } else {
        printf("I tre numeri sono uguali\n");
    }
}