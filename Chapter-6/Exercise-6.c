// Author: Anshu Kumar Singh
// Date: 07/11/2023
// Let Us C 18th Edition Chapter 6 Exercise 6

/*
Population of a town today is 100000. The population has increased steadily 
at the rate of 10% per year for last 10 years. Write a program to determine 
the population at the end of each year in the last decade.
*/

#include <stdio.h>
#include <math.h>

int main() {

    int total_population = 100000;
    for (int i = 1; i <= 10; i++)
    {
        int population = total_population/ pow(1 + 0.1, i);
        printf("Population %d year(s) ago : %d\n", i, population);
    }

    return 0;
}