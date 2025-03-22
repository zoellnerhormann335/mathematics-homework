#include <stdio.h>

void main() {
    int i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error! n should be greater than zero.\n");
    } else {
        for (i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                printf("* ");
            }
        }
    }

    printf("\n");
}
