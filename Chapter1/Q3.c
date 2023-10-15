// Author: Anshu Kumar Singh
// Date: 13/10/2023
// Let Us C 18th Edition Chapter 1 Question 3

/*
Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) 
is defined as A(n-1) cut in half, parallel to its shorter sides. Thus, paper 
of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate
and print paper sizes A0, A1, A2, ... A8.
*/

#include <stdio.h>

int main() {

    // 'l' stands for 'Length' while 'b' stands for 'Breadth'
    int A0_l = 1189;
    int A1_l, A2_l, A3_l, A4_l, A5_l, A6_l, A7_l, A8_l;

    int A0_b = 841;
    int A1_b, A2_b, A3_b, A4_b, A5_b, A6_b, A7_b, A8_b;

    A1_l = A0_b;
    A1_b = A0_l/2;
    A2_l = A1_b;
    A2_b = A1_l/2;
    A3_l = A2_b;
    A3_b = A2_l/2;
    A4_l = A3_b;
    A4_b = A3_l/2;
    A5_l = A4_b;
    A5_b = A4_l/2;
    A6_l = A5_b;
    A6_b = A5_l/2;
    A7_l = A6_b;
    A7_b = A6_l/2;
    A8_l = A7_b;
    A8_b = A7_l/2;

    printf("A1: %d x %d\n", A1_l, A1_b);
    printf("A2: %d x %d\n", A2_l, A2_b);
    printf("A3: %d x %d\n", A3_l, A3_b);
    printf("A4: %d x %d\n", A4_l, A4_b);
    printf("A5: %d x %d\n", A5_l, A5_b);
    printf("A6: %d x %d\n", A6_l, A6_b);
    printf("A7: %d x %d\n", A7_l, A7_b);
    printf("A8: %d x %d\n", A8_l, A8_b);

    /*
    Simple question but a lot of code repetitions. I tried to solve it with only
    what was taught in chapter 1, Variable creations, printing, comments and getting input.
    This would've been way easier with functions. I checked multiple times if I actually 
    needed to do so much repetitions. Maybe I did miss something and mess up. Do tell me.
    */

    return 0;
}
