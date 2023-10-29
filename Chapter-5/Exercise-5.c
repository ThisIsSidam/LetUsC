// Author: Anshu Kumar Singh
// Date: 29/10/2023
// Let Us C 18th Edition Chapter 5 Question 5

/*
Write a program to receive an integer and find its octal equivalent. 

Hint: To obtain octal equivalent of an integer, divide it continously by 8
till the dividend doesn't become zero, then write the remainders obtained in
reverse direction.
*/

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Getting the remainder digits 
    int remainders = 0;
    int first_time = 1;
    int multiplier = 0;
    while (num >= 8)
    {
        remainders = (remainders * 10) + (num % 8);
        if (first_time == 1 && (num % 8) == 0)
            multiplier++;
        num /= 8;
        first_time = 0;

    }
    remainders = (remainders * 10) + num;

    // Reversing the remainder digits in remainders
    int octal = 0;
    while (remainders >= 10)
    {
        octal = (octal * 10) + (remainders % 10);
        remainders /= 10;
    }

    // For incase there was a zero as the front.
    octal = (octal * 10) + remainders;
    while (multiplier > 0) 
    {
        octal *= 10;
        multiplier--;
    }

    printf("Octal: %d\n", octal);

    return 0;
}