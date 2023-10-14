// Author: Anshu Kumar Singh
// Date: 14/10/2023
// Let Us C 18th Edition Chapter 2 Question 5

/*
Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents od C and D.
*/

#include <stdio.h>

int main() {

    int C, D;
    printf("Enter two numbers with a space: ");
    scanf("%d %d", &C, &D);
    printf("C: %d       D: %d\n", C, D);

    C = C + D;
    D = C - D;
    C = C - D;

    printf("C: %d       D: %d\n", C, D);

    return 0;

    /*
    This is better than the temp method as it doesn't require the 
    creation of another variable. Learnt it just a couple days ago 
    from ApnaCollege Ma'am.
    */
}