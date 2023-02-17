#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 10 == 1 && i != 1) {
            printf("\n");
        }
        printf("%d ", i);
    }
    return 0;
}
