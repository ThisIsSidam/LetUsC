Author: Anshu Kumar Singh | Date: 27/10/2023 | Let Us C 18th Edition Chapter 5 Notes

- Repetition control instruction is used to repeat a set of statements in a program.

- It is implemented using 
    1) While Loop
    2) For Loop
    3) Do-While Loop

- General form of While Loop:
```
i = 1;      // Initialization of loop counter.
while (i <= 10)     // Testing of loop counter.
{
    statement1;
    statement2;
    i++;      // Incrementation of loop counter.
}
```

- `i++` increments value by 1.
- `i--` decrements value by 1.
- There are no `**`, `//`, or `%%` operators.

- The expressions  `i = i + 1`, `i++`, and `++i` are all same.

- `j = ++i;` first increments i, then assigns the incremented value to j.
- `j = i++;` first assigns current value of i to j, then increments i.

- `i = i + 5` is same as `i += 5`.

- Compound assignment operators: `+=`, `-=`, `*=`, `/=`, and `%=`.

- Running sum and products are implemented using following: 
```
s = 0;
p = 1;
while (condition)
{
    // calculate term
    s = s + term
    p = p * term
}
```