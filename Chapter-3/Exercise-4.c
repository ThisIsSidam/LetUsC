// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Exercise 4

/*
Write a program to find the absolute value of a number entered through the keyboard.
*/

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Absolute value: %d\n", num);
    } 
    else {
        printf("Absolute value: %d\n", (-1) * num);
    }

    return 0;
}