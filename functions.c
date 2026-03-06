#include <stdio.h>

int global_var = 100;

// Function declaration
int add(int, int);
void call_by_value(int);
void call_by_reference(int *);
int factorial(int);
void static_demo();

int main() {

    // auto storage class
    auto int a = 5, b = 10;

    printf("===== Function Call Example =====\n");
    int result = add(a, b);
    printf("Sum = %d\n", result);

    printf("\n===== Call by Value =====\n");
    call_by_value(a);
    printf("Value of a in main = %d\n", a);

    printf("\n===== Call by Reference =====\n");
    call_by_reference(&a);
    printf("Value of a after reference call = %d\n", a);

    printf("\n===== Recursion (Factorial) =====\n");
    int num = 5;
    printf("Factorial of %d = %d\n", num, factorial(num));

    printf("\n===== Static Storage Class =====\n");
    static_demo();
    static_demo();
    static_demo();

    printf("\n===== Extern Storage Class =====\n");
    extern int global_var;
    printf("Global variable = %d\n", global_var);

    printf("\n===== Register Storage Class =====\n");
    register int i;
    for(i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

// Function definition
int add(int x, int y) {
    return x + y;
}

// Call by value
void call_by_value(int x) {
    x = x + 20;
    printf("Value inside function = %d\n", x);
}

// Call by reference
void call_by_reference(int *x) {
    *x = *x + 20;
}

// Recursion example
int factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Static variable example
void static_demo() {
    static int count = 0;
    count++;
    printf("Static count = %d\n", count);
}