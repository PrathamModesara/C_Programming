#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    int length;
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // 2. String Length
    length = strlen(str1);
    printf("\nLength of first string: %d\n", length);

    // 3. String Copy
    char copy[100];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    // 4. String Concatenation
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    // 5. String Compare
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 6. String Reverse (Manual)
    char rev[100];
    int i, j = 0;
    int len = strlen(str2);

    for(i = len - 1; i >= 0; i--) {
        rev[j++] = str2[i];
    }
    rev[j] = '\0';

    printf("Reversed second string: %s\n", rev);

    // 7. Palindrome Check
    if(strcmp(str2, rev) == 0)
        printf("Second string is Palindrome\n");
    else
        printf("Second string is Not Palindrome\n");

    return 0;
}