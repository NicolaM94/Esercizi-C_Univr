#include <stdio.h>

/*crivere un programma in C che chiede all’utente due numeri interi. Il programma calcola e visualizza
la media dei valori acquisti. Si noti che la media è un valore reale.*/

void main () {
    int n,m;
    float avg;

    // Raccolgo i due input come int
    printf("Inserisci due numeri (formato <n> <m>): ");
    scanf("%d %d", &n,&m);

    // Uso il type casting perchè altrimenti (int + int)/int mi darebbe int
    avg = (float)(n+m)/2;
    printf("La media è %f\n", avg);
}