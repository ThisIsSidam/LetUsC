Author: Anshu Kumar Singh
Date: 27/10/2023
Let Us C 18th Edition Chapter 4 Notes

- More complex decision making can be done using logical operators.

- Logical operators are `&&`, `||`, and `!`.

- Logical operators are useful in 2 situations: 
    1) Checking ranges.
    2) Solving yes/no problems.

- One more form of decision control instruction is: 
```
if (condition1)
    statement1;
else if (condition2)
    statement2;
else if (condition3)
    statement3;
else                            <- else goes to work if all 3 ifs fail.
    statment4;
```

- Hierarchy: `!`    `* / %`   `+ -`    `< > <= >=`    `&&`    `||`    `=`

- Unary operators need only 1 operand. Ex. `!`, `sizeof`, etc.

- Binary operators need 2 operands. Ex. `+`, `-`, etc.

- `sizeof` is a operator. It gives the number of bytes occupied by an entity.

- Usage of `sizeof` operator: 
    - `a = sizeof(int)`
    - `b = sizeof(num)`

- `!(a <= b)` is same as `(a > b)`, vice versa.

- `a = !b` does not change the value of b.

- `a = !a` means, set `a` to `0` if it is `1`, or vice versa.

- `lvalue required` error means something is wrong on LHS of `=`.

- Conditional operators `?:` are ternary oprators. General form: `expression1 ? expressions2 : expression3`

- `?:` can have only 1 statement each.

- `?:` can be nested.

- `?:` always go together. `:` is not optional.

- Always parenthesize assignment operation if used with `?:`.