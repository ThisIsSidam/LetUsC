// Author: Anshu Kumar Singh
// Date: 14/10/2023
// Let Us C 18th Edition Chapter 2 Question 3

/*
Write a program to receive values of latitude (L1, L2) and longitude (G1, G2),
in degrees, of two places on the earth and output the distance (D) between them
in nautical miles. The formula for distance in nautical miles is:

D = 3963 * cos^(-1) (sinL1sinL2 + cosL1cosL2 * cos(G2 -G1))
*/

#include <stdio.h>
#include <math.h>

int main() {

    float L1, G1, L2, G2;
    printf("Enter the Latitude and Longitude of the first location in degrees: ");
    scanf("%f %f", &L1, &G1);
    printf("Enter the Latitude and Longitude of the second location in degrees: ");
    scanf("%f %f", &L2, &G2);

    // Trigo functions take arguments in radians not degrees. We took input in degrees
    // because the question asked us to do that.
    float pi = 3.14;
    float L1_rad = L1 * pi/180;
    float L2_rad = L2 * pi/180;
    float G1_rad = G1 * pi/180;
    float G2_rad = G2 * pi/180;

    float D = 3444 * acos(  (sin(L1_rad) * sin(L2_rad)) + 
                            (cos(L1_rad) * cos(L2_rad)) * 
                            cos(G2_rad - G1_rad) );

    printf("Distance in Nautical miles: %f\n", D);

    return 0;

    /*
    I was getting wrong answers compared to the online calculators.
    Later I found out that the literal value given in the question '3963' is at fault. 

    The value we multiply the acos value with is the radius of Earth in the metric
    we want our answer in.

    We want the answer in nautical miles, so the literal should be Earth's radius
    in nautical miles, which is 3444 not 3963. 

    3963 is Earth's radius in miles, while 6378 in Earth's radius in kilometers.
    */
}