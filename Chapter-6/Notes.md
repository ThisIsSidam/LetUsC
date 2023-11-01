Author: Anshu Kumar Singh | Date: 31/10/2023 | Let Us C 18th Edition Chapter 6 Notes

- 3 types of loops:
    1) while
    2) for 
    3) do-while

- What can be done using one loop can always be done using the other two.

- Usual usage: 
    - while: To repeat something an unknown number of times, i.e. when we do not know at the time of writing the program how many times the loop is going to be executed.
    - for: To repeat something a fixed number of times.
    - do-while: To repeat something at least once.

- Equivalent forms:

i = 1;              | for (i = 1; i <= 10; i++)     | i = 1;
while (i <= 10)     | {                             | do 
{                   |     statement1;               | {
    statement1;     |     statement2;               |     statement1;
    statement2;     | }                             |     statement2;
}                   |                               |     i++;
                    |                               | } while (i <= 10);

- for (;;) is an infinite loop. While results into an error.

- Multiple initializations, conditions and incrementations in a for loop are acceptable. Ex:
for (i = 1, j = 2; i <= 10 && j <= 24; i++, j += 3)
{
    statement1;
    statement2;
}

- break: Terminates the execution of the loop.
- continue: Abandons rest of the instructions in the loop and goes for the next iteration of the loop.

- Usually break and continue are sued in this form:

while(condition1)               | while(condition1)
{                               | {
    if (condition2)             |    if (condition2)
        break;                  |       continue;
    statement1;                 |    statement1;
    statement2;                 |    statement2;
}                               | }
