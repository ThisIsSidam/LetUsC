Author: Anshu Kumar Singh | Date: 10/11/2023 | Let Us C 18th Edition Chapter 8 Notes

- Functions are a group of instructions achieving some goal.

- Why create functions:
    1) Better complexity management- Easy to Design, Easy to Debug.
    2) Provide reuse mechanism - Avoids rewriting same code repeatedly.

- Types of functions: 
    1) Library - printf(), scanf(), pow().
    2) User-defined - main().
    Rules for building both are same.

- Three things should be done while creating a function: 
    1) Function definition
    2) Function call
    3) Fucntion prototype declaration

- General form: 

return-type function-name(type arg1, type arg2, type arg3)
{
    statement1; statement2;
    return (varible/constant/expression);       -> Can return only 1 value.
}

- A C program is a collection of one or more functions.

- If a C program contains 1 function, its name is main().

- If it contains >1 function, then one of them must be main().

- Execution of any C program always begins with main().

- Function names i a program must be unique.

- Any function can call any other function.

- Function can be defined in any order.

- More the function calls, slower the execution.

- If values are passed to a function, the function must collect it while defining it.

- Arguments passed to a function are called actual arguments.

- Arguments received by a function are called formal arguments.

- Actual & formal arguments must match in Number, Order, and Type.

- Actual arguments can be constants / variables / expressions.

- Formal arguments must be variables.

- Nested calls are legal. Ex.: a = sin( cos(b) );

- Call within an expression is legal. Ex.: a = sin(b) + cos(c);

- The error "Unresolved external" usually means there is a mistake in the function name spelling.

- return (s); - Returns control and value.

- return; - Returns only control.

- If value is returned from a function, we can choose to ignore it.

- To ensure that no value is returned from a function, use void as the return-type in function definition and its prototype declaration.

- A function by default returns an integer value. If we do not specifically return an integer value then a garbage integer value would be returned.

- A function can return a non-integer value. The type of value must be suitably mentioned in the function definition can its prototype declaration as in:

float area (float r);           -> Function prototype
float area (float r) {..}       -> Function definition


