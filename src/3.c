#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}
