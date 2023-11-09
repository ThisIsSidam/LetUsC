// Author: Anshu Kumar Singh
// Date: 07/11/2023
// Let Us C 18th Edition Chapter 6 Exercise 7

/*
Ramanujan number (1729) is the smallest number that can be expressed as the
sum of two cubes in two different ways - 1729 can be expressed as 1^3 + 12^3
and 9^3 + 10^3. Write a program to print all such numbers up to a reasonable
limit.
*/

#include <stdio.h>
#include <math.h>

int main() {

    int max = 50000;

    int k;

    for (int i = 1; i <= max; i++)
    {
        k = 0;
        for (int x = 1; pow(x, 3) < i; x++)
        {
            for (int y = x + 1; pow(x, 3) + pow(y, 3) <= i; y++)
            {
                if (pow(x, 3) + pow(y, 3) == i)
                {
                    k++;
                }
            }
        }
        if (k == 2)
        {
            printf("%d\n", i);
        }
    }

    /*
    I did solve this one but my original solution had a 4 level deep for loop.
    Very bad. Plus it had duclicate results, so I looked up and this is based 
    on what I saw on the internet. Much better. 3 For Loops are better than 4.
    */

    return 0;
}