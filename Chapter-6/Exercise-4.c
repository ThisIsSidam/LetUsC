// Author: Anshu Kumar Singh
// Date: 01/11/2023
// Let Us C 18th Edition Chapter 6 Question 4

/*
The natual logarithm can be approximated by the following series.

(x - 1)/x + 1/2( (x - 1)/x )^2 + 1/2( (x - 1)/x )^3 + 1/2( (x - 1)/x )^4 + ....

If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/

#include <stdio.h>
#include <math.h>

int main() {

    float x;
    printf("Enter a number: ");
    scanf("%f", &x);

    float total;
    float first = 1;

    for (int i = 1; i <= 7; i++)
    {
        if (first == 1)
        {
            total = pow( (x-1)/x, i);
            first = 0;
        }
        else 
        {
            total += 0.5 * pow( (x-1)/x, i);
        }
    }

    printf("Natural Log: %f\n", total);

    return 0;
}