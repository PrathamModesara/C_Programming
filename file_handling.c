#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    char data[100];

    // 1. CREATE & WRITE FILE
    fp = fopen("sample.txt", "w");  

    if(fp == NULL) {
        printf("File cannot be opened!\n");
        exit(1);
    }

    printf("Enter text to write into file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(fp, "%s", data);
    fclose(fp);

    printf("Data written successfully.\n");

    // 2. READ FILE
    fp = fopen("sample.txt", "r");

    if(fp == NULL) {
        printf("File cannot be opened!\n");
        exit(1);
    }

    printf("\nReading from file:\n");
    while(fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);

    // 3. APPEND FILE
    fp = fopen("sample.txt", "a");

    if(fp == NULL) {
        printf("File cannot be opened!\n");
        exit(1);
    }

    printf("\nEnter text to append: ");
    fgets(data, sizeof(data), stdin);

    fprintf(fp, "%s", data);
    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}