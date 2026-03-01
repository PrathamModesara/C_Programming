#include <stdio.h>

int main() {

    int arr[5];
    int i, sum = 0;

    printf("===== 1D ARRAY (User Input) =====\n");

    // Taking input from user
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Printing array elements
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / 5);

    return 0;
}