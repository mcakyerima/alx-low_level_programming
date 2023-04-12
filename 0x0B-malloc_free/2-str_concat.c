#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to the concatenated string, or
 *    NULL if insufficient memory was available.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str; /* pointer to concatenated str */
	unsigned int len1, len2; /*lengths of input */

	/* Treat Null strings as empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of input strings */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Allocate memory for concatd string */
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	/* if mem alloctn fails, return NULL */
	if (concat_str == NULL)
		return (NULL);

	/* copy s1 to new memory block */
	strcpy(concat_str, s1);

	/* Append s2 to new memory block */
	strcat(concat_str, s2);

	/* Return pointer to new memory block */
	return (concat_str);
}
