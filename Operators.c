#include <stdio.h>

int main() {

    int a = 10, b = 5;
    int result;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("++a = %d\n", ++a);
    printf("--b = %d\n", --b);


    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    printf("(a > 5 && b < 10) : %d\n", (a > 5 && b < 10));
    printf("(a > 5 || b > 10) : %d\n", (a > 5 || b > 10));
    printf("!(a > b) : %d\n", !(a > b));

    result = a;
    printf("=  : %d\n", result);
    result += 5;
    printf("+= : %d\n", result);
    result -= 3;
    printf("-= : %d\n", result);
    result *= 2;
    printf("*= : %d\n", result);
    result /= 2;
    printf("/= : %d\n", result);
    result %= 3;
    printf("%%= : %d\n", result);

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    int max = (a > b) ? a : b;
    printf("Max of a and b = %d\n", max);

    printf("Size of int = %lu bytes\n", sizeof(int));

    int x = (a = 3, b = 4);
    printf("a = %d, b = %d, x = %d\n", a, b, x);

    int *ptr = &a;
    printf("Address of a = %p\n", (void*)&a);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
