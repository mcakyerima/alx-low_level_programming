/*
 * File_name: 3-set_bit.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that sets the value of a bit to 1 at given index
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number
 * @index: index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
