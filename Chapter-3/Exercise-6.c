// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Exercise 6

/*
Given three points (x1, y1), (x2, y2), and (x3, y3), write a program to 
check if the three points fall on one straight line.
*/

#include <stdio.h>

int main() {

    int x1, y1, x2, y2, x3, y3;
    printf("Enter co-ordinates of point 1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter co-ordinates of point 2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter co-ordinates of point 3: ");
    scanf("%d %d", &x3, &y3);

    if ( (y2 - y1)/(x2 - x1) == (y3 - y2)/(x3 - x2) ) {
        printf("Yes, the three points are collinear.\n");
    }
    else {
        printf("No, the three points aren't collinear.\n");
    }
    

    return 0;
}