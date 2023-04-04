#ifndef MAIN_H
#define MAIN_H

/**
* _putchar - puts a character to the standart output
* @c : the character to put to the standart output
*/

int _putchar(char c);

/** _memset - fills n bytes of memory with a constant value
* @s: the pointer to memory area
* @b: constant value
* @n: number of bytes to fill
* Return: memory location
*/

char *_memset(char *s, char b, unsigned int n);


/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n);


/**
 * _strchr - locates a character in a string.
 * @s: pointer to string to search
 * @c: character to find in string
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c);



/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate 1st occurrence of character in string and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accepted target
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size);

/**
 * set_string - set value of pointer to a char
 * @s: variable of type pointer
 * @to: char
 */

void set_string(char **s, char *to);

#endif
