/*
 * File: 102-interpolation.c
 * Author: Your Name
 * Description: Interpolation search algorithm
 */

#include "search_algos.h"

/**
 * print_i - Prints the value at the current index during the search.
 *
 * @array: The given array.
 * @i: The index to be printed.
 */
void print_i(int *array, size_t i)
{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

/**
 * interpolation_search - Searches for a value in an array using
 * the interpolation search algorithm.
 *
 * @array: The given array of integers.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: Index at which the value is found, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = l + (((double)(r - l) / (array[r] - array[l]))
		   * (value - array[l]));

	while (pos < size)
	{
		print_i(array, pos);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			r = pos - 1;

		pos = l + (((double)(r - l) / (array[r] - array[l]))
			   * (value - array[l]));
	}

	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
