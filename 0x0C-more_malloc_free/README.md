# C - More malloc, free

This project explores the use of exit, calloc, and realloc functions in C programming language. It includes a folder of test files and a header file, "holberton.h," which contains prototypes for all functions implemented in the project.


Header File 📁
| File               | Prototype                                           |
|--------------------|-----------------------------------------------------|
| 0-malloc_checked.c | void *malloc_checked(unsigned int b);              |
| 1-string_nconcat.c | char *string_nconcat(char *s1, char *s2, unsigned int n); |
| 2-calloc.c         | char *string_nconcat(char *s1, char *s2, unsigned int n); |
| 3-array_range.c    | int *array_range(int min, int max);                |
| 100-realloc.c      | void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size); |

| File               | Prototype                                                           |
|--------------------|---------------------------------------------------------------------|
| 0-malloc_checked.c | void *malloc_checked(unsigned int b);                              |
| 1-string_nconcat.c | char *string_nconcat(char *s1, char *s2, unsigned int n);           |
| 2-calloc.c         | void *_calloc(unsigned int nmemb, unsigned int size);              |
| 3-array_range.c    | int *array_range(int min, int max);                                 |
| 100-realloc.c      | void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size); |

---

### Memory Allocation Functions

Memory allocation is an important concept in programming. Dynamic memory allocation allows us to allocate memory at runtime rather than compile time, enabling programs to be more flexible and efficient. 

C provides three main memory allocation functions: `malloc()`, `calloc()`, and `realloc()`.

#### `malloc()`

The `malloc()` function allocates a block of memory of a specified size, and returns a pointer to the first byte of the block. The size of the block is specified as an argument to `malloc()`, and must be in bytes. 

If there is not enough memory available, `malloc()` returns a `NULL` pointer. Therefore, it is a good practice to check the return value of `malloc()` to ensure that the allocation was successful.

#### `calloc()`

The `calloc()` function is similar to `malloc()`, except that it initializes the allocated memory to zero. Like `malloc()`, `calloc()` also returns a pointer to the first byte of the block of memory allocated. 

The syntax for `calloc()` is similar to that of `malloc()`, with two arguments specifying the number of elements to allocate, and the size of each element.

#### `realloc()`

The `realloc()` function is used to change the size of a previously allocated block of memory. It takes three arguments: a pointer to the previously allocated block of memory, the old size of the block in bytes, and the new size of the block in bytes.

If `realloc()` is successful in changing the size of the block, it returns a pointer to the first byte of the block. If `realloc()` fails to allocate the new block of memory, it returns a `NULL` pointer, and the original block of memory is left unchanged. It is important to note that `realloc()` may move the block of memory to a new location in memory.

In summary, `malloc()`, `calloc()`, and `realloc()` are the main memory allocation functions in C. `malloc()` is used to allocate a block of memory of a specified size, `calloc()` is used to allocate a block of memory and initialize it to zero, and `realloc()` is used to change the size of a previously allocated block of memory.

## Tasks 📃
0. Trust no one
- `0-malloc_checked.c`: A C function that returns a pointer to a newly-allocated space in memory using malloc function.
    - If the malloc function fails, the function terminates the process with a status value of 98.

1. `string_nconcat`
- `1-string_nconcat.c`: A C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings.
    - The returned pointer contains the first string followed by the first n bytes of the second string, null-terminated.
    - If n is greater than or equal to the length of the second string, the entire string is used.
    - If NULL is passed as a string, the function treats the parameter as an empty string.
    - If the function fails, it returns NULL.

2. `_calloc`
- `2-calloc.c`: A C function that returns a pointer to a newly-allocated space in memory for an array, using malloc function.
    - Allocates memory for an array of nmemb elements of size bytes each.
    - The memory is set to zero.
    - If nmemb is 0, size is 0, or the function fails, it returns NULL.

3. `array_range`
- `3-array_range.c`: A C function that returns a pointer to a newly-allocated space in memory containing an array of integers.
    - The array contains all the values from the minimum to the maximum values, inclusive, ordered from the minimum to the maximum.
    - If the minimum is greater than the maximum or the function fails, it returns NULL.

4. `_realloc`
- `100-realloc.c`: A C function that reallocates a memory block using malloc and free functions.
    - The parameter ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size).
    - The parameter old_size is the size, in bytes, of the allocated space for ptr.
    - The parameter new_size is the new size, in bytes, of the new memory block.
    - The contents of ptr are copied to the newly-allocated space in the range from the start of ptr up to the minimum of old_size and new_size.
    - If new_size is greater than old_size, the "added" memory is not initialized.
    - If new_size is equal to old_size, the function returns ptr.
    - If ptr is NULL, the call is equivalent to malloc(new_size) for all values of old_size and new_size.
    - If new_size is 0 and ptr is not NULL, the call is equivalent to free(ptr) and the function returns NULL.

5. We must accept finite disappointment, but never lose infinite hope
- `101-mul.c`: A C program that multiplies two positive numbers.
    - Usage: mul num1 num2.
    - The function assumes num1 and num2 are passed in base 10.
    - Prints the result followed by a new line.
    - If the number of arguments is incorrect or either of num1 or num2 contains non-digits, the function prints Error followed by a new line and exits with a status of 98.

## Author
- Mohammed Abba

## Licence
- ALX
