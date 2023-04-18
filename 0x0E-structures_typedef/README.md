# C - Structures and typedef

In this project, I learned how to use structures and typedef in C. The project contains several tasks:

| File Name    | Description                                                                 |
|--------------|-----------------------------------------------------------------------------|
| dog.h        | Header file containing definitions and prototypes for all types and functions used in the project. |
| 1-init_dog.c | C function that initializes a variable of type struct dog.                   |
| 2-print_dog.c| C function that prints a struct dog. If an element of d is NULL, the function prints (nil) instead of the element. If d is NULL, the function prints nothing. |
| 4-new_dog.c  | C function that creates a new dog. Returns NULL if the function fails.       |
| 5-free_dog.c | C function that frees a dog_t structure previously created with new_dog.     |
------

## Data Structure

A `struct dog` is defined in `dog.h` header file with the following elements:

```C
/**
 * struct dog - Defines a dog's attributes.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Description: Defines a dog's attributes.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

```
The `struct` dog is typedefed as `dog_t` in `dog.h` header file.

## Task Details

## Task 0

*dog.h*

Header file that defines a new type `struct dog` with the following elements:

```C
- char *name
- float age
- char *owner
```
## Task 1

*1-init_dog.c*

C function that initializes a variable of type `struct dog`:

```C
void init_dog(struct dog *d, char *name, float age, char *owner);
```
## Task 2

*2-print_dog.c*

C function that prints a struct dog:
```C
void print_dog(struct dog *d);
```

If an element of *`d`* is NULL, the function prints *(nil)* instead of the element. If *`d`* is NULL, the function prints nothing.

## Task 3

*dog.h*

Header file that defines a new type `dog_t` as a new name for the type `struct dog`.

## Task 4

*4-new_dog.c*

C function that creates a new dog:
```C
dog_t *new_dog(char *name, float age, char *owner);
```

Returns NULL if the function fails.

## Task 5

*5-free_dog.c*

C function that frees a `dog_t` structure previously created with `new_dog`:

```C
void free_dog(dog_t *d);
```
## Requirements

- All files are compiled on Ubuntu 20.04 LTS.
- Programs and functions are compiled with gcc 9.3.0 using flags -Wall -Werror -Wextra and -pedantic.
- Code uses the Betty style.
- No global variables are used.
- No more than 5 functions per file.
- All heap memory must be properly freed.
- The code should not leak memory.

## Author 
- Mohammed Abba

###License
- ALX
