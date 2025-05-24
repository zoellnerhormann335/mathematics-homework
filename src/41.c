#include <stdio.h>

void main() {
    int i, n;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (i = 1; i <= n / 2; ++i)
            if (i != n - i)
                printf("%d ", i);
    } else
        printf("The given number is odd.\n");
}
