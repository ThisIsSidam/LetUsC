// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Exercise 2

/*
If ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.
*/

#include <stdio.h>

int main() {

    int Ram, Shyam, Ajay;
    printf("Enter ages of Ram, Shyam, and Ajay separated by spaces: ");
    scanf("%d %d %d", &Ram, &Shyam, &Ajay);

    if (Ram == Shyam && Shyam == Ajay) {
        printf("All of them have the same age.\n");
    }
    else if ( Ram == Shyam) {
        if (Ram > Ajay) {
            printf("The youngest is Ajay.\n");
        } 
        else {
            printf("Ram and Shyam have the same age and they're younger than Ajay.\n");
        }
    } 
    else if (Shyam == Ajay) {
        if (Shyam > Ram) {
            printf("The youngest is Ram.\n");
        } else {
            printf("Shyam and Ajay have the same age and they're younger than Ram.\n");
        }
    }
    else if (Ram == Ajay) {
        if (Ram > Shyam) {
            printf("The youngest is Shyam.\n");
        }
        else {
            printf("Ram and Ajay have the same age and they're younger than Shyam.\n");
        }
    }
    else {
        if (Ram > Shyam) {
            if (Shyam > Ajay) {
                printf("The youngest is Ajay.\n");
            } else {
                printf("The youngest is Shyam.\n");
            }
        } else {
            if (Ram > Ajay) {
                printf("The youngest is Ajay.\n");
            } else {
                printf("The youngest is Ram.\n");
            }
        }
    }

    return 0;
}