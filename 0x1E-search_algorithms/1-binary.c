/*
 * File: 1-binary.c
 * Author: Mohammed Ak Yerima
 * Description: Binary search algorithm
 */

#include "search_algos.h"

/**
 * print_array - function that prints array while in binary search
 * @array: a pointer to the head of the array
 * @left: the left indes of the main array
 * @right: the right indes of the main array
 */
 void print_array(int *array, size_t left, size_t right)
 {
	size_t i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
 }


/**
 * binary_search - Searches for a value in an array using binary
 * search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		print_array(array, low, high);

		if (array[mid] == value)
		{
			return (mid);
		}
		if( array[mid] < value)
		{
			low = mid + 1;
		}else {
			high = mid - 1;
		}
	}
	return (-1);
}
