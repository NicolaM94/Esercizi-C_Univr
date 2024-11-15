#include <stdio.h>

/*Scrivere un programma che dato un numero intero positivo num
inserito da tastiera (correggere eventuali errori in inserimento) e un
array di 5 interi di nome cifre contenente tutti numeri maggiori o
uguali a zero composti da una sola cifra, verificare se tutte le cifre di
num sono presenti nell’array. Ad esempio se num vale 353 e l’array
è int cifre[]= {3, 3,0, 7, 4}, l’array non contiene tutte le cifre di num.*/

void main () {

    int num;
    int cifre [5] = {2,5,1,8,4};
    int ultimacifra;
    int notfound = 0;
    int temp = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    do {
        ultimacifra = num%10;
        num = (num-ultimacifra)/10;

        temp = 0;
        for (int i = 0; i < 5; i++) {
            
            if (cifre[i] == ultimacifra) {
                temp = 1;
            }
        }
        if (temp == 0) {
                notfound = 1;
            }
    } while (num > 0);

    if (notfound == 1) {
        printf("L'array non contiene tutte le cifre di num.\n");
    } else {
        printf("L'array contiene tutte le cifre di num.\n");
    }
}