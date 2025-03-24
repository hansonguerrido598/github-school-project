#include <stdio.h>

void main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            printf("Even: ");
        } else {
            printf("Odd: ");
        }
        printf("%d ", i);
    }
    printf("\n");
}
