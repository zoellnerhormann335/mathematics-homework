#include <stdio.h>

void main() {
    int a = 10;
    printf("a is %d\n", a);

    double b = 3.14159;
    float c = 2.71828;

    // Add the numbers and print the result
    printf("b + c = %.2f + %.2f = %.2f\n", b, c, (double)(b + c));

    // Multiply a by b and print the result
    printf("a * b = %d * %.2f = %d\n", a, b, a * b);
}
