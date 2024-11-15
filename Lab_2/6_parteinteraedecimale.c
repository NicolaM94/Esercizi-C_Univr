#include <stdio.h>

/*Scrivere un programma in C che chiede all’utente una numero in virgola mobile. Il programma
calcola e visualizza su due righe separate la parte intera e quella decimale di tale numero. Per
esempio, nel caso in cui l’utente inserisce il numero 4.14, il programma visualizzerà
4
0.14*/

void main () {

    float input;

    // Richiede input
    printf("Inserisci il numero da stampare su due righe: ");
    scanf("%f", &input);

    // Posso usare il type casting direttamente nella funzione printf come parametro, senza creare una nuova variabile
    // Ottengo la parte intera col type casting, e la parte flottante come differenza
    printf("%d\n",(int)input);
    printf("%f\n",input-(int)input);

}