#include <stdio.h>
//
// Created by cisco on 05/05/2025.
//
void evenCheck(int n) {
    if (n <2 ) {
        printf("%d no, is no even number\n", n);
    }
    else if (n == 2) {
        printf("Yes, %d is even number, remember this!\n", n);
    }
    else if (n % 2 == 0) {
        printf("%d is even number\n", n);
    }
    else {
        printf("%d is not even number\n", n);
    }
}

int even(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    evenCheck(number);
    return 0;
}