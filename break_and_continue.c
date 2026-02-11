#include <stdio.h>

int main() {

    int i, j;

    // 1. BREAK STATEMENT
    printf("===== BREAK EXAMPLE =====\n");
    for (i = 1; i <= 10; i++) {

        if (i == 6) {
            break;  
        }

        printf("%d ", i);
    }

    // 2. CONTINUE STATEMENT
    printf("\n\n===== CONTINUE EXAMPLE =====\n");
    for (i = 1; i <= 10; i++) {

        if (i % 2 == 0) {
            continue; 
        }

        printf("%d ", i);
    }

    // 3. BREAK IN NESTED LOOP
    printf("\n\n===== BREAK IN NESTED LOOP =====\n");
    for (i = 1; i <= 3; i++) {

        for (j = 1; j <= 3; j++) {

            if (j == 2) {
                break; 
            }

            printf("i=%d j=%d\n", i, j);
        }
    }

    return 0;
}
