// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Question 7

/*
Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle, on the 
circle or outside the circle. (Hint: Use sqrt() and pow() functions.)
*/

#include <stdio.h>
#include <math.h>

int main() {

    float center_x, center_y, radius;
    printf("Enter coordinates of the center of the circle: ");
    scanf("%f %f", &center_x, &center_y);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    float x, y;
    printf("Enter the coordinates of the point: ");
    scanf("%f %f", &x, &y);

    float distance = sqrt( pow(x - center_x, 2) + pow(y - center_y, 2) );
   
    if (distance > radius) {
        printf("The point lies outside the circle.\n");
    }
    else if (distance < radius) {
        printf("The point lies inside the circle.\n");
    }
    else {
        printf("The point lies on the circle.\n");
    }

    return 0;
}