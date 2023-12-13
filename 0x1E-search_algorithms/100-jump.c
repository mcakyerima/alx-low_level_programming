/*
 * File: 100-jump.c
 * Author: Your Name
 * Description: Jump search algorithm
 */

#include "search_algos.h"

/**
 * print_range - Prints the range where the value may be found.
 *
 * @i: Starting index of the range.
 * @j: Ending index of the range.
 */

void print_range(size_t i, size_t j)
{
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
}


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
 * jump_search - Searches for a value in an array using the jump
 * search algorithm.
 *
 * @array: The given array of integers.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: Index at which the value is found, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jumps = sqrt(size);
	size_t i = 0;
	size_t j = 0;

	if (!array)
		return (-1);
	while (j <= size)
	{
		if (j != 0)
			print_i(array, i);
		if (array[j] >= value)
		{
			print_range(i, j);
			while (i <= j)
			{
				print_i(array, i);
				if (array[i] == value)
					return (i);
				i++;
			}
			return (-1);
		}
		if (j + jumps + jumps > size)
		{
			print_i(array, j);
			print_range(j, j + jumps);
			while (j < size)
			{
				print_i(array, j);
				if (array[j] == value)
					return (j);
				j++;
			}
			return (-1);

		}
		i = j;
		j += jumps;
	}
	return (-1);
}
