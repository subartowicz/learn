#include <stdio.h>

// Declare other program form "Efektywny C..."
void swap();
int main(void) {
    int choice;

    printf("Choose a program to run:\n");
    printf("1. Swap\n");
    printf("2. Program 2\n");
    printf("3. Program 3\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            swap();
            break;
        default:
            printf("Invalid Choice\n");

    }
    return 0;
}