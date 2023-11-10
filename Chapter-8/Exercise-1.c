// Author: Anshu Kumar Singh
// Date: 10/11/2023
// Let Us C 18th Edition Chapter 8 Exercise 1

/*
Any year is entered through the keyboard. Write a function to determine 
whether the year is a leap year or not.
*/

#include <stdio.h>

int isLeapYear (int year);

int main() {

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("Yes, %d is a leap year.\n", year);
    else
        printf("No, %d is not a leap year.\n", year);

    return 0;
}

int isLeapYear (int year) {
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        return 1;
    return 0;
}