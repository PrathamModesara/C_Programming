#include <stdio.h>
#include <stdbool.h>

// Structure
struct Student {
    int id;
    char name[20];
};

// Enumeration
enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {

    // Integer types
    int a = 10;
    short int b = 5;
    long int c = 100000;
    long long int d = 1000000;

    // Floating types
    float x = 5.5;
    double y = 10.12345;
    long double z = 20.123456789;

    // Character type
    char ch = 'A';

    // Boolean type
    bool flag = true;

    // Array
    int arr[3] = {10, 20, 30};

    // Pointer
    int *ptr = &a;

    // Structure variable
    struct Student s1 = {1, "Pratham"};

    // Enum variable
    enum Day today = WED;

    // Printing values
    printf("---- Integer Types ----\n");
    printf("int: %d\n", a);
    printf("short: %d\n", b);
    printf("long: %ld\n", c);
    printf("long long: %lld\n", d);

    printf("\n---- Floating Types ----\n");
    printf("float: %f\n", x);
    printf("double: %lf\n", y);
    printf("long double: %Lf\n", z);

    printf("\n---- Character ----\n");
    printf("char: %c\n", ch);

    printf("\n---- Boolean ----\n");
    printf("bool: %d\n", flag);

    printf("\n---- Array ----\n");
    printf("arr[0]: %d\n", arr[0]);

    printf("\n---- Pointer ----\n");
    printf("Pointer value of a: %d\n", *ptr);

    printf("\n---- Structure ----\n");
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);

    printf("\n---- Enum ----\n");
    printf("Today (enum value): %d\n", today);

    return 0;
}
