// Author: Anshu Kumar Singh
// Date: 17/10/2023
// Let Us C 18th Edition Chapter 4 Exercise 4

/*
The Body Mass Index (BMI) is defined as ratio of the weight of a 
person (in kilogram) to the square of the height (in meters). Write
a program that receives weight and heights, calculates the BMI, and 
reports the BMI category as per the following tables:

BMI Category        BMI
-----------------------------
Starvation          < 15
Anorexic            15.1 to 17.5
Underweight         17.6 to 18.5
Ideal               18.6 to 24.9
Overweight          25 to 29.9 -> Corrected from 25.9
Obese               30 to 39.9 -> Corrected from 30.9
Morbidly Obese      >= 40
*/

#include <stdio.h>

int main() {

    float weight, height, bmi;

    printf("Enter your weight in KG: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    if (bmi < 15)
    {
        printf("Category: Starvation\n");
    }
    else if (bmi > 15.1 && bmi < 17.5)
    {
        printf("Category: Anorexic\n");
    }
    else if (bmi > 17.6 && bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi > 18.6 && bmi < 24.9)
    {
        printf("Category: Ideal\n");
    }
    else if (bmi > 25 && bmi < 29.9)
    {
        printf("Category: Overweight\n");
    }
    else if (bmi > 30 && bmi < 39.9)
    {
        printf("Category: Obese\n");
    }
    else if (bmi >= 40)
    {
        printf("Category: Morbidly Obese\n");
    }
    else
    {
        printf("Something really bad happened!\n");
    }

    return 0;
}
