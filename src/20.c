#include <stdio.h>

int main() {
    int i;
    
    printf("Hello, world!\n");
    
    for(i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}
