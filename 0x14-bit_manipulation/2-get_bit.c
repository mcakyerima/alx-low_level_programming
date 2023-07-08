/*
 * File_name: 2-get_bit.c
 * Author: Mohammed Ak Yerima
 * Description: Function that returns the value of a given bit at index.
 */

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index, starting from 0, of the bit to get
 *
 * Return: the value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
