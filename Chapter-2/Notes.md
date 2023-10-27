Author: Anshu Kumar Singh | Date: 27/10/2023 | Let Us C 18th Edition Chapter 2 Notes

- Standard steps in interchanging contents of two variables: `t = a; a = b; b = t;`

- `/` gives quotient, `%` gives remainder. While taking `%`, sign of remainder is same as sign of numerator. `%` doesn't work with floats.

- C offers 3 types of instructions: 
    - Type declaration
    - Arithmetic
    - Control

- Declaration and assignment can be combined. Ex. : `int a = 5`.

- 3 types of Arithmetic instructions: 
    - Integer mode
    - Real mode
    - Mixed mode

- Rules for arithmetic instructions:
    - If one operand is `float`, result is a `float`.
    - Result is `int` only if both operands are `ints`.

- `a = pow(2, 5);` would store 2<sup>5</sup> in a. Remember to `#include <math.h>`.

- Every operator has 
    1) Priority
    2) Associativity

- Priority is `* / %`, `+ -`, `=`. Priority can be changed using `()`.

- Associativity comes into play when priority cannot decide which operation to perform first . Associativity is either L to R or R to L. `+, - *, /, %` has L to R, `=` has R to L associativity.

- Format string of `printf()` can contain: 
    1) Format specifiers - `%c`, `%d`, `%f`.
    2) Escape sequences - `\n`, `\t`, many others.
    3) Any others character.

- Format string of `scanf()` can contain only format specifiers.

- Control instructions control the sequence of execution of instructions in a program.

- 4 types of control instructions:
    1) Sequence
    2) Decision
    3) Repetition
    4) Case
