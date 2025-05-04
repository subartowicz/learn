//
// Created by cisco on 04/05/2025.
//
#include <stdio.h>
#include "swap.h"

void swap2(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int swap(void) {

    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap2(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return a;
}