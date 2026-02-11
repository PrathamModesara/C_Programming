#include <stdio.h>

int main() {

    int i, j, n;

    // 1. FOR LOOP
    printf("===== FOR LOOP =====\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // 2. WHILE LOOP
    printf("\n\n===== WHILE LOOP =====\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    // 3. DO-WHILE LOOP
    printf("\n\n===== DO-WHILE LOOP =====\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    // 4. NESTED LOOP
    printf("\n\n===== NESTED LOOP (Pattern) =====\n");
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
