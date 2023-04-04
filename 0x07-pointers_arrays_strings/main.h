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

#endif
