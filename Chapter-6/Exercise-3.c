// Author: Anshu Kumar Singh
// Date: 31/10/2023
// Let Us C 18th Edition Chapter 6 Exercise 3

/*
When interest compounds q times per year at an annual rate of r% for n years,
the principal p compounds to an amount a as per the formula:

a = p (1 + r/q)^(nq)

Write a program to read 10 sets of p, r, n & q and calculate the corresponding a.
*/

#include <stdio.h>
#include <math.h>

int main() {

    printf("Enter 10 sets of p, r, q, and n.\nEnter values in the given order with a space.\n");
    
    for (int i = 1; i <= 10; i++)
    {
        float p, r, q, n;
        printf("Enter values set %d with a space: ", i);
        scanf("%f %f %f %f", &p, &r, &q, &n);

        float amount = p *( pow((1 + r/q), n*q) );
        printf("Amount: %.2f\n", amount);
    }

    return 0;
}