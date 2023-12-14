/*
 * File: 104-advanced_binary.c
 * Author: Your Name
 * Description: Advanced binary search algorithm
 */

#include "search_algos.h"

/**
 * print_array - Prints the elements of an array within a given range.
 *
 * @array: The array to be printed.
 * @start: The starting index of the range.
 * @end: The ending index of the range.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; ++i)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");  /* Print newline after the array */
}

/**
 * advanced_binary_recursive - Recursive helper function for
 * advanced binary search.
 *
 * @array: The array to be searched.
 * @low: The lower bound of the current search range.
 * @high: The upper bound of the current search range.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value if
 * found, otherwise -1.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
	}

	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));

	return (advanced_binary_recursive(array, low, mid, value));
}

/**
 * advanced_binary - Searches for the first occurrence of a
 * value in a sorted array.
 *
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value if
 * found, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
