#include <stdio.h>

int InArray (int array [] , int test) {
    for (int i = 0; i < sizeof(array); i++) {
        if (array[i] == test) {
            return 1;
        }
    }
    return 0;
}


void main () {
    
    int arr [] = {1,2,3,4,5};
    int tested = 9;
 
    printf("%d\n", InArray(arr, tested));
}