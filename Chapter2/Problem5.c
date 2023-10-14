// Author: Anshu Kumar Singh
// Date: 14/10/2023
// Let Us C 18th Edition Chapter 2 Question 5

/*
If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios.
*/

#include <stdio.h>
#include <math.h>

int main() {

    float angle;
    printf("Enter the value of an angle in radian: ");
    scanf("%f", &angle);

    printf("Sin: %1f\n", sin(angle));
    printf("Cos: %1f\n", cos(angle));
    printf("Tan: %1f\n", tan(angle));
    printf("Cot: %1f\n", 1/tan(angle));
    printf("Sec: %1f\n", 1/cos(angle));
    printf("Cosec: %1f\n", 1/sin(angle));

    return 0;
}