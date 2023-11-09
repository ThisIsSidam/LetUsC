// Author: Anshu Kumar Singh
// Date: 13/10/2023
// Let Us C 18th Edition Chapter 1 Exercise 1

/*
Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.
*/

#include <stdio.h>

int main() {

    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celsius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celsius: %f\n", celsius);

    return 0;
}