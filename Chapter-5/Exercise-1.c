// Author: Anshu Kumar Singh
// Date: 19/10/2023
// Let Us C 18th Edition Chapter 5 Question 1

/*
Write a program to print all the ASCII values and their equivalent characters 
using a while loop. The ASCII values vary from 0 to 255.
*/

#include <stdio.h>

int main() {

    int value = 0;

    while (value <= 255)
    {
        char character = value;
        printf("%d : %c\n", value, character);
        value++;
    }

    return 0;
}