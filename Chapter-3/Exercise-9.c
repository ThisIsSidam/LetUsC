// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Exercise 9

/*
According to Gregorian calendar, it was Monday on the date 01/01/01. 
If any year is input through the keyboard, write a program to find
out what is the day on 1st January of this year.
*/

#include <stdio.h>

int main() {

    int year, days, day;

    printf("Enter year: ");
    scanf("%d", &year);

    days = 365 * year + (year - 1)/4 - (year - 1)/100 + (year -1)/400;
    day = days%7;


    if (day == 1) {
        printf("It's Monday.\n");
    }
    else if (day == 2)
    {
        printf("It's Tuesday.\n");
    }
    else if (day == 3)
    {
        printf("It's Wednesday.\n");
    }
    else if (day == 4) 
    {
        printf("It's Thursday.\n");
    }
    else if (day == 5)
    {
        printf("It's Friday.\n");
    }
    else if (day == 6)
    {
        printf("It's Saturday.\n");
    }
    else if (day == 0)
    {
        printf("It's Sunday.\n");
    }
    else {
        printf("Something really bad happened!\n");
    }

    return 0;
}