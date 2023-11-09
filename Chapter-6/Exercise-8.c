// Author: Anshu Kumar Singh
// Date: 09/11/2023
// Let Us C 18th Edition Chapter 6 Exercise 8

/*
Write a program to print all 24 hours of day with suitable suffixes like, AM, PM, Noon and Midnight.
*/

#include <stdio.h>

int main() {
	for (int i = 1; i <= 12; i++)
	{
		if (i >= 1 && i <=11)
			printf("%d AM\n", i);
		else if (i == 12)
			printf("%d Noon\n", i);
	}
    for (int i = 1; i <= 12; i++)
    {
        if (i >= 1 && i <= 11)
			printf("%d PM\n", i);
		else if (i == 12)
			printf("%d Midnight\n", i);

    }

	return 0;
}