#include "main.h"
#define NULL 0


/**
 * _strchr - locates a character in a string.
 * @s: pointer to string to search
 * @c: character to find in string
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);

}
