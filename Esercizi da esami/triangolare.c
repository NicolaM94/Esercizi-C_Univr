#include <stdio.h>

/*Si definisce triangolare un numero costituito
dalla somma dei primi N numeri interi positivi
per un certo N. Esempio: dato N=4, il numero
triangolare Q è 10 (Q=1+2+3+4). Scrivere un
programma che riceva dall’utente un numero
intero positivo e stampi a video se è o meno
triangolare (ossia se può essere scritto come
somma dei primi N interi consecutivi).*/

//Nota: la funzione sqrt non è disponibile senza importarla. Sarebbe bastato calcolare la radice.

void main () {

    int input;
    int tempsum = 0;
    int counter = 0;
    int sol = 0;

    printf("Inserisci un numero per sapere se è triangolare: ");
    scanf("%d", &input);

    while (tempsum < input) {
        tempsum += counter;
        counter++;
        if (tempsum == input) {
            sol = 1;
        }
    }

    if (sol == 1) {
        printf("Il numero è triangolare\n");
    } else {
        printf("Il numero non è triangolare\n");
    }
    
}