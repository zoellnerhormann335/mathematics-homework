#include <stdio.h>

int main() {
    int i;
    printf("Enter how many elements you want: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= i; ++i) {
        printf("* ");
    }
    printf("\n");

    return 0;
}
