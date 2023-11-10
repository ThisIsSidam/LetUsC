Author: Anshu Kumar Singh | Date: 10/11/2023 | Let Us C 18th Edition Chapter 7 Notes

- Three ways for taking decisions in a program: 
    1) If-else statement
    2) Conditional statement
    3) Switch statement

- Switch should be used when we are to find out whether a variable or an expression has one of the several possible values.

- Switch should not be used for checking ranges or for a yes / no problem.

- General form: 

switch (expression)         -> Use constant or variable expression.
{
    case constant expression:           -> Use only constant expression.
        ...
    case constant expression:
        ...
    default:
        ...
}

- If a case fails, control jumps to the next case.

- If a case is satisfied, then all statements below it up to '}' of switch are executed.

- Usually, a 'break' is used at the end of statements in each case.

- 'break' takes the control out of the switch.

- 'continue' DOES NOT take the control to the beginning of the switch.

- Order in which cases are written does not matter.

- Default case is optional.

- Cases in a switch must always be unique.

- Switch can be used with int, long int, char.

- Switch cannot be used with float, double.

- Switch works faster than a series of ifs.

- Switch is popularly used in menu driven programs to check which choice from the menu has been made by the user.

- goto keyword can take the control from any place to any other place within the function.

- goto should be used only in a situation where we wish to break out of the innermost loop in a nested loop system.

- As far as possible, goto should be avoided since it is difficult to keep track of the control when multiple gotos are used.

- exit() - function - Terminates program execution.

- #include <stdlib.h> for exit() to work. 



