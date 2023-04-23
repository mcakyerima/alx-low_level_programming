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

To compile and run any of the provided C files with example parameters, follow these steps:

1. Navigate to the directory where the C file is located using the terminal.

2. Compile the file using the following command:

    ```bash
    gcc -Wall -Werror -Wextra -pedantic <filename>.c -o <output_filename>
    ```

    Replace `<filename>` with the name of the C file you want to compile, and `<output_filename>` with the desired name of the executable file.

3. Run the executable file with the example parameters by typing the following command:

    ```bash
    ./<output_filename> <param1> <param2> ...
    ```

    Replace `<output_filename>` with the name of the executable file you just compiled, and `<param1>`, `<param2>`, etc. with example parameters that you want to pass to the function.

For example, to compile and run `0-sum_them_all.c` with parameters `1`, `2`, and `3`, you would do the following:

1. Navigate to the directory where `0-sum_them_all.c` is located using the terminal.

2. Compile the file using the following command:

    ```bash
    gcc -Wall -Werror -Wextra -pedantic 0-sum_them_all.c -o sum_them_all
    ```

3. Run the executable file with example parameters by typing the following command:

    ```bash
    ./sum_them_all 1 2 3
    ```

This will execute the `sum_them_all` function and return the sum of `1`, `2`, and `3`.



## What I Learned

Through this project, I learned how to write variadic functions in C using `stdarg.h` and the `va_start`, `va_arg`, and `va_end` macros. I also learned about the `const` keyword and how it can be used to create more robust and error-free code.

By using variadic functions, it becomes possible to write functions that take a variable number of arguments, making code more flexible and versatile.

## Author
- Mohammed Abba Kaka

## Licence
- [ALX](https://www.alxafrica.com/)
