/*
 * File_name: 0-binary_to_unit.c
 * Author: Mohammed Ak Yerima
 * Description: Function that converts number to an unsigned int.
 */

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 *	in the string b that is not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int base = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			num += base;
		else if (b[i] != '0')
			return (0);

		base *= 2;
		i--;
	}

	return (num);
}
