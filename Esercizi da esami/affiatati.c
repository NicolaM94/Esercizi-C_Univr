#include <stdio.h>

/*Scrivere un programma che, chiesti all'utente due
numeri interi positivi a e b comunica all'utente se
si tratta di una coppia di numeri affiatati oppure no.
Definiamo due numeri affiatati se sono diversi tra
loro e la loro somma è pari al prodotto delle cifre che
li compongono. Ad esempio (14, 34) e (63, 81) sono
coppie di numeri affiatati perché
14 + 34 = 1 x 4 x 3 x 4 = 48
63 + 81 = 6 x 3 x 8 x 1 = 144*/

void main () {

    int a, b;
    int sum = 0;
    int prod = 1;

    printf("Inserisci due numeri positivi per sapere se sono affiatati o meno: ");
    scanf("%d %d", &a, &b);

    // Verifica che i due numeri siano positivi
    if (a <= 0 || b <= 0) {
        printf("Numeri non validi.\n");
    } 
    
    // Se i due numeri sono uguali, non possono essere affiatati
    else if (a == b) {
        printf("I numeri non sono affiatati.\n");
    } 
    
    else {

        // Sommo a e b
        sum = a + b;

        // Calcolo il prodotto delle cifre di a e b
        while (a > 0) {
            prod *= a%10;
            a = a/10;
        }
        while (b > 0) {
            prod *= b%10;
            b = b/10;
        }

        // Verifico che la somma e il prodotto siano auguali
        if (sum == prod) {
            printf("I due sono numeri affiatati.\n");
        } else {
            printf("I due non sono numeri affiatati.\n");
        }
    }
}