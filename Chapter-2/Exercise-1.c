// Author: Anshu Kumar Singh
// Date: 14/10/2023
// Let Us C 18th Edition Chapter 2 Question 1

/*
If a five-digit number is input through the keyboard, write a program
to calculate the sum of its digits. (Hint: Use the modulus operator %)
*/

#include <stdio.h>

int main() {

    int num;
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    int total = 0;

    total += num % 10;
    num /= 10;
    total += num % 10;
    num /= 10;
    total += num % 10;
    num /= 10;
    total += num % 10;
    num /= 10;
    total += num;

    printf("Sum of the five digits: %d\n", total);

    return 0;
}