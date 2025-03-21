#include <stdio.h>

void printPrimeNumbers(int upperLimit) {
    int i;
    
    for(i = 2; i <= upperLimit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}

bool isPrime(int number) {
    if (number <= 1) return false;

    for(int divisor = 2; divisor * divisor <= number; divisor++) {
        if (number % divisor == 0) return false;
    }

    return true;
}
