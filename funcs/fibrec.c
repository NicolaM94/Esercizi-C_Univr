/*Calcola il valore della serie fibonacci alla posizione pos*/
int FibonacciRicorsivo (int pos) {
    if (pos <= 1) {
        return 1;
    }
    return FibonacciRicorsivo(pos-1) + FibonacciRicorsivo(pos-2);
}
