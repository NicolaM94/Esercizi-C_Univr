#include <stdio.h>

/*Scrivere un programma che inverta la posizione
delle cifre di un numero intero inserito dall’utente
(4321 > 1234). Inoltre, il programma avvisa se il
numero inserito è palindromo (si legge allo stesso
modo da sinistra a destra e viceversa, es: 121, 32123,
…).*/

void main () {

    int input;
    // Copia di modifica del numero
    int number;
    // Numero generato dall'inversione
    int newNumber=0;    

    printf("Inserisci un numero: ");
    scanf("%d", &input);
    number = input;

    // Riduciamo number a 0 mentre...
    while (number > 0) {
        // ... aggiungiamo l'ultima cifra di number a newNumber
        newNumber = newNumber*10 + number%10;
        // Togliamo l'ultima cifra da number
        number = number/10;
    }

    printf("Normale: %d\n", input);
    printf("Reversed: %d\n", newNumber);

    if (newNumber == input) {
        printf("Il numero è anche palindromo.\n");
    } else {
        printf("Il numero non è palindromo.\n");
    }



}