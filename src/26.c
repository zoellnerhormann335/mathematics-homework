#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Error: Input must be a positive integer.\n");
    } else {
        for (int i = 1; i < n; ++i) {
            printf("*\n");
        }
        
        printf("\n* Final result:\n");
        for (int i = 1; i <= n; ++i) {
            printf("*\n");
        }
    }

    return 0;
}
