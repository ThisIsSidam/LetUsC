// Author: Anshu Kumar Singh
// Date: 07/11/2023
// Let Us C 18th Edition Chapter 6 Exercise 5

/*
Write a program to generate all Pythagorean Triplets with side length
less than or equal to 30.
*/

#include <stdio.h>
#include <math.h>

int main() {

    for (int hypotenuse = 1; hypotenuse <= 30; hypotenuse++)
    {
        for (int height = 1; height < hypotenuse; height++)
        {
            for (int base = 1; base < hypotenuse; base++)
            {
                if (pow(hypotenuse, 2) == ( pow(height, 2) + pow(base, 2) ))
                {
                printf("Base: %d Height: %d Hypotenuse: %d\n", base, height, hypotenuse);
                }
            }            
        }
    }

    return 0;

}
