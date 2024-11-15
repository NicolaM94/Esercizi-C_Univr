#include <stdio.h>

/*Scrivere un programma in C che acquisisce i punteggi ottenuti da uno
studente nelle due prove dell'esame di informatica e valuta se lo
studente è stato promosso o bocciato visualizzando un apposito
messaggio.*/
void main () {

    int so,st;

    printf("Inserisci i voti delle due prove: ");
    scanf("%d %d", &so, &st);

    if (so >= 0 && so <= 30 && st >= 0 && st <= 30) {
        if (so >= 18 && st >= 18) {
            printf("Promosso con %f\n", (float)(so+st)/2);
        } else {
            printf("Bocciato\n");
        }
    } else {
        printf("Errore\n");
    }



}