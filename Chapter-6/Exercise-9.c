// Author: Anshu Kumar Singh
// Date: 09/11/2023
// Let Us C 18th Edition Chapter 6 Question 9

/*
Write a program to produce the following output:

            1
        2       3
    4       5       6
7       8       9       10
*/

#include <stdio.h>

int main() {

    int num = 1;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4 - i; j > 0; j-- )
        {
            printf("    ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d       ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}