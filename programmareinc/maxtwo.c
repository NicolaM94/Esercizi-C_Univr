#include <stdio.h>

void main () {

    int a,b;

    printf("Inserisci il primo numero: \n");
    scanf("%d",&a);

    printf("Inserisci il secondo numero: \n");
    scanf("%d", &b);

    if (a > b) {
        printf("%d è maggiore di %d\n", a, b);
    } else if (a<b) {
        printf("%d è maggiore di %d\n", b, a);
    } else {
        printf("%d e %d sono lo stesso numero", a,b);
    }
}