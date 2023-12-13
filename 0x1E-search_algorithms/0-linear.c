/*
 * File: 0-linear.c
 * Author: Mohammed kaka
 * Description: Linear search algorithm
 */

#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear
 * search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);


	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
