#include <stdio.h>
int main() {
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    if (i > 0) {
        for (i = 1; i <= i; i++) {
            printf("*");
        }
        for (i = i - 2; i >= 1; i--) {
            printf(" *");
        }
    } else {
        printf("Error: Invalid input.");
    }
    return 0;
}
