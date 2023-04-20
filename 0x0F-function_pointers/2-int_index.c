/*
 * File: 2-int_index.c
 * Author: Mohammed Abba
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - (-1).
 *         Otherwise - Return the index of the first element for which
 *                     the cmp function that does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
