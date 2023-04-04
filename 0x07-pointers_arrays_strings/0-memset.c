#include "main.h"

/**
* _memset - fills n bytes f memory with a given constant value
* @s: pointer to the memory area
* @n: number of bytes to fill
* @b: number of bytes to fill memory with
* Return: pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);

}
