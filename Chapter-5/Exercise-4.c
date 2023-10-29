// Author: Anshu Kumar Singh
// Date: 28/10/2023
// Let Us C 18th Edition Chapter 5 Question 4

/*
Write a program to enter numbers till the user wants. 
At the end it should display the count of positive, negative and zeroes entered.
*/

#include <stdio.h>

int main() {
    int max;
    int pos = 0;
    int neg = 0;
    int zeroes = 0;

    printf("How many numbers do you want to enter? : ");
    scanf("%d", &max);

    while (max > 0)
    {
        int input;
        printf("Enter: ");
        scanf("%d", &input);

        if (input == 0)
            zeroes++;
        else if (input > 0)
            pos++;
        else if (input < 0) 
            neg++;
        else 
            printf("Something really bad happened!");
        
        max--;
    }
    printf("Positive integers: %d\nNegative integers: %d\nZeres: %d\n", pos, neg, zeroes);

    return 0;
}