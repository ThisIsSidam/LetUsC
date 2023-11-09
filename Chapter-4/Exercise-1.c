// Author: Anshu Kumar Singh
// Date: 16/10/2023
// Let Us C 18th Edition Chapter 4 Exercise 1

/*
If the lengths of three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is an isosceles, an equilateral,
a scalene or a right-angled triangle.
*/

#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c; // The three sides.
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b ==c ) 
    {
        printf("It is an equilateral triangle.\n");
    }
    else if ( (a == b && b != c) || (b == c && c != a) || (a == c && c != b) )
    {
        printf("It is an isosceles traingle.\n");
    } 
    else if ( a != b && b != c && a != c)
    {
        printf("It is a scalene traingle.\n");
    }
    else 
    {
        printf("Something really bad happened!\n");
    }

    if ( ( pow(a, 2) == pow(b, 2) + pow(c, 2) ) || 
         ( pow(b, 2) == pow(a, 2) + pow(c, 2) ) ||
         ( pow(c, 2) == pow(a, 2) + pow(b, 2)) )
    {
        printf("It is also a right-angle traingle.\n");
    }

    return 0;
}