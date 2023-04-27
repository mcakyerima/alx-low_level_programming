# Singly Linked Lists in C

This project provides a basic implementation of singly linked lists in C, and demonstrates when and why to use linked lists instead of arrays. The following files and types are included:

# List Header File 📜

This header file defines the types and functions used for implementing a singly linked list in C. It is used for storing and accessing data sequentially in memory, providing an alternative to arrays.

## Types 📚

| Type   | Description                                                                                                          |
|--------|----------------------------------------------------------------------------------------------------------------------|
| list_t | A struct representing a singly linked list. It contains the following fields:<br> - char *str: A string representing the data stored in the node.<br> - unsigned int len: The length of the string.<br> - struct list_s *next: A pointer to the next node in the list. |

## Functions 📝

| Function    | Description                                                                                                                                                    |
|-------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| print_list  | Prints all the elements of a `list_t` linked list. If the `str` field of an element is NULL, the function prints `[0] (nil)`.                                    |
| list_len    | Returns the number of elements in a `list_t` linked list.                                                                                                    |
| add_node    | Adds a new node to the beginning of a `list_t` linked list. If the function fails, it returns NULL. Otherwise, it returns the address of the new element. |
| add_node_end| Adds a new node to the end of a `list_t` linked list. If the function fails, it returns NULL. Otherwise, it returns the address of the new element.        |
| free_list   | Frees a `list_t` linked list.                                                                                                                                  |
| 101-hello_holberton.asm | 64-bit assembly program that prints `Hello, Holberton` followed by a new line using only the `printf()` function without interrupts. |

## Tests

The `tests/` folder contains test files provided by ALX school to verify the correct functionality of the implemented functions.

To use these files, compile them with the necessary header files and source files. Then, run the compiled program and compare the output to the expected output.

## Compilation Example

To compile the project, use the following command:

```c		
gcc -Wall -Werror -Wextra -pedantic *.c -o linked_lists
```
The command above assumes that all .c source files are in the same directory as the lists.h header file. It also produces an executable file named linked_lists.

## Author
- [Mohammed Ak Yerima](https://www.linkedin.com/in/mohammed-abba-kaka-a69144195/)
