// Author: Anshu Kumar Singh
// Date: 17/10/2023
// Let Us C 18th Edition Chapter 4 Exercise 5

/*
Do these using Conditional Operators:

a) Whether the character entered through the keyboard is a lower case
alphabet or not.

b) Whether the character entered through the keyboard is a special symbol
or not.

c) Write a program to determine whether a year entered through the keyboard 
is a leap year or not.

d) Write a program to receive value of an angle in degrees and check 
whether sum of squares of sine and cosine of this angle is equal to 1.

e) Rewrite the following program using Conditional Operators.

#include <stdio.h>

int main() {
    float sal;
    printf("Enter the salary");
    scanf("%f", &sal);
    if ( sal >= 25000 && sal <= 40000)
        printf("Manager\n");
    else 
        if ( sal >= 15000 && sal < 25000)
            printf("Accountant\n");
        else 
            printf("Clerk\n");
    return 0;
}       
*/

#include <stdio.h>
#include <math.h>

int main() {

    {
        // a
        // char alphabet;
        // printf("Enter an english alphabet: ");
        // scanf("%c", &alphabet);

        // printf( (alphabet >= 97 && alphabet <= 122) ? "It's a lowercase letter.\n" : "It's not a lowercase letter.\n");
    }

    {
        // b
        // char symbol;
        // printf("Enter a symbol: ");
        // scanf("%c", &symbol);

        // printf ( ( ( symbol >= 32 && symbol <= 47) ||
        //          ( symbol >= 58 && symbol <= 64) ||
        //          ( symbol >= 91 && symbol <= 96) ||
        //          ( symbol >= 123 && symbol <= 126) ) ? "It's a special symbol.\n" : "It's not a special symbol.\n" );
    }

    {
        // c
        // int year;
        // printf("Enter a year: ");
        // scanf("%d", &year);

        // printf( ( (year%4 == 0 && year%100 != 0) || year%400 == 0) ? "It's a leap year.\n" : "It's not a leap year.\n");

    }

    {
        // d
        // int angle;
        // printf("Enter an angle: ");
        // scanf("%d", &angle);

        // printf( (pow(sin(angle), 2) + pow(cos(angle), 2) == 1) ? "Yes\n" : "No\n"); 
    }

    {
        // e
        float salary;
        printf("Enter the salary: ");
        scanf("%f", &salary);

        printf( (salary >= 25000 && salary <= 40000) ? "Manager\n" : 
                ( (salary >= 15000 && salary < 25000) ? "Accountant\n" : "Clerk\n") );

    }



    return 0;
}