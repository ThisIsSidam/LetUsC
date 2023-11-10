// Author: Anshu Kumar Singh
// Date: 10/11/2023
// Let Us C 18th Edition Chapter 8 Exercise 2

/*
A positive integer is entered through the keyboard. Write a function to 
obtain the prime factors of this number.

For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors
of 35 are 5 and 7. 
*/

#include <stdio.h>

void printPrimeFactors(int number);

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printPrimeFactors(num);

    return 0;
}

void printPrimeFactors(int number) {

    int divider = 2;
    while(number > 1)
    {
        if (number % divider == 0)
        {
            printf("%d ", divider);
            number /= divider;
            
        }
        else   
        {
            divider++;
        }
    }
    printf("\n");
}