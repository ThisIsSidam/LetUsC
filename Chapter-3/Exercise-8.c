// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Exercise 8

/*
Given a point (x, y), write a program to find out if it lies on X-axis, 
Y-axis or origin.
*/

#include <stdio.h>

int main() {

    float x, y;
    printf("Enter the coordinates: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point lies on the origin.\n");
    }
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    }
    else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    }
    else {
        printf("The point does not lie on an axis or on the origin.\n");
    }

    return 0;
}