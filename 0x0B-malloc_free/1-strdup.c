#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or
 * if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);

	return (dup_str);
}

