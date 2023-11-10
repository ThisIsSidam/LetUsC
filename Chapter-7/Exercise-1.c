// Author: Anshu Kumar Singh
// Date: 10/11/2023
// Let Us C 18th Edition Chapter 7 Exercise 1

/*
Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the number of 
subjects he has failed in. Use the following logic:

- If the student gets first class and he fails in more than 3 subjects, he 
does not get any grace. Otherwise, he gets a grace of 5 marks per subject.

- If the student gets second class and he fails in more than 2 subjects, he 
does not get any grace. Otherwise, he gets a grace of 4 marks per subject.

- If the student gets third class and he fails in more than 1 subject, then
he does not get any grace. Otherwise, he gets a grace of 5 marks.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int class, fails;

    printf("Enter the class you've obtained(1 - First/2- Second/ 3- Third): ");
    scanf("%d", &class);
    printf("Enter the number of subjects you've failed in: ");
    scanf("%d", &fails);

    if (fails <= 0)
    {
        printf("Doesn't seem like you need grace marks.\n");
        exit(1);
    }
    

    switch (class)
    {
        case 1: 
            if (fails > 3)
                printf("Sorry, you don't get any grace marks!\n");
            else
                printf("You get %d grace marks.\n", fails * 5);
            break;
        case 2: 
            if (fails > 2)
                printf("Sorry, you don't get any grace marks!\n");
            else
                printf("You get %d grace marks.\n", fails * 4);
            break;
        case 3: 
            if (fails > 1)
                printf("Sorry, you don't get any grace marks!\n");
            else
                printf("You get %d grace marks.\n", fails * 5);
            break;
        default:
            printf("Seems you entered something unexpected!\n");
    }

    return 0;
}