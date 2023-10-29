// Author: Anshu Kumar Singh
// Date: 29/10/2023
// Let Us C 18th Edition Chapter 5 Question 6

/*
Write a program to find the range of a set of numbers entered through the 
keyboard. Range is the difference between the smallest and biggest number
in the list.
*/

#include <stdio.h>

int main() {

    int no_of_numbers;
    printf("How many numbers will you enter? : ");
    scanf("%d", &no_of_numbers);

    int smallest = 2147483647;
    int largest = -2147483648;

    while (no_of_numbers > 0)
    {
        int num;
        printf("Enter: ");
        scanf("%d", &num);

        if (num > largest)
            largest = num;
        
        if (num < smallest) 
            smallest = num;

        no_of_numbers--;
    }

    printf("The numbers range from %d to %d.\n", smallest, largest);

    return 0;
}