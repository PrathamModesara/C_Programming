#include <stdio.h>

int main() {

    int num, marks;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Simple IF: Number is positive\n");
    }

    if (num % 2 == 0) {
        printf("IF-ELSE: Number is Even\n");
    } else {
        printf("IF-ELSE: Number is Odd\n");
    }

    printf("\nEnter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    }
    else if (marks >= 75) {
        printf("Grade: B\n");
    }
    else if (marks >= 50) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: Fail\n");
    }

    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");

        if (age >= 21) {
            printf("You are also eligible to contest elections.\n");
        }
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
