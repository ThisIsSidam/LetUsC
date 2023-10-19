// Author: Anshu Kumar Singh
// Date: 15/10/2023
// Let Us C 18th Edition Chapter 3 Question 1

/*
A five-digit number is entered through the keyboard. Write a program to
obtain the reversed number and to determine whether the original and reversed 
numbers are equal or not. 

(Basically, check if the number is a palindrome or not)
*/

#include <stdio.h>

int main() {

    int num;
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    int original_num = num;
    int reversed_num = 0;

    reversed_num += 10000 * (num % 10);
    num /= 10;
    reversed_num += 1000 * (num % 10);
    num /= 10;
    reversed_num += 100 * (num % 10);
    num /= 10;
    reversed_num += 10 * (num % 10);
    num /= 10;
    reversed_num += num;

    printf("Reversed Number: %d\n", reversed_num);

    if (original_num == reversed_num) {
        printf("Yes, the number is a palindrome.\n");
    } else {
        printf("No, the number is not a palindrome.\n");
    }

    return 0;
}

