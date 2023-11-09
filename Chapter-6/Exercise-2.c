// Author: Anshu Kumar Singh
// Date: 31/10/2023
// Let Us C 18th Edition Chapter 6 Exercise 2

/*
According to a study, the approximate level of intelligence of a person can be calculated
using the following formula:

i = 2 + (y + 0.5x)

Write a program that will produce a table of values of i, y and x, where y varies from 1 to 6, 
and, for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.
*/

#include <stdio.h>

int main() {

    for (int y = 1; y <= 6; y++)
    {
        for (float x = 5.5; x <= 12.5; x = x + 0.5)
        {
            printf("i = 2 + (%d + 0.5(%f)) = %f\n", y, x, (2 + (y + 0.5 * x)));
        }
    }

    return 0;
}