# 📚 More Singly Linked Lists in C 🖥️

This project provides a basic implementation of singly linked lists in C, and demonstrates when and why to use linked lists instead of arrays. The following files and types are included:

## Introduction 📝

Singly linked lists are a data structure that stores data sequentially in memory. Unlike arrays, which have a fixed size, singly linked lists can grow dynamically as data is added or removed. They are efficient for insertion and deletion of elements, but less efficient for accessing specific elements.

## Types and Functions 📊

This guide provides an implementation of singly linked lists in C, including the following types and functions:

## Types

Type | Description
---- | -----------
listint_t | A struct representing a singly linked list. It contains the following fields: <br> - int n: The integer data stored in the node. <br> - struct listint_s *next: A pointer to the next node in the list.

## Functions

Function | Description
-------- | -----------
print_listint | Prints all the elements of a listint_t linked list.
listint_len | Returns the number of elements in a listint_t linked list.
add_nodeint | Adds a new node to the beginning of a listint_t linked list.
add_nodeint_end | Adds a new node to the end of a listint_t linked list.
free_listint | Frees a listint_t linked list.
free_listint2 | Frees a listint_t linked list and sets the head to NULL.
pop_listint | Deletes the head node of a listint_t linked list and returns its value.
get_nodeint_at_index | Returns the node at the specified index in a listint_t linked list.
sum_listint | Returns the sum of all the elements of a listint_t linked list.
insert_nodeint_at_index | Inserts a new node with a given value at a specified position in a listint_t linked list.
delete_nodeint_at_index | Deletes the node at a specified position in a listint_t linked list.
reverse_listint | Reverses a listint_t linked list.
print_listint_safe | Prints all the elements of a listint_t linked list safely, handling cases where there is a loop in the list.
free_listint_safe | Frees a listint_t linked list safely, handling cases where there is a loop in the list.
find_listint_loop | Finds the loop in a listint_t linked list, if one exists.

## Testing 🧪

The tests/ folder contains test files provided to verify the correct functionality of the implemented functions. You can compile them with the necessary header files and source files, then run the compiled program and compare the output to the expected output.

## Compilation Example 💻

To compile the project, use the following command:

```C
gcc -Wall -Werror -Wextra -pedantic *.c -o singly_linked_lists
```

## Author
- [Mohammed Ak Yerima](https://www.linkedin.com/in/mohammed-abba-kaka-a69144195/)
