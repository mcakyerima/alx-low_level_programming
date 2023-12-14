/*
 * File: 103-exponential.c
 * Author: Your Name
 * Description: Exponential search algorithm
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
 * print_range - Prints the range where the value may be found.
 *
 * @low: The lower bound of the range.
 * @high: The upper bound of the range.
 */
void print_range(size_t low, size_t high)
{
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
}

/**
 * exponential_search - Searches for a value in an array using the Exponential search algorithm.
 *
 * @array: The given array of integers.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: Index at which the value is found, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;
	size_t i;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		print_i(array, bound);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;

	print_range(low, high);

    /* Perform linear search within the identified range */
	printf("Searching in array: ");
	for (i = low; i <= high && i < size; ++i)
	{
		print_i(array, i);

		if (array[i] == value)
			return (i);
	}

	printf("Value checked array[%lu] is out of range\n", high);

	return (-1);
}
