// Author: Anshu Kumar Singh
// Date: 14/10/2023
// Let Us C 18th Edition Chapter 2 Question 2

/*
Write a program to receive Cartesian co-ordinates (x, y) of a point 
and convert them into polar co-ordinates (r, φ)

Hint: r = sqrt(x^2 + y^2) and φ = tan^(-1) (y/x).
*/

#include <stdio.h>
#include <math.h>

int main() {

    float x, y;
    printf("Enter the x and y Cartesian Co-ordinates with a space: ");
    scanf("%f %f", &x, &y);

    // Greek symbol phi (Φ, φ) which is pronounced 'Fa-i'.
    float r, phi;
    
    r = sqrt(pow(x, 2) + pow(y, 2));
    phi = atan(y/x);

    printf("Polar Co-ordinates: (%f, %f)\n", r, phi);
    // The phi will be in Radians and not Degrees.

    return 0;
}
