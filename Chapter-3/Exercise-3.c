// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Question 3

/*
Write a program to check whether a triangle is valid or not, if three
angles of the triangle are entered through the keyboard. A triangle is valid 
if the sum of all the three angles is equal to 180 degrees.
*/

#include <stdio.h>

int main() {

    int a, b, c;
    printf("Enter the three angles of the traingle separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    int total = a + b + c;
    
    if (total == 180) {
        printf("Yes, the triangle is valid.\n");
    }
    else {
        printf("It is an invalid triangle!\n");
    }

    return 0;
}