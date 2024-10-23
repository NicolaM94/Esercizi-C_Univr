int FibonacciIterativo (int pos) {
    int a = 1;
    int b = 1;
    int temp = 0;

    if (pos <= 1) {
        return 1;
    }

    for (int c = 2; c <= pos; c++) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}