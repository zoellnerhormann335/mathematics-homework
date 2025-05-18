int main() {
    int i;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n > 0) {
        for (i = 1; i <= n; i++) {
            if (i % 2 == 0)
                printf("*");
            else
                printf("#");
        }
    } else {
        printf("Invalid input. Please enter a positive integer.");
    }
    return 0;
}
