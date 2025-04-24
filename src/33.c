#include <stdio.h>

void main() {
    int i;
    for(i = 0; i < 10; ++i) {
        if (i % 2 == 0)
            printf("Even number: %d", i);
        else
            printf("Odd number: %d", i);
    }
}
