// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Question 5

/*
Given the length and breadth of a rectangle, write a program tof ind whether
the area of the rectangle is greater than its perimeter. For example, the
area of the rectangle with length = 5 and breadth = 4 is greater than its 
perimeter.
*/

#include <stdio.h>

int main() {

    int length, breadth;
    printf("Enter the length and breadth separated by a space: ");
    scanf("%d %d", &length, &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("Area is greater than perimeter.\n");
    } 
    else if (area < perimeter) {
        printf("Perimeter is greater than area.\n");
    }
    else {
        printf("Area and Perimeter are equal.\n");
    }

    return 0;
}