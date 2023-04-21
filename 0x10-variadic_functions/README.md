# Variadic Functions

This is a project for the ALX School curriculum, focused on learning variadic functions in C.

## What are Variadic Functions?

Variadic functions are functions in the C programming language that take a variable number of arguments. This is accomplished using the `stdarg.h` header file and the `va_start`, `va_arg`, and `va_end` macros.

- `va_start`: Initializes the argument list.
- `va_arg`: Retrieves the next argument in the list.
- `va_end`: Cleans up the argument list.

## How to Use

This repository contains several files that showcase the use of variadic functions:

- [0-sum_them_all.c](https://github.com/mcakyerima/alx-low_level_programming/blob/main/0x10-variadic_functions/0-sum_them_all.c): returns the sum of all its parameters.
- [1-print_numbers.c](https://github.com/mcakyerima/alx-low_level_programming/blob/main/0x10-variadic_functions/1-print_numbers.c): prints numbers, followed by a new line.
- [2-print_strings.c](https://github.com/mcakyerima/alx-low_level_programming/blob/main/0x10-variadic_functions/2-print_strings.c): prints strings, followed by a new line.
- [3-print_all.c](https://github.com/mcakyerima/alx-low_level_programming/blob/main/0x10-variadic_functions/3-print_all.c): prints anything, followed by a new line.
- [variadic_functions.h](https://github.com/mcakyerima/alx-low_level_programming/blob/main/0x10-variadic_functions/variadic_functions.h): header file containing function prototypes and structs.

To use any of these functions, simply include `variadic_functions.h` in your C file and call the desired function.

## How to Compile

To compile any of the provided C files, run the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic <filename>.c
```


## What I Learned

Through this project, I learned how to write variadic functions in C using `stdarg.h` and the `va_start`, `va_arg`, and `va_end` macros. I also learned about the `const` keyword and how it can be used to create more robust and error-free code.

By using variadic functions, it becomes possible to write functions that take a variable number of arguments, making code more flexible and versatile.

## Author
- Mohammed Abba Kaka

## Licence
- [ALX](https://www.alxafrica.com/)
