// Author: Anshu Kumar Singh
// Date: 16/10/2023
// Let Us C 18th Edition Chapter 4 Question 3

/*
A certain grade of steel is graded according to the following conditions:

i) Hardness must be greater than 50.
ii) Carbon content must be less than 0.7.
iii) Tensile strength must be greater than 5600.

The grades are the following:

Grade is 10 if all three conditions are met.
Grade is 9 if conditions (i) and (ii) are met.
Grade is 8 if conditions (ii) and (iii) are met.
Grade is 7 if conditions (i) and (iii) are met.
Grade is 6 if only one condition is met.
Grade is 5 if none of the conditions are met.

Write a program, which wil require the  user to give  values of hardness, carbon
content and tensile strength of the steel under consideration and output the grade
of the steel.
*/

#include <stdio.h>

int main() {

    int hardness, tensile_stength;
    float carbon_content;

    printf("Enter the following values.\n\nHardness: ");
    scanf("%d", &hardness);
    printf("Carbon Content: ");
    scanf("%f", &carbon_content);
    printf("Tensile Strength: ");
    scanf("%d", &tensile_stength);

    const int hardness_threshold = 50;
    const float carbon_threshold = 0.7;
    const int strength_threshold = 5600;

    if (hardness > hardness_threshold && 
        carbon_content < carbon_threshold && 
        tensile_stength > strength_threshold)
    {
        printf("Grade: 10\n");
    }
    else if (hardness > hardness_threshold && 
        carbon_content < carbon_threshold && 
        tensile_stength < strength_threshold)
    {
        printf("Grade: 9\n");
    }
    else if (hardness < hardness_threshold && 
        carbon_content < carbon_threshold && 
        tensile_stength > strength_threshold)
    {
        printf("Grade: 8\n");
    }
    else if (hardness > hardness_threshold && 
        carbon_content > carbon_threshold && 
        tensile_stength > strength_threshold)
    {
        printf("Grade: 7\n");
    }
    else if (hardness > hardness_threshold &&  
        carbon_content > carbon_threshold && 
        tensile_stength < strength_threshold)
    {
        printf("Grade: 6\n");
    }
    else if (hardness < hardness_threshold &&  
        carbon_content < carbon_threshold && 
        tensile_stength < strength_threshold)
    {
        printf("Grade: 6\n");
    }
    else if (hardness < hardness_threshold &&  
        carbon_content > carbon_threshold && 
        tensile_stength > strength_threshold)
    {
        printf("Grade: 6\n");
    }
    else if (hardness < hardness_threshold && 
        carbon_content > carbon_threshold && 
        tensile_stength < strength_threshold)
    {
        printf("Grade: 5\n");
    }
    else 
    {
        printf("Something really bad happened!\n");
    }

    return 0;
}