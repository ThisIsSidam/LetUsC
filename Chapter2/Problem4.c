// Author: Anshu Kumar Singh
// Date: 14/10/2023
// Let Us C 18th Edition Chapter 2 Question 4

/*
Wind-chill factor is the felt air temperature on exposed skin due to wind.
The wind-chill factor is always lower than the air temperature, and
is calculated as per the following formula:

wcf = 35.74 + 0.6215t +  (0.4275t - 35.75) * v^(0.16)

where t is temperature and v is wind velocity. Write a program to receive 
values of t and v and calculate wind-chill factor (wcf).
*/

#include <stdio.h>
#include <math.h>

int main() {

    float t, v;
    printf("Enter temperature in degree fahrenheit: ");
    scanf("%f", &t);
    printf("Enter wind velocity in miles/hour: ");
    scanf("%f", &v);

    float wcf = 35.74 + (0.6215 * t) + ( (0.4275 * t) - 35.75) * pow(v, 0.16);

    printf("Wind-chill factor: %f\n", wcf);

    return 0;

    /*
    Why did I take values in Fahrenheit and M/h even though I'm an Indian?
    Well, I check if my program is giving correct results. I search for the online
    calculator version of the program I'm writing. There's always one. The website
    I chose had the options to select the metrics and the results with the US metrics 
    matched my results. 
    
    Seems the literals in the formula are to blame. We can change the needed ones to 
    get results with different metrics.
    */
}