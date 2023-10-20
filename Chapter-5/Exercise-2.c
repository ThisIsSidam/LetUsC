// Author: Anshu Kumar Singh
// Date: 19/10/2023
// Let Us C 18th Edition Chapter 5 Question 2

/*
Write a program to print out all Armstrong numbers between 1 and 500. If sum
of cubes of each digit of the number is equal to the number itself, then the number
is called an Armstrong number. 

For example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3* 3).
*/

#include <stdio.h>
#include <math.h>

int main() {

    int num = 1;

    printf("Armstrong Numbers from 1 to 500\n");
    printf("------------------------------------------------\n");

    while (num <= 500) 
    {
        int digit1, digit2 = 0;
        int digit3 = num;

        if (digit3 > 99)
        {
            digit1 = digit3 % 10;
            digit3 /= 10;
        }
        if (digit3 > 9)
        {
            digit2 = digit3 % 10;
            digit3 /= 10;
        }

        if ( pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3) == num)
        {
            printf("%d\n", num);
        } 

        num++;
    }
        

}