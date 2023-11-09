// Author: Anshu Kumar Singh
// Date: 13/10/2023
// Let Us C 18th Edition Chapter 1 Exercise 2

/*
The length and breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a program to calculate the area and perimeter of the rectangle, and the area and 
circumference of the circle.
*/

#include <stdio.h>

int main() {

    float length, breadth, radius;

    printf("Enter length and breadth of the rectangle with a space: ");
    scanf("%f %f", &length, &breadth);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area_rect, perimeter_rect, area_circle;
    const float pi = 3.14;

    area_rect = length * breadth;
    perimeter_rect = 2 * (length + breadth);
    area_circle = 2 * pi * radius;

    printf("Area of the Rectangle: %f\n", area_rect);
    printf("Perimeter of the Rectangle: %f\n", perimeter_rect);
    printf("Area of the Circle: %f\n", area_circle);

    return 0;
}